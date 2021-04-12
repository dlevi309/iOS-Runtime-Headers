/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dimension;
-(id)unitString;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(double*)arg1 withCycleSet:(id)arg2 ;
-(id)_initWithBaseUnits:(id)arg1 ;
@end

