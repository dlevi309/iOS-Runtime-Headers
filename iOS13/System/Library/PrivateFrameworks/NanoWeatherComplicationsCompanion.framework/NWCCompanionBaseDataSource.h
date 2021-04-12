/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>

@class CLKComplicationTemplate;

@interface NWCCompanionBaseDataSource : CLKCComplicationBundleDataSource {

	CLKComplicationTemplate* _template;

}
+(id)localizedAppName;
+(id)appIdentifier;
+(id)complicationLocalizationKey;
-(void)dealloc;
-(void)_localeDidChange:(id)arg1 ;
-(id)_complicationTemplate;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
@end

