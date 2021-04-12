/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(long long)aggregationStyle;
-(HKUnit *)canonicalUnit;
-(id)_initWithCode:(long long)arg1 ;
-(void)validateUnit:(id)arg1 ;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
-(void)validateUnitFromString:(id)arg1 ;
@end

