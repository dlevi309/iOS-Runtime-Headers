/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKAsyncTransaction : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionBlock;
	unsigned long long _state;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
-(void)commit;
-(id)completionBlock;
-(unsigned long long)state;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)cancel;
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCallbackQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addAsyncOperationWithBlock:(/*^block*/id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ensureTransactionData;
@end

