/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSMutableDictionary, NSObject;

@interface _CATArbitratorWaitToken : NSObject {

	Ai mState;
	NSMutableDictionary* mTokenByKey;
	NSObject*<OS_dispatch_queue> mDelegateQueue;
	NSObject*<OS_dispatch_group> mGroup;
	/*^block*/id mCompletionBlock;

}
-(void)cancel;
-(void)resume;
-(id)initWithDelegateQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(BOOL)arg3 ;
-(void)performCompletionBlock;
-(BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2 ;
@end

