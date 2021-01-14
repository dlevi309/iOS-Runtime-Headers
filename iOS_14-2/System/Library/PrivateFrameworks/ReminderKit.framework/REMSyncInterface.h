/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMXPCDaemonController;

@interface REMSyncInterface : NSObject {

	REMXPCDaemonController* _daemonController;

}

@property (nonatomic,retain) REMXPCDaemonController * daemonController;              //@synthesize daemonController=_daemonController - In the implementation block
-(void)setDaemonController:(REMXPCDaemonController *)arg1 ;
-(id)init;
-(REMXPCDaemonController *)daemonController;
-(id)initWithDaemonController:(id)arg1 ;
-(void)syncCloudKitWithReason:(id)arg1 discretionary:(BOOL)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)restartCloudKitSyncWithReason:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

