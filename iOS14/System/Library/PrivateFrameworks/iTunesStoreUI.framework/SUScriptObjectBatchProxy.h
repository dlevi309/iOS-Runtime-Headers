/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject {

	SUScriptObjectInvocationBatch* _invocationBatch;
	id _target;

}

@property (assign) SUScriptObjectInvocationBatch * invocationBatch;              //@synthesize invocationBatch=_invocationBatch - In the implementation block
@property (assign) id target;                                                    //@synthesize target=_target - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setInvocationBatch:(SUScriptObjectInvocationBatch *)arg1 ;
-(SUScriptObjectInvocationBatch *)invocationBatch;
@end

