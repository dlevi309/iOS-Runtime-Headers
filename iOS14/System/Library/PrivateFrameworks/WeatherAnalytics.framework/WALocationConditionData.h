/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)toDict;
-(NSNumber *)temperature;
-(id)initWithCondition:(id)arg1 temperature:(id)arg2 temperatureHigh:(id)arg3 temperatureLow:(id)arg4 ;
-(NSNumber *)temperatureLow;
-(WALocationCondition *)condition;
-(NSNumber *)temperatureHigh;
@end

