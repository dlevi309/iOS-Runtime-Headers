/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDMessagePTaskStore.h>

@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadMostRecentMessagePTasks;
-(BOOL)deleteAllCompletedTasks;
-(BOOL)updateTaskFlagsForPTask:(id)arg1 ;
-(BOOL)storePTask:(id)arg1 ;
-(BOOL)_networkCall_InsertRowGuid:(id)arg1 taskFlags:(long long)arg2 ;
-(id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)arg1 ;
-(BOOL)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
-(BOOL)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg1 taskFlags:(long long)arg2 ;
@end

