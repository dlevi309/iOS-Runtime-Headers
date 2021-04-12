/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFFuture.h>

@protocol EFScheduler;
@class NSConditionLock, EFPromise;

@interface EFLazyFuture : EFFuture {

	NSConditionLock* _stateLock;
	id<EFScheduler> _scheduler;
	/*^block*/id _block;
	EFPromise* _promise;

}
-(BOOL)run;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(id)initWithScheduler:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)resultIfAvailable:(id*)arg1 ;
-(BOOL)tryCancel;
@end

