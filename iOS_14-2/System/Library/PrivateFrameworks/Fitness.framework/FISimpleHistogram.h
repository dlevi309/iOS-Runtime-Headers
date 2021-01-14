/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


#import <Fitness/Fitness-Structs.h>
@interface FISimpleHistogram : NSObject {

	unsigned long long _bucketCount;
	SCD_Struct_FI2* _buckets;

}
-(long long)bucketCount;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)descriptionArray;
-(id)initWithNumberOfBuckets:(long long)arg1 ;
-(double)valueForBucketAtIndex:(unsigned long long)arg1 ;
-(void)addValue:(double)arg1 toBucketAtIndex:(unsigned long long)arg2 ;
-(long long)numberOfValuesInBucketAtIndex:(unsigned long long)arg1 ;
@end

