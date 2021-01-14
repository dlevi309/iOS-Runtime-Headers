/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSCalendar, NSString;

@interface WFWeatherChannelParserV2 : NSObject <WFForecastDataParser> {

	NSCalendar* _calendar;

}

@property (nonatomic,retain) NSCalendar * calendar;                 //@synthesize calendar=_calendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expectedDailyForecastCount;
+(unsigned long long)expectedHourlyForecastCount;
+(id)componentsForCurrentForecast;
+(id)componentsForHourlyForecasts;
+(id)componentsForDailyForecasts;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(id)parseAirQualityData:(id)arg1 location:(id)arg2 error:(id*)arg3 ;
-(id)parseCurrentCondition:(id)arg1 ;
-(id)parseDailyForecasts:(id)arg1 ;
-(id)parseHourlyForecasts:(id)arg1 ;
-(void)parseCommonComponents:(id)arg1 data:(id)arg2 ;
-(unsigned long long)_pressureTrendFromWeatherChannelCode:(id)arg1 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
@end

