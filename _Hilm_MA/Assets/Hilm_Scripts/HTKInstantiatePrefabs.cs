/*
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine;

#if UNITY_WSA
#if UNITY_2017_2_OR_NEWER
using UnityEngine.XR.WSA.Input;
#else
using UnityEngine.VR.WSA.Input;
#endif
#endif

//namespace HoloToolkit.Examples.SpatialMappingComponent
//{
/// <summary>
/// Simple test script for dropping cubes with physics to observe interactions
/// </summary>
public class HTKInstantiatePrefabs : MonoBehaviour
{
    //public Vector3 offset;
    public Rigidbody spawnPrefab;

    
#if UNITY_WSA
    private GestureRecognizer recognizer;

    [System.Obsolete]
    private void Start()
    {
        recognizer = new GestureRecognizer();
        recognizer.SetRecognizableGestures(GestureSettings.Tap);
#if UNITY_2017_2_OR_NEWER
        recognizer.Tapped += Recognizer_Tapped;
#else
            recognizer.TappedEvent += Recognizer_Tapped;
#endif
        recognizer.StartCapturingGestures();
    }

    private void OnDestroy()
    {
#if UNITY_2017_2_OR_NEWER
        recognizer.Tapped -= Recognizer_Tapped;
#else
            recognizer.TappedEvent -= Recognizer_Tapped;
#endif
    }
    
    private void Recognizer_Tapped(
#if UNITY_2017_2_OR_NEWER
            TappedEventArgs obj
#else
            InteractionSourceKind source, int tapCount, Ray headRay
#endif
            )
    {

        //Rigidbody projectileInstance;
        //projectileInstance = 
        Instantiate(spawnPrefab, CameraCache.Main.transform.position + CameraCache.Main.transform.forward, Quaternion.identity);
        //as Rigidbody;
        //projectileInstance.AddForce((CameraCache.Main.transform.position + CameraCache.Main.transform.forward) * 350f);
    }
#endif
    
}
//}
*/