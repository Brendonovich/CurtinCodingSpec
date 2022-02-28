#define MAX_AGE 20

int main()
{
  int max;
  int age[] = {10, 20, 30, 40, 50};

  max = 0;
  for ( int i = 0; i < MAX_AGE; i++ )
  {
    if ( age[i] > max )
    {
      max = age[i];
    }
  }
}