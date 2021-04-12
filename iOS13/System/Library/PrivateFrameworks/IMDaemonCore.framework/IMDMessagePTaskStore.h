/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDMessagePTaskStore <NSObject>
@required
-(id)loadMostRecentMessagePTasks;
-(BOOL)deleteAllCompletedTasks;
-(BOOL)updateTaskFlagsForPTask:(id)arg1;
-(BOOL)storePTask:(id)arg1;

@end

