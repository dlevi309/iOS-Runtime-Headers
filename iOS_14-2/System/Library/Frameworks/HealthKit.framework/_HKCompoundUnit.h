/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKUnit.h>

@class _HKFactorization, _HKDimension;

@interface _HKCompoundUnit : HKUnit {

	_HKFactorization* _baseUnits;
	_HKDimension* _dimension;
	os_unfair_lock_s _dimensionLock;

}
+(BOOL)supportsSecureCoding;
+(id)unitWithBaseUnits:(id)arg1 ;
-(id)unitString;
-(id)dimension;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_baseUnits;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBaseUnits:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

