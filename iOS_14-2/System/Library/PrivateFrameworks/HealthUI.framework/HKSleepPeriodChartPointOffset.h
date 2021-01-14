/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSNumber;

@interface HKSleepPeriodChartPointOffset : NSObject {

	BOOL _continuation;
	NSNumber* _value;

}

@property (nonatomic,readonly) NSNumber * value;               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL continuation;              //@synthesize continuation=_continuation - In the implementation block
+(id)chartPointOffsetWithValue:(id)arg1 continuation:(BOOL)arg2 ;
-(NSNumber *)value;
-(id)initWithValue:(id)arg1 continuation:(BOOL)arg2 ;
-(BOOL)continuation;
@end

