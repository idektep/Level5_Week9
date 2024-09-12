void SentData(int item_selected)
{
  Serial.print(item_selected);
  switch (item_selected) 
  {
    case 1:
      Serial1.print("1"); //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<1
      break;

    case 2:
      Serial2.print("1"); //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
      break;

    case 3:
            break; 

    case 0:
      break;

    default:
      break;
  }
}