/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDUserCloudShareControllerDelegate <NSObject>
@required
-(void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(/*^block*/id)arg9;
-(void)userCloudShareController:(id)arg1 sendRepairInfo:(id)arg2 toConnection:(id)arg3 home:(id)arg4 containerID:(id)arg5;
-(void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;
-(void)userCloudShareController:(id)arg1 wakeClientForRepairWithContainerID:(id)arg2;
-(id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;
-(id)currentDateForUserCloudShareController:(id)arg1;

@end

