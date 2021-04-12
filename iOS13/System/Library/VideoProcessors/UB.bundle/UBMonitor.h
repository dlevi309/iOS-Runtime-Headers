/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol OS_dispatch_queue, OS_os_transaction;
#import <UB/UB-Structs.h>
@class NSObject;

@interface UBMonitor : NSObject {

	unsigned _instanceCount;
	os_unfair_lock_s _instanceCountlock;
	/*^block*/id _currentBlock;
	NSObject*<OS_dispatch_queue> _workerQueue;
	BOOL _UBSingletonsAllocated;
	NSObject*<OS_os_transaction> _UBSingletonsOSTransaction;

}
+(id)sharedInstance;
-(id)init;
-(void)removeInstance;
-(void)releaseAllUBSingletons;
-(void)addInstance;
@end

