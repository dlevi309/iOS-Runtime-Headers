/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLHeap.h>

@protocol MTLDevice;
@class MTLIOAccelResource, MTLIOAccelDevice, NSString;

@interface MTLIOAccelHeap : _MTLHeap {

	MTLIOAccelResource* _resource;
	MTLIOAccelDevice*<MTLDevice> _device;
	MTLRangeAllocator* _allocator;
	opaque_pthread_mutex_t _mutex;
	unsigned long long _size;

}

@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long size; 
@property (readonly) unsigned long long usedSize; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long currentAllocatedSize; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (readonly) long long type; 
-(void)deallocHeapSubResource;
-(unsigned long long)size;
-(unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(unsigned long long)currentAllocatedSize;
-(id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(IOAccelNewResourceArgs*)arg4 argsSize:(unsigned)arg5 desc:(id)arg6 ;
-(id)initWithDevice:(id)arg1 size:(unsigned long long)arg2 options:(unsigned long long)arg3 args:(IOAccelNewResourceArgs*)arg4 argsSize:(unsigned)arg5 ;
-(id)newSubResourceWithLength:(unsigned long long)arg1 alignment:(unsigned long long)arg2 options:(unsigned long long)arg3 offset:(unsigned long long*)arg4 ;
-(id)newSubResourceAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 alignment:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)unpinMemoryAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 ;
-(unsigned long long)usedSize;
-(void)dealloc;
@end

