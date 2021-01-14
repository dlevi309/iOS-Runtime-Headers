/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@class HKCategoryType;

@interface HKCategorySample : HKSample {

	long long _value;

}

@property (readonly) HKCategoryType * categoryType; 
@property (readonly) long long value; 
+(BOOL)supportsSecureCoding;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(BOOL)_isConcreteObjectClass;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5 ;
+(id)_categorySamplesSplittingDurationWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(BOOL)supportsEquivalence;
-(HKCategoryType *)categoryType;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)hk_integerValue;
-(id)initWithCoder:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)_valueDescription;
-(void)_setValue:(long long)arg1 ;
-(long long)value;
@end

