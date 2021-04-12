/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@protocol SCLTransportControllerDelegate <NSObject>
@required
-(void)transportController:(id)arg1 didReceiveSchedule:(id)arg2 forInitialSync:(BOOL)arg3;
-(void)transportController:(id)arg1 didReceiveUnlockHistoryItem:(id)arg2;
-(id)currentScheduleSettingsForTransportController:(id)arg1;

@end

