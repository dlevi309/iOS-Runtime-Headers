/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>

@class CLKComplicationTemplate;

@interface NWCCompanionBaseDataSource : CLKCComplicationBundleDataSource {

	CLKComplicationTemplate* _template;

}
+(id)appIdentifier;
+(id)localizedAppName;
+(id)complicationLocalizationKey;
-(void)_localeDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)sampleTemplate;
@end

