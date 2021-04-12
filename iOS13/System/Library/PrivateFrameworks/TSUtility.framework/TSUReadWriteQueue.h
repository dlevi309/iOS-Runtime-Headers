/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface TSUReadWriteQueue : NSObject {

	NSObject*<OS_dispatch_semaphore> mCanEnqueueReaders;
	NSObject*<OS_dispatch_queue> mGlobalQueue;
	NSObject*<OS_dispatch_group> mInFlightReaders;
	NSObject*<OS_dispatch_group> mInFlightWriters;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(void)performSyncRead:(/*^block*/id)arg1 ;
-(void)waitOnInFlightWriters;
-(void)performAsyncWrite:(/*^block*/id)arg1 ;
-(void)performSyncWrite:(/*^block*/id)arg1 ;
@end

