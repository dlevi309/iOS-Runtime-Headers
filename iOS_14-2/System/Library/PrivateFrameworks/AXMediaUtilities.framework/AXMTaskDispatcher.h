/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@protocol OS_dispatch_source, OS_dispatch_queue, AXMTaskDispatcherDelegate;
@class NSObject, NSMutableArray;

@interface AXMTaskDispatcher : NSObject {

	NSObject*<OS_dispatch_source> _processQueueSource;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_taskList;
	BOOL _queue_taskIsBeingProcessed;
	id<AXMTaskDispatcherDelegate> _delegate;

}

@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (assign,nonatomic,__weak) id<AXMTaskDispatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AXMTaskDispatcherDelegate>)delegate;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(long long)count;
-(void)setDelegate:(id<AXMTaskDispatcherDelegate>)arg1 ;
-(void)_queue_processNextTask;
-(long long)_queue_count;
-(id)_queue_dequeueTask;
-(void)_queue_scheduleTask:(id)arg1 ;
-(id)_queue_unscheduleAllTasks;
-(void)scheduleTask:(id)arg1 ;
-(BOOL)isEmpty;
-(id)unscheduleAllTasks;
@end

