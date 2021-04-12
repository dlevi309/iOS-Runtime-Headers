/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface BWDeferredContainerManagerBase : NSObject {

	opaque_pthread_rwlock_t _lock;
	NSObject*<OS_dispatch_queue> _timerQueue;

}
+(void)initialize;
-(id)initWithQueuePriority:(unsigned)arg1 ;
-(id)manifestsForApplicationID:(id)arg1 err:(int*)arg2 ;
-(id)_containerURLForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 exists:(BOOL*)arg3 isDirectory:(BOOL*)arg4 ;
-(BOOL)_insertUniqueManifestIntoTimeSortedArray:(id)arg1 manifestArray:(id)arg2 ;
-(id)manifestForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3 ;
-(int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(void)dealloc;
@end

