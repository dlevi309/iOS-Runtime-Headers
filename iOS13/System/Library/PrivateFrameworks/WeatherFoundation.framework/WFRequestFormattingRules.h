/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFSettings;
@interface WFRequestFormattingRules : NSObject {

	id<WFSettings> _settings;

}

@property (nonatomic,readonly) id<WFSettings> settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(id<WFSettings>)settings;
-(long long)locationNumDecimalsOfPrecision;
-(BOOL)aqiEnabledForCountryCode:(id)arg1 ;
@end

