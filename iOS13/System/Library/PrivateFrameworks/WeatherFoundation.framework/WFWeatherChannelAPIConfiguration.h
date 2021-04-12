/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFAPIConfigurationProtocol.h>

@protocol WFForecastDataParser;
@class NSMutableDictionary, NSString;

@interface WFWeatherChannelAPIConfiguration : NSObject <WFAPIConfigurationProtocol> {

	NSMutableDictionary* _requestFormatterForForecastType;
	NSMutableDictionary* _requestParserForForecastType;
	Class _defaultForecastRequestFormatterClass;
	id<WFForecastDataParser> _defaultForecastParser;

}

@property (nonatomic,retain) NSMutableDictionary * requestFormatterForForecastType;              //@synthesize requestFormatterForForecastType=_requestFormatterForForecastType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestParserForForecastType;                 //@synthesize requestParserForForecastType=_requestParserForForecastType - In the implementation block
@property (nonatomic,retain) Class defaultForecastRequestFormatterClass;                         //@synthesize defaultForecastRequestFormatterClass=_defaultForecastRequestFormatterClass - In the implementation block
@property (nonatomic,retain) id<WFForecastDataParser> defaultForecastParser;                     //@synthesize defaultForecastParser=_defaultForecastParser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(id)initWithVersion:(id)arg1 ;
-(id)hostUrl;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4 rules:(id)arg5 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
-(void)setDefaultForecastFormatter:(Class)arg1 ;
-(void)setDefaultForecastParser:(id<WFForecastDataParser>)arg1 ;
-(void)setRequestFormatterForForecastType:(NSMutableDictionary *)arg1 ;
-(void)setRequestParserForForecastType:(NSMutableDictionary *)arg1 ;
-(void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2 ;
-(void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2 ;
-(NSMutableDictionary *)requestFormatterForForecastType;
-(Class)defaultForecastRequestFormatterClass;
-(NSMutableDictionary *)requestParserForForecastType;
-(id<WFForecastDataParser>)defaultForecastParser;
-(void)setDefaultForecastRequestFormatterClass:(Class)arg1 ;
@end

