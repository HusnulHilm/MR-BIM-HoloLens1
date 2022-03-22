using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine;

//namespace MRTK_HKSample
//{
    /// <summary>
    /// Hand Ruler
    /// Reference video: https://twitter.com/hi_rom_/status/1267100537578639363
    /// </summary>
    public class HandRuler : MonoBehaviour
    {
        [SerializeField]
        private TextMesh DistanceText = default;

        [SerializeField]
        private LineRenderer line = default;

        [SerializeField]
        private Transform LeftPoint = default;
    
        [SerializeField]
        private Transform RightPoint = default;

        /*
        [SerializeField]
        private Transform LeftPosition = default;

        [SerializeField]
        private Transform RightPosition = default;
        */

    //private IMixedRealityHandJointService handJointService = null;
    //private IMixedRealityDataProviderAccess dataProviderAccess = null;

    void Start()
        {
            /*
            handJointService = CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>();
            if (handJointService == null)
            {
                Debug.LogError("Can't get IMixedRealityHandJointService.");
                return;
            }

            dataProviderAccess = CoreServices.InputSystem as IMixedRealityDataProviderAccess;
            if (dataProviderAccess == null)
            {
                Debug.LogError("Can't get IMixedRealityDataProviderAccess.");
                return;
            }
            */
            // Hide the Handlay
            //PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);

            Initialize();
        }

        public void Initialize()
        {
            line.SetPosition(0, Vector3.zero);
            line.SetPosition(1, Vector3.zero);
            DistanceText.text = "0 cm";
        }

        void Update()
        {
            // Left Hand
            /*
            var leftIndexTip = handJointService.RequestJointTransform(TrackedHandJoint.IndexTip, Handedness.Left);
            if (leftIndexTip == null)
            {
               Debug.Log("leftIndexTip is null.");
               return;
            }
            */

            // Right Hand
            /*
            var rightIndexTip = handJointService.RequestJointTransform(TrackedHandJoint.IndexTip, Handedness.Right);
            if (rightIndexTip == null)
            {
               Debug.Log("rightIndexTip is null.");
               return;
            }
            */

            //Left point
            var leftIndexTip = LeftPoint;

            //Right point
            var rightIndexTip = RightPoint;

            // Draw a line
            line.SetPosition(0, leftIndexTip.position);
            line.SetPosition(1, rightIndexTip.position);

            line.startWidth = 0.001f;
            line.endWidth = 0.001f;

            // Calculate distance
            var distance = Vector3.Distance(leftIndexTip.position, rightIndexTip.position);
            // Convert to cm
            distance = distance * 100;
            DistanceText.text = distance.ToString("0.0") + " cm";
            DistanceText.transform.position = (leftIndexTip.position + rightIndexTip.position) / 2;
        }
    }
//}