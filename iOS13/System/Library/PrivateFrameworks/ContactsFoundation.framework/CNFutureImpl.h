/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNFutureImpl <NSObject>
@optional
-(BOOL)cancel;
-(void)_flushCompletionBlocks;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2;

@required
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(void)updateDescriptionWithBuilder:(id)arg1;

@end

