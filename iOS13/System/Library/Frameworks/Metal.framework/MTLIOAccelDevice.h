/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_MT40* _storageCreateParams;
	MTLIOAccelCommandBufferStoragePool* _commandBufferStoragePool;
	unsigned _configBits;
	unsigned _deviceBits;
	unsigned long long _textureRam;
	unsigned long long _videoRam;
	unsigned long long _sharedMemorySize;
	unsigned _accelID;
	int _numCommandBuffers;
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
@property (readonly) int numCommandBuffers;                                        //@synthesize numCommandBuffers=_numCommandBuffers - In the implementation block
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
+(void)registerDevices;
+(void)registerService:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned long long)registryID;
-(unsigned long long)maxBufferLength;
-(unsigned long long)sharedMemorySize;
-(unsigned long long)dedicatedMemorySize;
-(IOAccelDeviceRef)deviceRef;
-(id)newFence;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newEvent;
-(BOOL)supportsVertexAmplificationCount:(unsigned long long)arg1 ;
-(BOOL)hasUnifiedMemory;
-(unsigned long long)recommendedMaxWorkingSetSize;
-(unsigned long long)currentAllocatedSize;
-(void)_setDeviceWrapper:(id)arg1 ;
-(id)_deviceWrapper;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newIndirectArgumentBufferLayoutWithStructType:(id)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(BOOL)setResourcesPurgeableState:(id*)arg1 newState:(unsigned long long)arg2 oldState:(unsigned long long*)arg3 count:(int)arg4 ;
-(BOOL)supportsVertexAmplification;
-(unsigned)acceleratorPort;
-(BOOL)supportPriorityBand;
-(id)indirectArgumentBufferDecodingData;
-(void)setIndirectArgumentBufferDecodingData:(id)arg1 ;
-(id)newIndirectArgumentEncoderWithLayout:(id)arg1 ;
-(IOAccelSharedRef)sharedRef;
-(void)_purgeDevice;
-(void)releaseFenceIndex:(unsigned)arg1 ;
-(void)deallocBufferSubData:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 ;
-(id)initWithAcceleratorPort:(unsigned)arg1 ;
-(unsigned)initialKernelCommandShmemSize;
-(unsigned)initialSegmentListShmemSize;
-(void)updateResourcePoolPurgeability;
-(short)heapIndexWithOptions:(unsigned long long)arg1 ;
-(void)setSegmentListShmemSize:(unsigned)arg1 ;
-(void)setComputePipelineStateCommandShmemSize:(unsigned)arg1 ;
-(void)setHwResourcePool:(id*)arg1 count:(int)arg2 ;
-(id)akResourceListPool;
-(id)akPrivateResourceListPool;
-(id*)hwResourcePools;
-(unsigned)hwResourcePoolCount;
-(id)allocBufferSubDataWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 alignment:(unsigned long long)arg3 heapIndex:(short*)arg4 bufferIndex:(short*)arg5 bufferOffset:(unsigned long long*)arg6 ;
-(void)_addResource:(id)arg1 ;
-(void)_removeResource:(id)arg1 ;
-(void)kickCleanupQueue;
-(MTLIOMemoryInfo *)memoryInfo;
-(int)numCommandBuffers;
@end

