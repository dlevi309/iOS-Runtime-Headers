/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSMutableArray;

@interface AMSPromiseCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(void)callErrorBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)callCompletionBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)callSuccessBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)flushCompletionBlocksWithPromiseResult:(id)arg1 ;
@end

