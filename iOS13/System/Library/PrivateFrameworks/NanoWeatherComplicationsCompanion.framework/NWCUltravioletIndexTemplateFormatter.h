/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWCTemplateFormattable.h>

@class NSNumberFormatter, NSString;

@interface NWCUltravioletIndexTemplateFormatter : NSObject <NWCTemplateFormattable> {

	NSNumberFormatter* _indexNumberFormatter;

}

@property (nonatomic,retain) NSNumberFormatter * indexNumberFormatter;              //@synthesize indexNumberFormatter=_indexNumberFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(id)init;
-(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)switcherTemplateWithFamily:(long long)arg1 ;
-(id)graphicCircularTemplateForConditions:(id)arg1 ;
-(id)circularSmallTemplateForConditions:(id)arg1 ;
-(id)extraLargeTemplateForConditions:(id)arg1 ;
-(id)graphicCornerTemplateForConditions:(id)arg1 ;
-(id)modularSmallTemplateForConditions:(id)arg1 ;
-(id)utilitarianSmallTemplateForConditions:(id)arg1 ;
-(id)circularMediumTemplateForConditions:(id)arg1 ;
-(id)utilitarianLargeTemplateForConditions:(id)arg1 ;
-(id)_localizedIndexForConditions:(id)arg1 ;
-(NSNumberFormatter *)indexNumberFormatter;
-(id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(BOOL)arg2 conditions:(id)arg3 ;
-(void)setIndexNumberFormatter:(NSNumberFormatter *)arg1 ;
-(id)_graphicRectangularTemplateWithTextProvider:(id)arg1 conditions:(id)arg2 sevenDayDailyForecastedConditions:(id)arg3 timeZone:(id)arg4 ;
-(id)graphicBezelTemplateForConditions:(id)arg1 ;
-(id)graphicRectangularTemplateForLocalLocation:(BOOL)arg1 timeZone:(id)arg2 conditions:(id)arg3 dailyForecastedConditions:(id)arg4 ;
@end

