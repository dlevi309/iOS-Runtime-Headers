/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol OS_dispatch_queue, ARBufferPopulationMonitorDelegate;
#import <ARKitCore/ARKitCore-Structs.h>
@class ARBufferPopulationRegistry, NSObject;

@interface ARBufferPopulationMonitor : NSObject {

	ARBufferPopulationRegistry* _bufferPopulationRegistry;
	os_unfair_lock_s _bufferPopulationRegistryLock;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	IOSurfaceNotifierRef _surfaceNotifier;
	NSObject*<OS_dispatch_queue> _surfaceNotifierCallbackQueue;
	void* _weakReferenceForSurfaceNotifierCallback;
	id<ARBufferPopulationMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic,__weak) id<ARBufferPopulationMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<ARBufferPopulationMonitorDelegate>)delegate;
-(unsigned long long)count;
-(void)setDelegate:(id<ARBufferPopulationMonitorDelegate>)arg1 ;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)trackDataBuffer:(CVBufferRef)arg1 withLabel:(id)arg2 ;
-(void)trackPixelBuffer:(CVBufferRef)arg1 withLabel:(id)arg2 ;
-(unsigned long long)countWithLabel:(id)arg1 ;
-(void)updateBufferPopulationRegistryWithReleasedSurfaceID:(unsigned)arg1 ;
-(void)trackSurface:(IOSurfaceRef)arg1 withLabel:(id)arg2 ;
-(void)trackDataBuffer:(CVBufferRef)arg1 ;
-(void)trackPixelBuffer:(CVBufferRef)arg1 ;
-(void)trackSurface:(IOSurfaceRef)arg1 ;
@end

