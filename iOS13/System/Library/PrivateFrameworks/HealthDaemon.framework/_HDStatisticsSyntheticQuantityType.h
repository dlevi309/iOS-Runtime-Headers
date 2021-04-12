/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthKit/HKQuantityType.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, HKUnit;

@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding> {

	HKSampleType* _underlyingSampleType;
	long long _overriddenAggregationStyle;
	HKUnit* _overriddenCanonicalUnit;

}

@property (nonatomic,copy,readonly) HKSampleType * underlyingSampleType;              //@synthesize underlyingSampleType=_underlyingSampleType - In the implementation block
@property (nonatomic,readonly) long long overriddenAggregationStyle;                  //@synthesize overriddenAggregationStyle=_overriddenAggregationStyle - In the implementation block
@property (nonatomic,copy,readonly) HKUnit * overriddenCanonicalUnit;                 //@synthesize overriddenCanonicalUnit=_overriddenCanonicalUnit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)syntheticQuantityTypeWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)aggregationStyle;
-(id)canonicalUnit;
-(Class)dataObjectClass;
-(id)_initWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3 ;
-(HKSampleType *)underlyingSampleType;
-(long long)overriddenAggregationStyle;
-(HKUnit *)overriddenCanonicalUnit;
@end

