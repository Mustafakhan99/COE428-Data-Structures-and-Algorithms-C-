void mySort(int d[], unsigned int n){  int i,r,lock;  r=0;
  for(i=1;i<n;i++)
  {
     lock= d[i];
      r=i-1;
    while(r>=0 && d[r]>lock)
     {	 
       d[r+1] =d[r];	 r=r-1;
       }
      d[r+1]=lock;
    }
    }
