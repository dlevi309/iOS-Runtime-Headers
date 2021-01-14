/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resultIfAvailable:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFinished;
-(void)setDelegate:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)tryCancel;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(BOOL)isCancelled;
@end

