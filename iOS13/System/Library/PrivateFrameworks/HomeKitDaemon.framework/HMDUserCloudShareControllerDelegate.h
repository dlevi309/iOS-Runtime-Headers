/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDUserCloudShareControllerDelegate <NSObject>
@required
-(void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(/*^block*/id)arg9;
-(void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;
-(id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;
-(id)currentDateForUserCloudShareController:(id)arg1;

@end

