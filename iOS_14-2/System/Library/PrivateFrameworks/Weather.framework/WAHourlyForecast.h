/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, WFTemperature;

@interface WAHourlyForecast : NSObject <NSCopying> {

	unsigned long long _eventType;
	NSString* _time;
	long long _hourIndex;
	WFTemperature* _temperature;
	NSString* _forecastDetail;
	long long _conditionCode;
	double _percentPrecipitation;

}

@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * time;                             //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long hourIndex;                       //@synthesize hourIndex=_hourIndex - In the implementation block
@property (nonatomic,retain) WFTemperature * temperature;               //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,copy) NSString * forecastDetail;                   //@synthesize forecastDetail=_forecastDetail - In the implementation block
@property (assign,nonatomic) long long conditionCode;                   //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) double percentPrecipitation;               //@synthesize percentPrecipitation=_percentPrecipitation - In the implementation block
+(long long)TimeValueFromString:(id)arg1 ;
+(id)hourlyForecastForLocation:(id)arg1 conditions:(id)arg2 sunriseDateComponents:(id)arg3 sunsetDateComponents:(id)arg4 ;
-(double)percentPrecipitation;
-(void)setPercentPrecipitation:(double)arg1 ;
-(NSString *)time;
-(long long)hourIndex;
-(void)setConditionCode:(long long)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(WFTemperature *)temperature;
-(void)setTime:(NSString *)arg1 ;
-(long long)conditionCode;
-(unsigned long long)eventType;
-(void)setHourIndex:(long long)arg1 ;
-(id)description;
-(void)setTemperature:(WFTemperature *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)forecastDetail;
-(BOOL)isEqual:(id)arg1 ;
-(void)setForecastDetail:(NSString *)arg1 ;
@end

