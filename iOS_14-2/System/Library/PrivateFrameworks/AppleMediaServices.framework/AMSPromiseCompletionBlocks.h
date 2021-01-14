/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSMutableArray;

@interface AMSPromiseCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)callCompletionBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)callSuccessBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
-(void)flushCompletionBlocksWithPromiseResult:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)callErrorBlock:(/*^block*/id)arg1 withPromiseResult:(id)arg2 ;
@end

