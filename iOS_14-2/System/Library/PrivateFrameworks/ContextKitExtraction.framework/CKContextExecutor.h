/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKitExtraction.framework/ContextKitExtraction
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSCondition;

@interface CKContextExecutor : NSObject {

	NSObject*<OS_dispatch_queue> _workItemQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_group> _group;
	unsigned long long _timeoutAfter;
	NSCondition* _completionCondition;
	/*^block*/id _completionHandler;
	AB _done;
	id _context;

}

@property (readonly) AB done;                           //@synthesize done=_done - In the implementation block
@property (nonatomic,readonly) id context;              //@synthesize context=_context - In the implementation block
-(id)context;
-(AB)done;
-(id)initWithContext:(id)arg1 workItemQueue:(id)arg2 completionQueue:(id)arg3 timeoutAfter:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)markReady;
-(void)markIncomplete;
-(void)_awaitCompletion;
-(void)addWorkItemToQueue:(id)arg1 withWorkItem:(/*^block*/id)arg2 andContext:(id)arg3 ;
-(void)markReadyAndAwaitCompletion;
-(void)addWorkItem:(/*^block*/id)arg1 ;
-(void)addWorkItem:(/*^block*/id)arg1 withContext:(id)arg2 ;
@end

