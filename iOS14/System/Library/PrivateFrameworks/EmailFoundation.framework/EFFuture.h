/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFPromisePrivate.h>
#import <libobjc.A.dylib/EFFuture.h>

@protocol EFFuture <EFCancelable>
@property (nonatomic,readonly) id result; 
@property (nonatomic,readonly) id resultIfAvailable; 
@property (__weak) id<EFFutureDelegate> delegate; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(id)then:(/*^block*/id)arg1;
-(id)map:(/*^block*/id)arg1;
-(void)always:(/*^block*/id)arg1;
-(id)recover:(/*^block*/id)arg1;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;
-(id<EFFutureDelegate>)delegate;
-(id)resultIfAvailable:(id*)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(void)onScheduler:(id)arg1 always:(/*^block*/id)arg2;
-(id)onScheduler:(id)arg1 map:(/*^block*/id)arg2;
-(BOOL)isFinished;
-(id)onScheduler:(id)arg1 recover:(/*^block*/id)arg2;
-(void)setDelegate:(id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(BOOL)tryCancel;
-(id)result:(id*)arg1;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2;
-(id)resultIfAvailable;
-(id)result;
-(id)onScheduler:(id)arg1 then:(/*^block*/id)arg2;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2;
-(BOOL)isCancelled;

@end


@protocol EFFutureDelegate;
@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface EFFuture : NSObject <EFPromisePrivate, EFFuture> {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;
	id<EFFutureDelegate> _delegate;

}

@property (nonatomic,readonly) id result; 
@property (nonatomic,readonly) id resultIfAvailable; 
@property (readonly) id completionHandlerAdapter; 
@property (readonly) id boolErrorCompletionHandlerAdapter; 
@property (readonly) id errorOnlyCompletionHandlerAdapter; 
@property (readonly) id<EFObserver> firstResultObserverAdapter; 
@property (readonly) id<EFObserver> resultsObserverAdapter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<EFFutureDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)futureWithResult:(id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)nullFuture;
+(id)combine:(id)arg1 ;
+(id)sequence:(id)arg1 ;
+(id)chain:(id)arg1 ;
+(id)onScheduler:(id)arg1 futureWithBlock:(/*^block*/id)arg2 ;
+(id)onScheduler:(id)arg1 lazyFutureWithBlock:(/*^block*/id)arg2 ;
+(id)_join:(id)arg1 ignoreFailures:(BOOL)arg2 ;
+(void)_always:(id)arg1 withBlock:(/*^block*/id)arg2 scheduler:(id)arg3 ;
+(id)_then:(id)arg1 withBlock:(/*^block*/id)arg2 scheduler:(id)arg3 ;
+(id)_recover:(id)arg1 withBlock:(/*^block*/id)arg2 scheduler:(id)arg3 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)join:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(void)always:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)completionHandlerAdapter;
-(id)init;
-(void)didCancel;
-(id<EFFutureDelegate>)delegate;
-(id)resultIfAvailable:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)finishWithFuture:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(id)errorOnlyCompletionHandlerAdapter;
-(void)onScheduler:(id)arg1 always:(/*^block*/id)arg2 ;
-(id<EFObserver>)firstResultObserverAdapter;
-(void)_addCompletionBlock:(/*^block*/id)arg1 ;
-(id)onScheduler:(id)arg1 map:(/*^block*/id)arg2 ;
-(BOOL)isFinished;
-(void)_flushCompletionBlocks;
-(id)onScheduler:(id)arg1 recover:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<EFFutureDelegate>)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)tryCancel;
-(id)result:(id*)arg1 ;
-(BOOL)_nts_isFinished;
-(void)onScheduler:(id)arg1 addFailureBlock:(/*^block*/id)arg2 ;
-(id)resultIfAvailable;
-(id)result;
-(BOOL)finishWithError:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id<EFObserver>)resultsObserverAdapter;
-(id)boolErrorCompletionHandlerAdapter;
-(id)onScheduler:(id)arg1 then:(/*^block*/id)arg2 ;
-(void)onScheduler:(id)arg1 addSuccessBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)_finishWithFuture:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

