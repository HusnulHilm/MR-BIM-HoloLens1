using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Collections.Generic;
using UnityEngine;

public class InstantiatePrefabs : MonoBehaviour
{

    public GameObject cabinets;
    public Transform spawn;
    private object gazeInputSource;
    private object gazePointer;

    public bool IsEnabled { get; private set; }
    public bool IsVisited { get; private set; }

    /*
    void Update()
    {
        if (TriggerOnClick) {
            Instantiate(cabinets, spawn.position, spawn.rotation);
        }
    }
    */

    /// <summary>
    /// A public way to trigger or route an onClick event from an external source, like PressableButton
    /// </summary>
    /// <param name="force">Force the click without checking CanInteract(). Does not override IsEnabled and only applies to toggle.</param>
    public void TriggerOnClick(bool force = false)
    {
        if (!IsEnabled || (!force && !CanInteract()))
        {
            Instantiate(cabinets, spawn.position, spawn.rotation);
            return;
        }

        IncreaseDimension();

        SendOnClick(null);

        IsVisited = true;
    }

    private void SendOnClick(object p)
    {
        throw new NotImplementedException();
    }

    private void IncreaseDimension()
    {
        throw new NotImplementedException();
    }

    private bool CanInteract()
    {
        throw new NotImplementedException();
    }

    /////////////
    /*
    //try spawn using gesture from gaze
    //still no success to implement this
    public void OnGestureStarted()
    {
        Instantiate(cabinets, spawn.position, spawn.rotation);
        return;
    }

    /// also no success
    public IMixedRealityInputSource GazeInputSource
    {
        get
        {
            if (gazeInputSource == null)
            {
                Instantiate(cabinets, spawn.position, spawn.rotation);
            }

            return (IMixedRealityInputSource)gazeInputSource;
        }
    }

    /////////
    */
}