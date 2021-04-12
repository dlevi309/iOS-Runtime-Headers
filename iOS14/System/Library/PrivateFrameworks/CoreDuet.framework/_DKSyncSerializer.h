/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSOperation;

@interface _DKSyncSerializer : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _underlyingQueue;
	NSOperation* _previousOperation;

}
+(id)operationQueue;
+(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
+(void)performSyncBlock:(/*^block*/id)arg1 ;
+(void)addOperation:(id)arg1 ;
+(id)underlyingQueue;
+(void)addOperationWithBlock:(/*^block*/id)arg1 ;
+(void)addDependentOperation:(id)arg1 ;
+(void)addDependentOperationWithBlock:(/*^block*/id)arg1 ;
+(void)performAfter:(double)arg1 block:(/*^block*/id)arg2 ;
+(void)performAsyncBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)description;
@end

