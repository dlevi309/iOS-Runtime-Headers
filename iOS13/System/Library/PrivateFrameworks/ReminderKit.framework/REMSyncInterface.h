/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMXPCDaemonController;

@interface REMSyncInterface : NSObject {

	REMXPCDaemonController* _daemonController;

}

@property (nonatomic,retain) REMXPCDaemonController * daemonController;              //@synthesize daemonController=_daemonController - In the implementation block
-(id)init;
-(REMXPCDaemonController *)daemonController;
-(void)setDaemonController:(REMXPCDaemonController *)arg1 ;
-(id)initWithDaemonController:(id)arg1 ;
-(void)syncCloudKitWithReason:(id)arg1 discretionary:(BOOL)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)restartCloudKitSyncWithReason:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

