/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalResource.h>

@interface IOGPUMetalBuffer : IOGPUMetalResource {

	void* _pointer;
	/*^block*/id _deallocator;
	IOGPUMetalBuffer* _masterBuffer;
	short _masterHeapIndex;
	short _masterBufferIndex;
	unsigned long long _masterBufferOffset;
	unsigned long long _length;
	IOSurfaceRef _iosurface;

}

@property (readonly) unsigned long long length; 
@property (nonatomic,readonly) void* contents; 
@property (readonly) IOSurfaceRef iosurface;                 //@synthesize iosurface=_iosurface - In the implementation block
-(void*)contents;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 ;
-(id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 sysMemSize:(unsigned long long)arg5 vidMemSize:(unsigned long long)arg6 args:(IOGPUNewResourceArgs*)arg7 argsSize:(unsigned)arg8 deallocator:(/*^block*/id)arg9 ;
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(unsigned long long)length;
-(id)description;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2 ;
-(void)didModifyRange:(NSRange)arg1 ;
-(CFArrayRef)copyAnnotations;
-(id)initWithDevice:(id)arg1 iosurface:(IOSurfaceRef)arg2 args:(IOGPUNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(IOSurfaceRef)iosurface;
-(void)removeAllDebugMarkers;
-(id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 args:(IOGPUNewResourceArgs*)arg6 argsSize:(unsigned)arg7 ;
-(void)dealloc;
@end

