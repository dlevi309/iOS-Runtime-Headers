/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol CNFutureImpl <NSObject>
@optional
-(void)_flushCompletionBlocks;
-(BOOL)cancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2;

@required
-(void)updateDescriptionWithBuilder:(id)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(BOOL)isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(BOOL)isCancelled;

@end

