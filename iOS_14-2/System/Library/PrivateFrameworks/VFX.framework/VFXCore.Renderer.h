/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@interface VFXCore.Renderer : _UKNOWN_SUPERCLASS_ {

	 device;
	 lock;
	 renderOutputs;
	 renderOutputsForThisFrame;
	 GPUToolBox;
	 texturePool;
	 shaderPool;
	 bufferPool;
	 wholeFrameBufferPool;
	 uniformBufferPool;
	 commandQueue;
	 showDebugMenu;
	 canUseImgui;
	 isPostFXEnabled;
	 outputCommandBuffer;
	 currentCommandBuffer;
	 currentEncoder;
	 currentRenderPassDescriptor;
	 cachedMTLRenderPassDescriptor;
	 performanceCounterRecorder;
	 _renderOutputPassDescriptor;
	 renderOutputRenderPassFormat;
	 encoders;
	 mtkMeshBufferAllocator;
	 opaqueDepthState;
	 transparentDepthState;
	 transparentStencilOverdrawDepthState;
	 depthAlwaysNoWriteState;
	 reversedDepthState;
	 reversedNoWriteDepthState;
	 inFlightSemaphore;
	 defaultSampler;
	 defaultSamplerClampMipNearest;
	 defaultSamplerRepeatMipNearest;
	 defaultSamplerRepeatSMipNearest;
	 defaultSamplerMirrorRepeatMipNearest;
	 _defaultIrradianceTexture;
	 _defaultRadianceTexture;
	 _defaultBrdfLutTexture;
	 _defaultWhiteTexture;
	 _defaultGreyTexture;
	 _defaultBlackTexture;
	 _defaultNormalMapTexture;
	 frameTimestamp;
	 currentRenderOutputHandle;
	 colorRamps;
	 stripIndexBuffers;
	 deformedBuffers;

}
@end

