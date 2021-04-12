/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


#import <Fitness/Fitness-Structs.h>
@interface FISimpleHistogram : NSObject {

	unsigned long long _bucketCount;
	SCD_Struct_FI1* _buckets;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(long long)bucketCount;
-(id)descriptionArray;
-(id)initWithNumberOfBuckets:(long long)arg1 ;
-(double)valueForBucketAtIndex:(unsigned long long)arg1 ;
-(void)addValue:(double)arg1 toBucketAtIndex:(unsigned long long)arg2 ;
-(long long)numberOfValuesInBucketAtIndex:(unsigned long long)arg1 ;
@end

