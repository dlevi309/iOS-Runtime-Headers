/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/SCRTaskSchedulerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SCRTaskScheduler, SCRApprovalCoordinator, NSMutableDictionary, NSString;

@interface SCRTaskAdministrator : NSObject <SCRTaskSchedulerDelegate> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _workQueue;
	SCRTaskScheduler* _scheduler;
	SCRApprovalCoordinator* _approvalCoordinator;
	NSMutableDictionary* _taskForIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitTask:(id)arg1 ;
-(id)init;
-(void)scheduler:(id)arg1 beginSchedulingWindowOnBehalfOfTasks:(id)arg2 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)registerGovernor:(id)arg1 ;
-(void)unregisterGovernor:(id)arg1 ;
@end

