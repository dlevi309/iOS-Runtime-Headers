/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/

#import <FMCoreLite/FMPromise.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError, NSString;

@interface FMFuture : NSObject <FMPromise> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _finished;
	NSMutableArray* _completionBlocks;
	id _resultValue;
	NSError* _resultError;
	NSString* _descriptor;

}

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * descriptor;                    //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)futureWithResult:(id)arg1 ;
+(id)chainFutures:(id)arg1 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3 ;
+(id)combineAllFutures:(id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3 ;
+(id)_chainFuturesWithFutureStack:(id)arg1 ;
+(id)futureWithCompletionHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithNoResult;
+(id)combineAllFutures:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(void)didCancel;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)recoverIgnoringError;
-(id)flatMap:(/*^block*/id)arg1 ;
-(BOOL)isFinished;
-(NSString *)descriptor;
-(void)_flushCompletionBlocks;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(BOOL)finishWithNoResult;
-(void)setDescriptor:(NSString *)arg1 ;
-(id)reschedule:(id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)_queue_isCancelled;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

