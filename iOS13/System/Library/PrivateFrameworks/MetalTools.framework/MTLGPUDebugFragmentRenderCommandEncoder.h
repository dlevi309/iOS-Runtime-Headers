/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsFragmentRenderCommandEncoder.h>

@interface MTLGPUDebugFragmentRenderCommandEncoder : MTLToolsFragmentRenderCommandEncoder {

	MTLGPUDebugBufferArgumentData _fragmentBuffers;
	unsigned long long _pipelineStateID;
	unsigned _encoderID;
	unsigned _currentDrawID;

}
-(void)dealloc;
-(void)endEncoding;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)onDraw;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 triangleIndices:(const char*)arg3 triangleCount:(unsigned long long)arg4 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4 triangleIndices:(const char*)arg5 triangleCount:(unsigned long long)arg6 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned long long)arg4 ;
-(id)initWithFragmentRenderCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned)arg4 ;
@end

