/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>

@interface SleepHealthAppPlugin.SleepScheduleProvider : NSObject <HKSPSleepStoreObserver> {

	 currentSchedulePublisher;
	 currentGoalPublisher;
	 currentWindDownDurationPublisher;
	 currentScheduleEnabledPublisher;
	 sleepStore;
	 query;

}
-(id)init;
-(void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2 ;
-(void)dealloc;
@end

