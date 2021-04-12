/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)currentSwitcherTemplate;
-(id)complicationApplicationIdentifier;
-(id)_currentTimelineEntry;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_modularSmallTemplate;
-(id)_utilitarianSmallTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureBezelTemplate;
-(id)_signatureCornerTemplate;
-(unsigned long long)timelineAnimationBehavior;
-(id)_utilitarianLargeTemplate;
-(id)_circularTemplateMedium:(BOOL)arg1 ;
-(id)_modularLargeTemplate;
-(id)_extraLarge;
-(id)_graphicExtraLargeTemplate;
-(id)_appTintColor;
-(id)_complicationLaunchURL;
-(id)_complicationApplicationIdentifier;
-(id)_tintableAppImageProvider;
-(id)_appTitle;
-(id)_fullColorImageProvider;
-(id)_tinCanAppTintColor;
-(id)_appBackgroundColor;
@end

