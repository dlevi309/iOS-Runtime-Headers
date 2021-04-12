/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandBuffer.h>

@protocol MTLDevice, OS_dispatch_semaphore;
@class MTLIOAccelDevice, NSObject, NSMutableSet;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {

	MTLIOAccelDevice*<MTLDevice> _device;
	MTLIOAccelCommandBufferStorage* _storage;
	unsigned long long* _submitToHardwareTimeStampPointer;
	unsigned long long _protectionOptions;
	void* _scheduledCallbackBlockPtr;
	void* _completedCallbackBlockPtr;
	NSObject*<OS_dispatch_semaphore> _commitAndResetSem;
	NSMutableSet* _purgedResources;

}

@property (readonly) MTLIOAccelCommandBufferResourceInfo* commandBufferResourceInfo; 
@property (readonly) IOAccelResourceList* ioAccelResourceList; 
@property (readonly) id<MTLDevice> device;                                                        //@synthesize device=_device - In the implementation block
@property (readonly) MTLIOAccelCommandBufferStorage* commandBufferStorage;                        //@synthesize storage=_storage - In the implementation block
-(void)validate;
-(void)commit;
-(void)pushDebugGroup:(id)arg1 ;
-(void)kernelCommandCollectTimeStamp;
-(unsigned long long)protectionOptions;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)commitAndReset;
-(void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(void)commitEncoder;
-(void)_debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(void)addPurgedHeap:(id)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(void)getCurrentKernelCommandBufferPointer:(void*)arg1 end:(void*)arg2 ;
-(id)akResourceList;
-(IOAccelSegmentListHeader*)getSegmentListHeader;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)endCurrentSegment;
-(void)getSegmentListPointerStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(void)addPurgedResource:(id)arg1 ;
-(void)allocCommandBufferResourceAtIndex:(unsigned)arg1 ;
-(void)getCurrentKernelCommandBufferStart:(void*)arg1 current:(void*)arg2 end:(void*)arg3 ;
-(id<MTLDevice>)device;
-(id)akPrivateResourceList;
-(void)popDebugGroup;
-(void)_encodePurgedResources;
-(IOAccelResourceList*)ioAccelResourceList;
-(void)encodeSubmitSleepMS:(unsigned)arg1 ;
-(void)beginSegment:(void*)arg1 ;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(MTLIOAccelCommandBufferStorage*)commandBufferStorage;
-(void)growSegmentList;
-(void)setLabel:(id)arg1 ;
-(void)growKernelCommandBuffer:(unsigned long long)arg1 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setCurrentKernelCommandBufferPointer:(void*)arg1 ;
-(void)setCurrentSegmentListPointer:(void*)arg1 ;
-(MTLIOAccelCommandBufferResourceInfo*)commandBufferResourceInfo;
@end

