/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLDebugCommandEncoder.h>

@class MTLResourceList;

@interface IOGPUMetalDebugCommandEncoder : _MTLDebugCommandEncoder {

	void* _kernelCommandBufferCurrent;
	void* _kernelCommandBufferEnd;
	IOGPUResourceList* _resourceList;
	MTLResourceList* _api_resourceList;

}
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)restartDebugPass;
-(void*)reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(unsigned)addDebugResourceListInfo:(IOGPUResourceInfo*)arg1 flag:(unsigned)arg2 ;
-(void)debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(void)endEncoding;
-(void)addAPIResource:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

