/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSString;

@interface WFWeatherHistorical1DayParserV2 : NSObject <WFForecastDataParser>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(id)parseHistoricalForecast:(id)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4 ;
-(id)parseHistoricalForecastConditionsFromObservations:(id)arg1 forDate:(id)arg2 ;
-(id)parseForecastConditionsFromObservations:(id)arg1 calendar:(id)arg2 ;
@end

