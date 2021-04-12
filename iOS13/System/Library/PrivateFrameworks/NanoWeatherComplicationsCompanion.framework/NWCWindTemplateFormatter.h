/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWCTemplateFormattable.h>

@class NSString;

@interface NWCWindTemplateFormatter : NSObject <NWCTemplateFormattable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)switcherTemplateWithFamily:(long long)arg1 ;
-(id)graphicCircularTemplateForConditions:(id)arg1 ;
-(id)_graphicRectangularTemplateWithTextProvider:(id)arg1 hourlyForecastedConditions:(id)arg2 timeZone:(id)arg3 ;
-(id)circularSmallTemplateForConditions:(id)arg1 ;
-(id)extraLargeTemplateForConditions:(id)arg1 ;
-(id)graphicCornerTemplateForConditions:(id)arg1 ;
-(id)modularSmallTemplateForConditions:(id)arg1 ;
-(id)utilitarianSmallTemplateForConditions:(id)arg1 ;
-(id)circularMediumTemplateForConditions:(id)arg1 ;
-(id)utilitarianLargeTemplateForConditions:(id)arg1 ;
-(id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(BOOL)arg2 conditions:(id)arg3 ;
-(id)graphicBezelTemplateForConditions:(id)arg1 ;
-(id)_windDirectionAbbreviationFromConditions:(id)arg1 ;
-(id)_windSpeedFromConditions:(id)arg1 ;
-(id)_windUnit;
-(id)graphicRectangularTemplateForLocalLocation:(BOOL)arg1 timeZone:(id)arg2 conditions:(id)arg3 hourlyForecastedConditions:(id)arg4 ;
@end

