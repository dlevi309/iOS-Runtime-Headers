/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(NSString *)environment;
-(id)hostUrl;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4 rules:(id)arg5 ;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
-(id)initWithVersion:(id)arg1 environment:(id)arg2 ;
-(void)setForecastRequestFormatterClass:(Class)arg1 ;
-(void)setForecastParser:(id<WFForecastDataParser>)arg1 ;
-(Class)forecastRequestFormatterClass;
-(id<WFForecastDataParser>)forecastParser;
@end

