/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject {

	UIKeyboardTaskExecutionContext* _parentExecutionContext;
	/*^block*/id _continuation;
	id _info;
	/*^block*/id _pendingCompletionBlock;
	UIKeyboardTaskQueue* _executionQueue;

}

@property (nonatomic,readonly) UIKeyboardTaskQueue * executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,retain) id info;                                             //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id pendingCompletionBlock;                             //@synthesize pendingCompletionBlock=_pendingCompletionBlock - In the implementation block
-(id)info;
-(id)init;
-(id)pendingCompletionBlock;
-(void)setPendingCompletionBlock:(id)arg1 ;
-(void)returnExecutionToParent;
-(id)childWithContinuation:(/*^block*/id)arg1 ;
-(id)initWithExecutionQueue:(id)arg1 ;
-(UIKeyboardTaskQueue *)executionQueue;
-(void)setInfo:(id)arg1 ;
-(id)initWithParentContext:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(void)returnExecutionToParentWithInfo:(id)arg1 ;
-(void)transferExecutionToMainThreadWithTask:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

