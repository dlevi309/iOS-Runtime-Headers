/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol OS_dispatch_queue, ARBufferPopulationMonitorDelegate;
#import <ARKit/ARKit-Structs.h>
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
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id<ARBufferPopulationMonitorDelegate>)delegate;
-(void)setDelegate:(id<ARBufferPopulationMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)trackDataBuffer:(CVBufferRef)arg1 withLabel:(id)arg2 ;
-(void)trackPixelBuffer:(CVBufferRef)arg1 withLabel:(id)arg2 ;
-(unsigned long long)countWithLabel:(id)arg1 ;
-(void)updateBufferPopulationRegistryWithReleasedSurfaceID:(unsigned)arg1 ;
-(void)trackSurface:(IOSurfaceRef)arg1 withLabel:(id)arg2 ;
-(void)trackDataBuffer:(CVBufferRef)arg1 ;
-(void)trackPixelBuffer:(CVBufferRef)arg1 ;
-(void)trackSurface:(IOSurfaceRef)arg1 ;
@end

