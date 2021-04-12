/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class WALocationCondition, NSNumber;

@interface WALocationConditionData : NSObject <AADataEventType> {

	WALocationCondition* _condition;
	NSNumber* _temperature;
	NSNumber* _temperatureHigh;
	NSNumber* _temperatureLow;

}

@property (nonatomic,readonly) WALocationCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) NSNumber * temperature;                       //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,readonly) NSNumber * temperatureHigh;                   //@synthesize temperatureHigh=_temperatureHigh - In the implementation block
@property (nonatomic,readonly) NSNumber * temperatureLow;                    //@synthesize temperatureLow=_temperatureLow - In the implementation block
+(id)dataName;
-(WALocationCondition *)condition;
-(NSNumber *)temperature;
-(NSNumber *)temperatureHigh;
-(NSNumber *)temperatureLow;
-(id)toDict;
-(id)initWithCondition:(id)arg1 temperature:(id)arg2 temperatureHigh:(id)arg3 temperatureLow:(id)arg4 ;
@end

