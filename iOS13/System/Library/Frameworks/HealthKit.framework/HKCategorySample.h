/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSample.h>

@class HKCategoryType;

@interface HKCategorySample : HKSample {

	long long _value;

}

@property (readonly) HKCategoryType * categoryType; 
@property (readonly) long long value; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
+(id)categorySampleWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5 ;
+(id)_categorySamplesSplittingDurationWithType:(id)arg1 value:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)value;
-(HKCategoryType *)categoryType;
-(id)_valueDescription;
-(void)_setValue:(long long)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(long long)hk_integerValue;
-(id)_bedtimeAlarmWithCalendar:(id)arg1 ;
@end

