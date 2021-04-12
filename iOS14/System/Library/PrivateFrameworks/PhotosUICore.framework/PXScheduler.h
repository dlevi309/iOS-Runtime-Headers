/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableArray;

@interface PXScheduler : NSObject {

	NSMutableArray* _pendingBlocks;
	BOOL _hasPendingPerformInDefaultRunLoopMode;
	BOOL _isPerformingPendingBlocks;

}
+(id)sharedScheduler;
-(id)init;
-(void)scrollViewWillLayoutSubviews;
-(void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)_performPendingBlocksIfNeeded;
-(void)dispatchOnMainThreadWhenNotScrolling:(/*^block*/id)arg1 ;
-(void)_performPendingBlocks;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)dispatchInMainTransaction:(/*^block*/id)arg1 ;
-(void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)_enteredDefaultRunLoopMode;
-(void)scrollViewDidScroll;
@end

