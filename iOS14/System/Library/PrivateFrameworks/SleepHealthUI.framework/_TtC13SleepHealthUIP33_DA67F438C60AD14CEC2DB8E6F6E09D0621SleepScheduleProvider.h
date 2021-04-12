/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <libobjc.A.dylib/HKSPSleepStorePrivateObserver.h>

@interface _TtC13SleepHealthUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0621SleepScheduleProvider : NSObject <HKSPSleepStorePrivateObserver> {

	 currentSchedulePublisher;
	 currentGoalPublisher;
	 eventRecordPublisher;
	 sleepStore;
	 query;

}
-(id)init;
-(void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2 ;
-(void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2 ;
-(void)dealloc;
@end

