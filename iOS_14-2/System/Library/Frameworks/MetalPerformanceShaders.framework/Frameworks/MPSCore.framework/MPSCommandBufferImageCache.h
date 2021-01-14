/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


@protocol MTLCommandBuffer, MPSHeapProvider;
#import <MPSCore/MPSCore-Structs.h>
@interface MPSCommandBufferImageCache : NSObject {

	MPSDevice* _device;
	id<MTLCommandBuffer> _cmdBuffer;
	long long _debugMode;
	HeapNode* _freeList[65];
	CacheFrame* _frameList;
	ResourceNode* _retainedResources;
	MPSAutoCache* _userCacheFrame;
	unsigned long long _minimumBin;
	unsigned long long _batchSize;
	BOOL _needsRetain;
	unsigned long long _totalAllocationBytes;
	unsigned long long _cacheDelay;
	atomic<long> _commandBufferCount;
	id<MPSHeapProvider> _heapProvider;
	BOOL _isMPSCommandBuffer;

}

@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer;              //@synthesize cmdBuffer=_cmdBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long batchSizeHint;                  //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) id<MPSHeapProvider> heapProvider;                  //@synthesize heapProvider=_heapProvider - In the implementation block
-(id)newHeapBlock:(unsigned long long)arg1 ;
-(void)addHandlerToCommandBuffer:(id)arg1 ;
-(id)debugDescription;
-(id<MPSHeapProvider>)heapProvider;
-(unsigned long long)batchSizeHint;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)releaseHeapBlock:(id)arg1 heapProvider:(id)arg2 ;
-(void)setBatchSizeHint:(unsigned long long)arg1 ;
-(void)setHeapProvider:(id<MPSHeapProvider>)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)dealloc;
@end

