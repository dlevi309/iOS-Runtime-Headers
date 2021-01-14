/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8 ;
-(id)initWithVersion:(id)arg1 ;
-(id)hostUrl;
-(BOOL)isValid;
-(void)setDefaultForecastFormatter:(Class)arg1 ;
-(void)setDefaultForecastParser:(id<WFForecastDataParser>)arg1 ;
-(void)setRequestFormatterForForecastType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)requestParserForForecastType;
-(void)setRequestParserForForecastType:(NSMutableDictionary *)arg1 ;
-(void)setRequestFormatter:(Class)arg1 forForecastType:(unsigned long long)arg2 ;
-(void)setRequestParser:(id)arg1 forForecastType:(unsigned long long)arg2 ;
-(NSMutableDictionary *)requestFormatterForForecastType;
-(Class)defaultForecastRequestFormatterClass;
-(id<WFForecastDataParser>)defaultForecastParser;
-(void)setDefaultForecastRequestFormatterClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

