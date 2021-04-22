
long fact_rec(long n){
  if (n == 0){
    return 1;
  } else {
    return n * fact_rec(n-1);
  }
}

long fact_itr(long n){
  long result=1;
  long i;
  for(i = 1; i <= n; i++){
    result = result * i;
  }
  return result;
}

long fact_2x1(long n){
  long result=1;
  long i;
  for(i = 1; i <= n-1; i+=2){
    result = result * i * (i+1);
  }
  
  for(; i <= n; i++){
    result = result * i;
  }

  return result;
}

long fact_2x2(long n){
  long result1=1;
  long result2=1;
  long i;
  for(i = 1; i <= n-1; i+=2){
    result1 = result1 * i;
    result2 = result2 * (i+1);
  }
  result1 = result1 * result2;
  for(; i <= n; i++){
    result1 = result1 * i;
  }

  return result1;
}

long fact_4x2(long n){
  long result1=1;
  long result2=1;
  long i;
  for(i = 1; i <= n-3; i+=4){
    result1 = result1 * i * (i+1);
    result2 = result2 * (i+2) * (i+3);
  }
  result1 = result1 * result2;
  for(; i <= n; i++){
    result1 = result1 * i;
  }

  return result1;
}

long fact(long n){
  long result1=1;
  long result2=1;
  long i;
  for(i = 1; i <= n-3; i+=4){
    result1 = result1 * (i * (i+1));
    result2 = result2 * ((i+2) * (i+3));
  }
  result1 = result1 * result2;
  for(; i <= n; i++){
    result1 = result1 * i;
  }

  return result1;
}


