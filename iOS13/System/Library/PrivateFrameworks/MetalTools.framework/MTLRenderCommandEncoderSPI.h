/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLRenderCommandEncoderSPI <MTLRenderCommandEncoder>
@optional
-(void)setPointSize:(float)arg1;
-(void)setDepthCleared;
-(void)setStencilCleared;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5 atIndex:(unsigned long long)arg6;
-(void)setProvokingVertexMode:(unsigned long long)arg1;
-(void)setPrimitiveRestartEnabled:(BOOL)arg1;
-(void)setViewportTransformEnabled:(BOOL)arg1;
-(void)setAlphaTestReferenceValue:(float)arg1;
-(void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5;
-(void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
-(void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
-(void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;
-(void)setPrimitiveRestartEnabled:(BOOL)arg1 index:(unsigned long long)arg2;
-(void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;
-(void)setTransformFeedbackState:(unsigned long long)arg1;

@required
-(void)setLineWidth:(float)arg1;
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
-(BOOL)isMemorylessRender;
-(void)setDepthClipModeSPI:(unsigned long long)arg1;
-(void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2;
-(void)addSplitHandler:(/*^block*/id)arg1;

@end

