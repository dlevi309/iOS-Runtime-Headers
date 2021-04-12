/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NUJobPriorityQueue;

@interface NUJobQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NUJobPriorityQueue* _interactiveQueue;
	NUJobPriorityQueue* _initiatedQueue;
	long long _updateGroupLevel;
	long long _stage;

}

@property (readonly) long long stage;              //@synthesize stage=_stage - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(long long)stage;
-(void)addJob:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)_addJob:(id)arg1 ;
-(void)_removeJob:(id)arg1 ;
-(id)initWithStage:(long long)arg1 ;
-(void)addJobs:(id)arg1 ;
-(void)_addJobs:(id)arg1 ;
-(void)_incrementGroupLevel;
-(void)_decrementGroupLevel;
-(void)_startRunningIfNeeded;
-(void)finishedPriorityQueue:(id)arg1 ;
-(void)_finishedPriorityQueue:(id)arg1 ;
@end

