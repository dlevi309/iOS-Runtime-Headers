/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NAPromise.h>

@class NSMutableArray, NSError, NSString;

@interface NAFuture : NSObject <NAPromise> {

	os_unfair_lock_s _lock;
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
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3 ;
+(id)futureWithNoResult;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3 ;
+(id)_chainFuturesWithFutureStack:(id)arg1 ;
+(id)combineAllFutures:(id)arg1 ;
+(id)chainFutures:(id)arg1 ;
+(id)futureWithCompletionHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(void)_setShouldEnforceThreadSafety:(BOOL)arg1 ;
-(id)mtSynchronousResult:(id*)arg1 ;
-(void)mtFinishWithFuture:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(NSString *)descriptor;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)setDescriptor:(NSString *)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)flatMap:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)_queue_isCancelled;
-(BOOL)finishWithNoResult;
-(id)reschedule:(id)arg1 ;
-(id)recoverIgnoringError;
-(void)willAddCompletionBlock;
@end

