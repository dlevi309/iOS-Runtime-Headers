/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFAPIConfigurationProtocol <NSObject,NSCopying>
@property (nonatomic,readonly) BOOL isValid; 
@required
-(id)parseAQIScaleNamed:(id)arg1 language:(id)arg2 data:(id)arg3 error:(id*)arg4;
-(id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id*)arg5 rules:(id)arg6;
-(id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7 rules:(id)arg8;
-(id)hostUrl;
-(BOOL)isValid;
-(id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2;

@end

