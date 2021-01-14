/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSString;

@interface WFWeatherDataServiceParserV1 : NSObject <WFForecastDataParser>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dateFormatter;
+(id)dateFormatter;
-(id)parseAQIScaleNamed:(id)arg1 language:(id)arg2 data:(id)arg3 error:(id*)arg4 ;
-(id)changeForecastDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)severeWeatherEventDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parseSevereWeatherEventsFromData:(id)arg1 withUnit:(int)arg2 ;
-(void)parseWeatherComponentsFromData:(id)arg1 intoConditions:(id)arg2 withUnit:(int)arg3 ;
-(id)airQualityDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)nowLinksDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parsePollenFromData:(id)arg1 ;
-(id)parseChangeForecastFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)parsedCategoryFromDictionary:(id)arg1 ;
-(id)dailyAlmanacDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)hourlyHistoryDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parseNextHourPrecipitationFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)parseHourlyForecastFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)nextHourPrecipitationEventDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parseCurrentObservationsFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)parseAirQualityFromData:(id)arg1 locale:(id)arg2 ;
-(id)dailyForecastDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parseAlmanacFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)parseMetaDataFromData:(id)arg1 ;
-(id)currentObservationsDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parseDailyForecastFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)parseWeatherComponentsFromData:(id)arg1 withUnit:(int)arg2 ;
-(void)parseNowLinksFromData:(id)arg1 intoConditions:(id)arg2 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(id)parsePollutants:(id)arg1 ;
-(id)dailyHistoryDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parseHourlyHistoryFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)hourlyForecastDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)pollenDictFromData:(id)arg1 types:(unsigned long long)arg2 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
-(id)parseDailyHistoryFromData:(id)arg1 withUnit:(int)arg2 ;
-(id)parseForecastDataFromDict:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8 ;
@end

