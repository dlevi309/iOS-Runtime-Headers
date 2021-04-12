/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNFuture.h>

@protocol CNFuture <NSObject>
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@required
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(id)result:(id*)arg1;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)recover:(/*^block*/id)arg1;
-(id)flatMap:(/*^block*/id)arg1;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2;

@end

#import <libobjc.A.dylib/CNPromise.h>

@protocol CNFutureImpl;
@class NSMutableArray, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise> {

	id<CNFutureImpl> _impl;
	NSMutableArray* _calculationDependencies;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)future;
+(id)join:(id)arg1 ;
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 schedulerProvider:(id)arg3 ;
+(void)finishPromise:(id)arg1 withFuture:(id)arg2 ;
+(id)chain:(id)arg1 ;
+(id)flatMap:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)recover:(id)arg1 withBlock:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)promiseFuture;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)sequence:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)finishWithError:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)_flushCompletionBlocks;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)result:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)flatMap:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(void)addSuccessBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(id)flatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)initWithImpl:(id)arg1 ;
-(void)addCalculationDependency:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
@end

