/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSCalendar, NSString;

@interface WFWeatherChannelParserV3 : NSObject <WFForecastDataParser> {

	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;               //@synthesize calendar=_calendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSCalendar *)calendar;
-(void)_parseCommonComponents:(id)arg1 intoConditions:(id)arg2 ;
-(id)_parseForecastedConditions:(id)arg1 individualForecastProcessingBlock:(/*^block*/id)arg2 uniqueParsingBlock:(/*^block*/id)arg3 ;
-(id)_parseCurrentConditions:(id)arg1 ;
-(void)_parseWebLinks:(id)arg1 intoWeatherConditions:(id)arg2 ;
-(id)_parseLastTwentyFourHoursOfObservations:(id)arg1 ;
-(id)_parseHourlyForecastedConditions:(id)arg1 ;
-(id)_parseDailyForecastedConditions:(id)arg1 ;
-(id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id*)arg4 ;
-(id)_parseDailyPollenForecastedConditions:(id)arg1 ;
-(id)_parsePollutants:(id)arg1 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
@end

