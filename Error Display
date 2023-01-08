int error(float tempValueAmb, float tempValueObj, float current15vDCVal, float current5vDCVal, float currentRelay1Val, float battHVal)
{
  int err = 0;
  if(tempValueAmb > sgTempAmbH_THR)
    err = err | 32;
  if(tempValueObj > sgTempObjH_THR)
    err = err | 16;
  if(currDC15ValH_THR < current15vDCVal)
    err = err | 8;
  if(currDC5ValH_THR < current5vDCVal)
    err = err | 4;
  if(currRelayValH_THR < currentRelay1Val)
    err = err | 2;
  if(battHVal < 13.5)
    err = err | 1;
  return err;
}
