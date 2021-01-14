/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNFuture.h>

@protocol CNFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(id)recover:(/*^block*/id)arg1;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(id)flatMap:(/*^block*/id)arg1;
-(BOOL)isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)result:(id*)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(BOOL)cancel;
-(BOOL)isCancelled;

@end

#import <libobjc.A.dylib/CNPromise.h>

@protocol CNFutureImpl;
@class NSMutableArray, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise> {

	id<CNFutureImpl> _impl;
	NSMutableArray* _calculationDependencies;

}

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)futureWithResult:(id)arg1 ;
+(id)_joinOne:(id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)sequence:(id)arg1 ;
+(id)future;
+(id)chain:(id)arg1 ;
+(id)_joinMany:(id)arg1 ;
+(id)_joinZero;
+(id)recover:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)flatMap:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(void)finishPromise:(id)arg1 withFuture:(id)arg2 ;
+(id)futureWithError:(id)arg1 ;
+(id)promiseFuture;
+(id)futureWithBlock:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 schedulerProvider:(id)arg3 ;
+(id)join:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(void)didCancel;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)initWithImpl:(id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(BOOL)isFinished;
-(void)_flushCompletionBlocks;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)result:(id*)arg1 ;
-(void)addCalculationDependency:(id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(id)flatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(BOOL)cancel;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(BOOL)isCancelled;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

