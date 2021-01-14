/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoSleepComplication.bundle/NanoSleepComplication
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>

@interface NanoSleepComplication.ComplicationDataSource : CLKCComplicationBundleDataSource {

	 template;

}

@property (readonly,nonatomic) unsigned long long timelineAnimationBehavior; 
+(id)appIdentifier;
+(id)bundleIdentifier;
+(id)localizedAppName;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(id)init;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
@end

