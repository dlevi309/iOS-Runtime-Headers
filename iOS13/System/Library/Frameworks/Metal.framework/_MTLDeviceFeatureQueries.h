/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLDeviceFeatureQueries.h>

@protocol MTLDeviceSPI;
@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries {

	SCD_Struct_MT74 _featureInfo[104];
	id<MTLDeviceSPI> _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)validate;
-(BOOL)supportsQuadReduction;
-(BOOL)supportsBufferlessClientStorageTexture;
-(BOOL)supportsArgumentBuffersTier2;
-(BOOL)supportsReadWriteTextureArgumentsTier2;
-(BOOL)supportsProgrammableSamplePositions;
-(BOOL)supportsBCTextureCompression;
-(BOOL)supports3DBCTextures;
-(BOOL)supportsLargeFramebufferConfigs;
-(BOOL)supportsCustomBorderColor;
-(BOOL)supportsSamplerAddressModeClampToHalfBorder;
-(BOOL)supports32bpcMSAATextures;
-(BOOL)supportsVertexAmplification;
-(BOOL)supportsPlacementHeaps;
-(BOOL)supportsOpenCLTextureWriteSwizzles;
-(BOOL)supportsLimitedYUVFormats;
-(BOOL)supportsNonPrivateDepthStencilTextures;
-(BOOL)supportsNonPrivateMSAATextures;
-(BOOL)supportsLinearTextureFromSharedBuffer;
-(BOOL)supportsPipelineLibraries;
-(BOOL)supportsFragmentOnlyEncoders;
-(BOOL)supportsBufferWithIOSurface;
-(BOOL)supportsProgrammableBlending;
-(BOOL)supportsRenderToLinearTextures;
-(BOOL)supportsMemorylessRenderTargets;
-(BOOL)supportsFastMathInfNaNPropagation;
-(BOOL)supportsInvariantVertexPosition;
-(BOOL)supportsShaderLODAverage;
-(BOOL)supportsRelaxedTextureViewRequirements;
-(BOOL)supportsSeparateDepthStencil;
-(BOOL)supportsGPUStatistics;
-(BOOL)supportsASTCTextureCompression;
-(BOOL)supportsExtendedYUVFormats;
-(BOOL)supportsPublicXR10Formats;
-(BOOL)supportsSRGBwrites;
-(BOOL)supportsDepthClipMode;
-(BOOL)supportsPacked32TextureBufferWrites;
-(BOOL)supports3DASTCTextures;
-(BOOL)supportsExtendedXR10Formats;
-(BOOL)supportsFragmentBufferWrites;
-(BOOL)supportsCountingOcclusionQuery;
-(BOOL)supportsBaseVertexInstanceDrawing;
-(BOOL)supportsIndirectDrawAndDispatch;
-(BOOL)supportsTessellation;
-(BOOL)supportsReadWriteBufferArguments;
-(BOOL)supportsArrayOfTextures;
-(BOOL)supportsArrayOfSamplers;
-(BOOL)supportsCombinedMSAAStoreAndResolveAction;
-(BOOL)supportsMutableTier1ArgumentBuffers;
-(BOOL)supportsSamplerCompareFunction;
-(BOOL)supportsMSAADepthResolve;
-(BOOL)supportsMSAAStencilResolve;
-(BOOL)supportsMSAADepthResolveFilter;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(BOOL)supportsIndirectStageInRegion;
-(BOOL)supportsIndirectTextures;
-(BOOL)supportsNorm16BCubicFiltering;
-(BOOL)supportsTextureOutOfBoundsReads;
-(BOOL)supportsTextureSwizzle;
-(BOOL)supportsAlphaYUVFormats;
-(BOOL)supportsMemoryOrderAtomics;
-(BOOL)supportsQuadGroup;
-(BOOL)supportsRenderTextureWrites;
-(BOOL)supportsImageBlocks;
-(BOOL)supportsTileShaders;
-(BOOL)supportsImageBlockSampleCoverageControl;
-(BOOL)supportsNativeHardwareFP16;
-(BOOL)supportsPostDepthCoverage;
-(BOOL)supportsMipLevelsSmallerThanBlockSize;
-(BOOL)supportsNonUniformThreadgroupSize;
-(BOOL)supportsReadWriteTextureArguments;
-(BOOL)supportsReadWriteTextureCubeArguments;
-(BOOL)supportsTextureCubeArray;
-(BOOL)supportsQuadShufflesAndBroadcast;
-(BOOL)supportsConcurrentComputeDispatch;
-(BOOL)supportsRenderPassWithoutRenderTarget;
-(BOOL)supportsRasterOrderGroups;
-(BOOL)supportsLinearTexture2DArray;
-(BOOL)supportsNonSquareTileShaders;
-(BOOL)supportsSeparateVisibilityAndShadingRate;
-(BOOL)supports2DLinearTexArraySPI;
-(BOOL)supportsLayeredRendering;
-(BOOL)supportsViewportAndScissorArray;
-(BOOL)supportsIndirectTessellation;
-(BOOL)supportsMSAAStencilResolveFilter;
-(BOOL)supportsStencilFeedback;
-(BOOL)supportsFP32TessFactors;
-(BOOL)supportsSIMDGroup;
-(BOOL)supportsShaderMinLODClamp;
-(BOOL)supportsSIMDShufflesAndBroadcast;
-(BOOL)supportsVariableRateRasterization;
-(BOOL)supportsYCBCRFormats;
-(BOOL)supportsYCBCRFormatsPQ;
-(BOOL)supportsYCBCRFormats12;
-(BOOL)supportsYCBCRFormatsXR;
-(BOOL)supportsASTCHDRTextureCompression;
-(BOOL)supportsSparseTextures;
-(BOOL)supportsBlackOrWhiteSamplerBorderColors;
-(BOOL)supportsMirrorClampToEdgeSamplerMode;
-(BOOL)supportsSIMDReduction;
-(BOOL)supportsDepthClipModeClampExtended;
-(BOOL)supportsTexture2DMultisampleArray;
-(BOOL)supportsForceSeamsOnCubemaps;
-(BOOL)supportsFloat16BCubicFiltering;
-(BOOL)supportForFeature:(long long)arg1 ;
-(long long)requirementForFeature:(long long)arg1 ;
-(id)nameForFeature:(long long)arg1 ;
@end

