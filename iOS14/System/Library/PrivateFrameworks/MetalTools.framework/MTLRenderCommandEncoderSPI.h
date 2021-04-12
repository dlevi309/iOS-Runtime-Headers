/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@protocol MTLRenderCommandEncoderSPI <MTLRenderCommandEncoder>
@optional
-(void)setDepthCleared;
-(void)setPointSize:(float)arg1;
-(void)setStencilCleared;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;
-(void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5 atIndex:(unsigned long long)arg6;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
-(void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5;
-(void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;
-(void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(BOOL)arg5;
-(void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
-(void)setCommandDataCorruptModeSPI:(unsigned long long)arg1;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;
-(void)setAlphaTestReferenceValue:(float)arg1;
-(void)setClipPlane:(float)arg1 p2:(float)arg2 p3:(float)arg3 p4:(float)arg4 atIndex:(unsigned long long)arg5;
-(void)setViewportTransformEnabled:(BOOL)arg1;
-(void)setProvokingVertexMode:(unsigned long long)arg1;
-(void)setPrimitiveRestartEnabled:(BOOL)arg1;
-(void)setPrimitiveRestartEnabled:(BOOL)arg1 index:(unsigned long long)arg2;
-(void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;
-(void)setTransformFeedbackState:(unsigned long long)arg1;

@required
-(void)setLineWidth:(float)arg1;
-(BOOL)isMemorylessRender;
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;
-(void)setDepthClipModeSPI:(unsigned long long)arg1;
-(void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2;
-(void)addSplitHandler:(/*^block*/id)arg1;

@end

