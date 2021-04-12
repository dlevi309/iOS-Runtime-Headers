/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWCTemplateFormattable.h>

@class NWMTemperatureFormatter, CLKTextProvider, NSString;

@interface NWCConditionsTemplateFormatter : NSObject <NWCTemplateFormattable> {

	NWMTemperatureFormatter* _temperatureFormatter;
	CLKTextProvider* _noDataTextProvider;

}

@property (nonatomic,retain) NWMTemperatureFormatter * temperatureFormatter;              //@synthesize temperatureFormatter=_temperatureFormatter - In the implementation block
@property (nonatomic,retain) CLKTextProvider * noDataTextProvider;                        //@synthesize noDataTextProvider=_noDataTextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(NWMTemperatureFormatter *)temperatureFormatter;
-(void)setTemperatureFormatter:(NWMTemperatureFormatter *)arg1 ;
-(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)switcherTemplateWithFamily:(long long)arg1 ;
-(CLKTextProvider *)noDataTextProvider;
-(id)graphicCircularTemplateForConditions:(id)arg1 ;
-(id)_graphicRectangularTemplateWithTextProvider:(id)arg1 hourlyForecastedConditions:(id)arg2 timeZone:(id)arg3 ;
-(id)circularSmallTemplateForConditions:(id)arg1 ;
-(id)extraLargeTemplateForConditions:(id)arg1 ;
-(id)graphicBezelTemplateForConditions:(id)arg1 dailyForecastedConditions:(id)arg2 ;
-(id)graphicCornerTemplateForConditions:(id)arg1 ;
-(id)graphicRectangularTemplateForLocalLocation:(BOOL)arg1 timeZone:(id)arg2 conditions:(id)arg3 dailyForecastedConditions:(id)arg4 hourlyForecastedConditions:(id)arg5 ;
-(id)modularSmallTemplateForConditions:(id)arg1 ;
-(id)utilitarianSmallTemplateForConditions:(id)arg1 ;
-(id)circularMediumTemplateForConditions:(id)arg1 ;
-(void)setNoDataTextProvider:(CLKTextProvider *)arg1 ;
@end

