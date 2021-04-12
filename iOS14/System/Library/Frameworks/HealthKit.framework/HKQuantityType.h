/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSampleType.h>

@class HKUnit, _HKDimension;

@interface HKQuantityType : HKSampleType {

	HKUnit* _canonicalUnit;
	os_unfair_lock_s _canonicalUnitLock;

}

@property (nonatomic,readonly) _HKDimension * dimension; 
@property (nonatomic,readonly) HKUnit * canonicalUnit; 
@property (readonly) long long aggregationStyle; 
+(id)_quantityTypeWithCode:(long long)arg1 ;
-(_HKDimension *)dimension;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
-(long long)aggregationStyle;
-(void)validateUnit:(id)arg1 ;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(id)_initWithCode:(long long)arg1 ;
-(void)validateUnitFromString:(id)arg1 ;
-(HKUnit *)canonicalUnit;
@end

