/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWCTemplateFormattable.h>

@class NWMTemperatureFormatter, NSString;

@interface NWCWeatherTemplateFormatter : NSObject <NWCTemplateFormattable> {

	NWMTemperatureFormatter* _temperatureFormatter;

}

@property (nonatomic,retain) NWMTemperatureFormatter * temperatureFormatter;              //@synthesize temperatureFormatter=_temperatureFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(NWMTemperatureFormatter *)temperatureFormatter;
-(void)setTemperatureFormatter:(NWMTemperatureFormatter *)arg1 ;
-(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)switcherTemplateWithFamily:(long long)arg1 ;
-(id)circularSmallTemplateForConditions:(id)arg1 ;
-(id)extraLargeTemplateForConditions:(id)arg1 ;
-(id)modularSmallTemplateForConditions:(id)arg1 ;
-(id)utilitarianSmallTemplateForConditions:(id)arg1 ;
-(id)circularMediumTemplateForConditions:(id)arg1 ;
-(id)graphicCircularTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2 ;
-(id)graphicBezelTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2 ;
-(id)graphicCornerTemplateForCurrentObservations:(id)arg1 dailyForecastedConditions:(id)arg2 ;
-(id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(BOOL)arg2 airQualityConditions:(id)arg3 conditions:(id)arg4 dailyForecastedConditions:(id)arg5 ;
-(id)utilitarianLargeTemplateForConditions:(id)arg1 ;
@end

