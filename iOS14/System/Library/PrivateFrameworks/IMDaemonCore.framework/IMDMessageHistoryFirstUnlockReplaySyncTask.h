/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

