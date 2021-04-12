/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKUnit *)overriddenCanonicalUnit;
-(Class)dataObjectClass;
-(long long)aggregationStyle;
-(long long)overriddenAggregationStyle;
-(HKSampleType *)underlyingSampleType;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3 ;
-(id)canonicalUnit;
@end

