/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(BOOL)shouldCallImmediately;
-(void)setShouldCallImmediately:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)flushCompletionBlocksWithFutureResult:(id)arg1 ;
@end

