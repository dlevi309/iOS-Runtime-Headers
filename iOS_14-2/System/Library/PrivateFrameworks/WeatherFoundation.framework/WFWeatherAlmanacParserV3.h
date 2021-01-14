/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSString;

@interface WFWeatherAlmanacParserV3 : NSObject <WFForecastDataParser>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parseAlmanacForecastDataFromJson:(id)arg1 location:(id)arg2 date:(id)arg3 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
@end

