/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject {

	SUScriptObjectInvocationBatch* _invocationBatch;
	id _target;

}

@property (assign) SUScriptObjectInvocationBatch * invocationBatch;              //@synthesize invocationBatch=_invocationBatch - In the implementation block
@property (assign) id target;                                                    //@synthesize target=_target - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setInvocationBatch:(SUScriptObjectInvocationBatch *)arg1 ;
-(SUScriptObjectInvocationBatch *)invocationBatch;
@end

