/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLDebugCommandEncoder.h>

@class MTLResourceList;

@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder {

	void* _kernelCommandBufferCurrent;
	void* _kernelCommandBufferEnd;
	IOAccelResourceList* _resourceList;
	MTLResourceList* _api_resourceList;

}
-(void)dealloc;
-(void)endEncoding;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)restartDebugPass;
-(void*)reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(unsigned)addDebugResourceListInfo:(IOAccelResourceInfo*)arg1 flag:(unsigned)arg2 ;
-(void)debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(void)debugResourceBytes:(unsigned)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(void)addAPIResource:(id)arg1 ;
-(void)kprintfResource:(unsigned)arg1 length:(unsigned)arg2 ;
-(void)IOLogResource:(unsigned)arg1 length:(unsigned)arg2 ;
@end

