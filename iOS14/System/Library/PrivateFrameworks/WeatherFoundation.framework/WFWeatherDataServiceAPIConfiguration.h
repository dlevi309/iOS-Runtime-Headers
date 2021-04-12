/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFAPIConfigurationProtocol.h>

@protocol WFForecastDataParser;
@class NSString;

@interface WFWeatherDataServiceAPIConfiguration : NSObject <WFAPIConfigurationProtocol> {

	Class _forecastRequestFormatterClass;
	id<WFForecastDataParser> _forecastParser;
	NSString* _environment;

}

@property (nonatomic,retain) Class forecastRequestFormatterClass;                  //@synthesize forecastRequestFormatterClass=_forecastRequestFormatterClass - In the implementation block
@property (nonatomic,retain) id<WFForecastDataParser> forecastParser;              //@synthesize forecastParser=_forecastParser - In the implementation block
@property (nonatomic,readonly) NSString * environment;                             //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setForecastParser:(id<WFForecastDataParser>)arg1 ;
-(id)parseAQIScaleNamed:(id)arg1 language:(id)arg2 data:(id)arg3 error:(id*)arg4 ;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6 ;
-(id<WFForecastDataParser>)forecastParser;
-(Class)forecastRequestFormatterClass;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8 ;
-(id)hostUrl;
-(BOOL)isValid;
-(void)setForecastRequestFormatterClass:(Class)arg1 ;
-(id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2 ;
-(NSString *)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVersion:(id)arg1 environment:(id)arg2 ;
@end

