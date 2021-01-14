/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFSettings;
@interface WFResponseParsingRules : NSObject {

	id<WFSettings> _settings;

}

@property (nonatomic,readonly) id<WFSettings> settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)aqiEnabledForCountryCode:(id)arg1 ;
-(id<WFSettings>)settings;
@end

