// agr hme subarrays sum se related kuh kuch de rkha ho to kaden ka socho kro

// lets say mainly hm kya krte 3 for loop lagate dekho kaise

//   for( int i =0; i< n;i++)
//   {
//      for(int j =i;j<n;j++)
//      {
//         for(int k =i ;k<j;k++)
//         {
//             sum+=....
//         }
//      }
//   }
// ye n^3 me hoga

// ya tum aise krlo ki n^2 me krlo

// for(inr i =0 ;i< n;i++)
// {
//     sum =0;
//     for(int j =i;j<n;j++)
//     {
//         sum+=arr[j];
//     }
// }

// ab ye wala bhi 2 se tarike so ho skta ki hm prefix sum bana le

// to ab n me krne ke liye hm kadane algorithm use krte h

// isme kya kro tum mainly 3 sreps ka dhayn rkhna h tumhe

// 1- ek current sum rkho har i ke saath update ho rha ho
// 2- ek max sum rkho jo hamesha current sum ke according max sum update kr ske
// 3- ye bhi check krlo ki agar curr sum < 0 h to curr sum wapas 0 initaliste krdo jo hme waha se subarray start hi nhi krni

