/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)currentSwitcherTemplate;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg1 ;
-(id)complicationApplicationIdentifier;
-(BOOL)supportsTapAction;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_templateWithShouldDisplayIdealizeState:(BOOL)arg1 ;
-(unsigned long long)timelineAnimationBehavior;
@end

