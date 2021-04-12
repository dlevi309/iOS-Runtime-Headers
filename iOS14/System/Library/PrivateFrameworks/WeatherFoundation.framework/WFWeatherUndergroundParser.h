/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSString;

@interface WFWeatherUndergroundParser : NSObject <WFForecastDataParser>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expectedDailyForecastCount;
+(unsigned long long)expectedHourlyForecastCount;
+(id)componentsForCurrentForecast;
+(id)componentsForHourlyForecasts;
+(id)componentsForDailyForecasts;
+(unsigned long long)conditionFromWeatherUndergroundPhrase:(id)arg1 ;
-(id)parseHistoricalForecast:(id)arg1 error:(id*)arg2 ;
-(void)logParsingErrorAtKeyPath:(id)arg1 error:(id*)arg2 ;
-(id)dateFromUTCDict:(id)arg1 toUnitGranularity:(unsigned long long)arg2 ;
-(id)sanitizedTemperatureForCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2 dict:(id)arg3 ;
-(id)sanitizedNumberForKeyPath:(id)arg1 dict:(id)arg2 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
@end

