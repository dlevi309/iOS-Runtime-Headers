/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDMessageHistorySyncTaskFactory.h>

@class IMDCKSyncController, IMDAccountController, IMDReplayController, NSString;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory> {

	IMDCKSyncController* _ckSyncController;
	IMDAccountController* _accountController;
	IMDReplayController* _replayController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)_initWithCKSyncController:(id)arg1 accountController:(id)arg2 replayController:(id)arg3 ;
-(id)_newFirstUnlockReplaySyncTask;
-(id)_newIDSTransactionLogSyncTask;
-(id)_newKChatSyncTask;
-(id)newSyncTaskForType:(unsigned long long)arg1 ;
@end

