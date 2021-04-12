/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

@protocol MTLBuffer, MTLArgumentEncoder;
@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {

	id<MTLBuffer> argumentBuffersStorage;
	id<MTLBuffer> argumentLengthsStorage;
	id<MTLBuffer> argumentGPUVAsStorage;
	BOOL _hasRender;
	BOOL _hasCompute;
	unsigned long long _argumentStride;
	unsigned long long _lengthStride;
	unsigned long long _virtualAddressStride;
	mutex _setBufferMutex;
	id<MTLArgumentEncoder> _argumentEncoder;

}
-(void)dealloc;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(void)onExecuteWithRenderEncoder:(id)arg1 ;
-(id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 resourceOptions:(unsigned long long)arg4 device:(id)arg5 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 forStage:(unsigned long long)arg4 commandIndex:(unsigned long long)arg5 ;
-(void)onExecuteWithComputeEncoder:(id)arg1 ;
@end

