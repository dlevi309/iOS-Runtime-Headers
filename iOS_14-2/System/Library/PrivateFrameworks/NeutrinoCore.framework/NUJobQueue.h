/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)stage;
-(id)debugDescription;
-(id)description;
-(void)addJob:(id)arg1 ;
-(void)_addJob:(id)arg1 ;
-(void)addJobs:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)_removeJob:(id)arg1 ;
-(id)initWithStage:(long long)arg1 ;
-(void)_addJobs:(id)arg1 ;
-(void)_incrementGroupLevel;
-(void)_decrementGroupLevel;
-(void)_startRunningIfNeeded;
-(void)finishedPriorityQueue:(id)arg1 ;
-(void)_finishedPriorityQueue:(id)arg1 ;
@end

