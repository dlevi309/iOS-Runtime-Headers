/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/


@protocol HKSPSleepStoreObserver <NSObject>
@optional
-(void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2;
-(void)sleepStore:(id)arg1 sleepEventDidOccur:(id)arg2;
-(void)sleepStore:(id)arg1 sleepScheduleStateDidChange:(unsigned long long)arg2;
-(void)sleepStore:(id)arg1 sleepModeOnDidChange:(BOOL)arg2;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;

@end

