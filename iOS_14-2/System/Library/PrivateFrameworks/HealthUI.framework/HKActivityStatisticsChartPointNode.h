/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKValueRange, NSNumber;

@interface HKActivityStatisticsChartPointNode : NSObject {

	HKValueRange* _dateRange;
	long long _type;
	NSNumber* _value;

}

@property (nonatomic,readonly) HKValueRange * dateRange;              //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                      //@synthesize value=_value - In the implementation block
-(HKValueRange *)dateRange;
-(long long)type;
-(NSNumber *)value;
-(id)initWithRange:(id)arg1 type:(long long)arg2 value:(id)arg3 ;
@end

