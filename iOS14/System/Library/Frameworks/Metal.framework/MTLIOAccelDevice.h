/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLDevice.h>

@protocol OS_dispatch_queue, OS_dispatch_source, MTLDeviceSPI;
@class NSObject, MTLIOMemoryInfo;

@interface MTLIOAccelDevice : _MTLDevice {

	IOAccelDeviceRef _deviceRef;
	IOAccelSharedRef _sharedRef;
	unsigned _acceleratorPort;
	SCD_Struct_MT64* _storageCreateParams;
	MTLIOAccelCommandBufferStoragePool* _commandBufferStoragePool;
	unsigned _configBits;
	unsigned _deviceBits;
	unsigned long long _textureRam;
	unsigned long long _videoRam;
	unsigned long long _sharedMemorySize;
	unsigned _accelID;
	Ai _numCommandBuffers;
	unsigned long long _segmentByteThreshold;
	MTLIOAccelBufferHeap* _bufferHeaps[16];
	NSObject*<OS_dispatch_queue> _device_dispatch_queue;
	NSObject*<OS_dispatch_queue> _device_pool_cleanup_queue;
	NSObject*<OS_dispatch_source> _device_pool_cleanup_source;
	BOOL _device_pool_cleanup_scheduled;
	unsigned _fenceAllocatedCount;
	unsigned _fenceMaximumCount;
	unsigned _fenceBitmapSearchStart;
	unsigned _fenceBitmapCount;
	unsigned long long* _fenceAllocationBitmap;
	unsigned long long _registryID;
	id<MTLDeviceSPI> _deviceWrapper;

}

@property (readonly) id* hwResourcePools; 
@property (readonly) unsigned hwResourcePoolCount; 
@property (readonly) int numCommandBuffers; 
@property (readonly) unsigned acceleratorPort;                                     //@synthesize acceleratorPort=_acceleratorPort - In the implementation block
@property (readonly) unsigned long long sharedMemorySize; 
@property (readonly) unsigned long long dedicatedMemorySize; 
@property (readonly) unsigned long long recommendedMaxWorkingSetSize; 
@property (readonly) unsigned long long registryID; 
@property (readonly) BOOL hasUnifiedMemory; 
@property (readonly) BOOL supportsVertexAmplification; 
@property (readonly) BOOL supportPriorityBand; 
@property (readonly) unsigned long long currentAllocatedSize; 
@property (readonly) MTLIOMemoryInfo * memoryInfo; 
@property (readonly) BOOL supportLazyInitialization; 
+(void)registerDevices;
-(id)newEvent;
-(BOOL)supportsVertexAmplification;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(BOOL)setResourcesPurgeableState:(id*)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long*)arg3 count:(int)arg4 ;
-(void)_purgeDevice;
-(id)newAccelerationStructureWithSize:(unsigned long long)arg1 ;
-(void)_setDeviceWrapper:(id)arg1 ;
-(id)_deviceWrapper;
-(unsigned)acceleratorPort;
-(int)numCommandBuffers;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(unsigned long long)sharedMemorySize;
-(IOAccelDeviceRef)deviceRef;
-(unsigned long long)recommendedMaxWorkingSetSize;
-(void)setComputePipelineStateCommandShmemSize:(unsigned)arg1 ;
-(unsigned)hwResourcePoolCount;
-(BOOL)supportLazyInitialization;
-(void)setIndirectArgumentBufferDecodingData:(id)arg1 ;
-(void)updateResourcePoolPurgeability;
-(BOOL)supportsVertexAmplificationCount:(unsigned long long)arg1 ;
-(BOOL)hasUnifiedMemory;
-(id*)hwResourcePools;
-(IOAccelSharedRef)sharedRef;
-(id)newFence;
-(unsigned)initialKernelCommandShmemSize;
-(void)releaseFenceIndex:(unsigned)arg1 ;
-(unsigned long long)maxBufferLength;
-(unsigned long long)currentAllocatedSize;
-(unsigned)initialSegmentListShmemSize;
-(void)_addResource:(id)arg1 ;
-(id)newIndirectArgumentEncoderWithLayout:(id)arg1 ;
-(void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 ;
-(void)_removeResource:(id)arg1 ;
-(id)akPrivateResourceListPool;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)setSegmentListShmemSize:(unsigned)arg1 ;
-(id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1 ;
-(unsigned long long)registryID;
-(BOOL)lazyInitialize;
-(id)initWithAcceleratorPort:(unsigned)arg1 ;
-(id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(unsigned long long)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(unsigned long long*)arg6 ;
-(MTLIOMemoryInfo *)memoryInfo;
-(void)kickCleanupQueue;
-(id)indirectArgumentBufferDecodingData;
-(id)akResourceListPool;
-(unsigned long long)dedicatedMemorySize;
-(short)heapIndexWithOptions:(unsigned long long)arg1 ;
-(BOOL)supportPriorityBand;
-(void)setHwResourcePool:(id*)arg1 count:(int)arg2 ;
-(void)dealloc;
@end

