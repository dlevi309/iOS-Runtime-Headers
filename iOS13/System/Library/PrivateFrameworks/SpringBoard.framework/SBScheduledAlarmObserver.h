/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject {

	MTAlarmManager* _alarmManager;

}
+(id)sharedInstance;
-(id)init;
-(void)_nextAlarmChanged:(id)arg1 ;
-(void)_updateAlarmStatusBarItem;
@end

