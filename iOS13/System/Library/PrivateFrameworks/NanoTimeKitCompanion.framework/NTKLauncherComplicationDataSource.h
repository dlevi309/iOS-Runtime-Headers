/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3 ;
-(id)_appTitle;
-(id)complicationApplicationIdentifier;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(id)currentSwitcherTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_currentTimelineEntry;
-(id)_modularSmallTemplate;
-(id)_utilitarianSmallTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureBezelTemplate;
-(id)_signatureCornerTemplate;
-(id)_utilitarianLargeTemplate;
-(id)_circularTemplateMedium:(BOOL)arg1 ;
-(id)_modularLargeTemplate;
-(id)_extraLarge;
-(id)_appTintColor;
-(id)_complicationLaunchURL;
-(id)_complicationApplicationIdentifier;
-(id)_tintableAppImageProvider;
-(id)_fullColorImageProvider;
-(void)_addBackgroundColorToTemplate:(id)arg1 ;
-(id)_appBackgroundColor;
-(id)_tinCanAppTintColor;
@end

