/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDMessageHistoryIDSTransactionLogSyncTask.h>

@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {

	IMDReplayController* _replayController;

}
-(void)dealloc;
-(id)initWithReplayController:(id)arg1 accountController:(id)arg2 ;
-(void)_setupAndBeginSync;
-(unsigned long long)syncTaskType;
@end

