/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface OITSUReadWriteQueue : NSObject {

	NSObject*<OS_dispatch_semaphore> mCanEnqueueReaders;
	NSObject*<OS_dispatch_queue> mGlobalQueue;
	NSObject*<OS_dispatch_group> mInFlightReaders;
	NSObject*<OS_dispatch_group> mInFlightWriters;

}
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)performAsyncWrite:(/*^block*/id)arg1 ;
-(void)waitOnInFlightWriters;
-(void)performSyncRead:(/*^block*/id)arg1 ;
-(void)performSyncWrite:(/*^block*/id)arg1 ;
@end

