/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTemperatureFormatter:(NWMTemperatureFormatter *)arg1 ;
-(NWMTemperatureFormatter *)temperatureFormatter;
-(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)switcherTemplateWithFamily:(long long)arg1 ;
-(id)graphicCircularTemplateForEntryModel:(id)arg1 ;
-(id)_richCircularTemplateForComplicationFamily:(long long)arg1 entryModel:(id)arg2 ;
-(id)circularSmallTemplateForEntryModel:(id)arg1 ;
-(id)extraLargeTemplateForEntryModel:(id)arg1 ;
-(id)graphicBezelTemplateForEntryModel:(id)arg1 ;
-(id)graphicCornerTemplateForEntryModel:(id)arg1 ;
-(id)graphicExtraLargeCircularTemplateForEntryModel:(id)arg1 ;
-(id)modularSmallTemplateForEntryModel:(id)arg1 ;
-(id)utilitarianSmallTemplateForEntryModel:(id)arg1 ;
-(id)circularMediumTemplateForEntryModel:(id)arg1 ;
-(id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(BOOL)arg2 entryModel:(id)arg3 ;
-(id)utilitarianLargeTemplateForEntryModel:(id)arg1 ;
@end

