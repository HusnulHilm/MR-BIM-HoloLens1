using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScalePrint : MonoBehaviour
{

    [SerializeField]
    private Transform GameObject;

    [SerializeField]
    private Transform AppBar;

    [SerializeField]
    private TextMesh DistanceText = default;

    //[SerializeField]
    //private Vector3 multiplier;

    [SerializeField]
    private Vector3 scaleChange;

    /*
    [SerializeField]
    private float xInp;

    [SerializeField]
    private float yInp;
    
    [SerializeField]
    private float zInp;
    */
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

        // Calculate scale x,y,z
        var scale = GameObject.transform.localScale;
        //scaleChange = new Vector3(xInp, yInp, zInp);
        scale += scaleChange;
        // Convert to cm
        scale = scale * 100;
        DistanceText.text = scale.ToString("0.0") + " cm";
        DistanceText.transform.position = AppBar.position;


    }
}
