/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

