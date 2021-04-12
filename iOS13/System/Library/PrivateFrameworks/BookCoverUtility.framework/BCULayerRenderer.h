/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;
@class NSObject, NSHashTable, CARenderer;

@interface BCULayerRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSHashTable* _operations;
	CARenderer* _renderer;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	BOOL _suspended;

}
-(id)init;
-(void)resume;
-(void)suspend;
-(void)_startOperation:(id)arg1 ;
-(id)initWithSuspended:(BOOL)arg1 ;
-(void)_processOperations;
-(void)_disconnectLayer:(id)arg1 ;
-(id)newOperationWithPriority:(float)arg1 waitForCPUSynchronization:(BOOL)arg2 renderLayer:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)newOperationWithPriority:(float)arg1 renderLayer:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

