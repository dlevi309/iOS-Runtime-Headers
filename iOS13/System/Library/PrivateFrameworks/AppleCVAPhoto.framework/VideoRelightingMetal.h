/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <AppleCVAPhoto/ImageSaverAndFileConfigRegistrator.h>

@protocol MTLDeviceSPI, MTLLibrary, MTLCommandQueue, CVAVideoPipelinePropertiesSPI, MTLRenderPipelineState, MTLTexture, MTLDepthStencilState, MTLComputePipelineState, OS_dispatch_queue, OS_dispatch_semaphore, MTLBuffer;
@class MTLRenderPassDescriptor, NSData, UIColor, NSObject, CVAPhotoMTLRingBuffer, CVAFilterColorAlphaToFgBg, CVAFilterMaskedVariableBlur;

@interface VideoRelightingMetal : ImageSaverAndFileConfigRegistrator {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _library;
	id<MTLCommandQueue> _commandQueue;
	CVAPhotoMetalContext* _metalContext;
	id<CVAVideoPipelinePropertiesSPI> _properties;
	MTLRenderPassDescriptor* _tcRenderDesc;
	id<MTLRenderPipelineState> _tcKernel;
	id<MTLTexture> _tcDepthTexture;
	id<MTLTexture> _tcTexture;
	id<MTLTexture> _lightTexture;
	TC_MatrixUniforms _tcMatrixUniformsBuffer;
	id<MTLDepthStencilState> _depthStencilState;
	id<MTLComputePipelineState> _kernel_CountVertical;
	id<MTLComputePipelineState> _kernel_Count;
	id<MTLComputePipelineState> _kernel_Slide;
	id<MTLComputePipelineState> _kernel_Relight[2][2][2];
	id<MTLComputePipelineState> _kernel_AlphaBlendRGBATextureArray;
	id<MTLTexture> _texStub;
	NSData* _colorCubeUserData;
	id<MTLTexture> _texColorCubeUserData;
	id<MTLTexture> _texColorCubeStaticArray[7];
	BOOL _apiTransitionPeriod;
	id<MTLTexture> _texSelectedColorCube;
	id<MTLTexture> _srcTexture;
	id<MTLTexture> _dstTexture;
	id<MTLTexture> _dstUVTexture;
	long long _frameIndex;
	long long _frameIndexWhenFacekitAllowed;
	id<MTLTexture> _alphaTexture;
	BOOL _trustAlpha;
	id<MTLTexture> _vertCountTexture;
	id<MTLTexture> _countTexture;
	id<MTLTexture> _slideTexture;
	id<MTLTexture> _rgbTransformMapContourNearTexture[2];
	id<MTLTexture> _rgbTransformMapStudioNearTexture[2];
	id<MTLTexture> _rgbTransformMapContourFarTexture[2];
	id<MTLTexture> _rgbTransformMapStudioFarTexture[2];
	id<MTLTexture> _rgbTransformMapCurrentNearTexturePtr;
	id<MTLTexture> _rgbTransformMapCurrentFarTexturePtr;
	id<MTLTexture> _rgbTransformMapCurrentTextureInterpolated;
	id<MTLTexture> _rgbTransformMapTextureSelectedPtr;
	float _lightMapsNearFarLerp;
	SlideUniforms _uniformBuffer_slide;
	RelightUniforms _uniformBuffer_relight;
	float4x4 _modelViewProjectionMatrix;
	float4x4 _modelViewMatrix;
	float4x4 _projectionMatrix;
	 _face3DCenter;
	 _faceModelCenterProjected;
	UIColor* _backgroundColor;
	float _proxyToFaceEffectLerpTemporal;
	float _proxyToFaceEffectLerpFinal;
	float _portraitStyleStrength;
	float _focusDistance;
	NSObject*<OS_dispatch_queue> _synchronousRelightingCallbackQueue;
	NSObject*<OS_dispatch_semaphore> _inflightSemaphore;
	MTLRenderPassDescriptor* _faceRenderDesc1;
	MTLRenderPassDescriptor* _faceRenderDesc2;
	MTLRenderPassDescriptor* _faceRenderDesc3;
	id<MTLRenderPipelineState> _kernel_Face;
	id<MTLTexture> _facemaskRegionTexture;
	vector<FaceVertex, std::__1::allocator<FaceVertex> >* _modelVertices;
	CVAPhotoMTLRingBuffer* _vertexBuffer;
	FaceKitStreamedData _faceKitStreamedData;
	BOOL _faceDetected;
	BOOL _faceDetectedReal;
	circular_buffer<bool, std::__1::allocator<bool> >* _faceDetectedRealHistory;
	optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > _faceConfidenceRollingVariance;
	optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > _faceRelightingAngleFactorsRollingMean;
	vector<unsigned short, std::__1::allocator<unsigned short> >* _faceKitMeshTris;
	id<MTLBuffer> _indexBufferImmutable;
	NSData* _faceKitMeshTexcoords;
	BOOL _debugFace;
	BOOL _debugFaceDraw;
	unsigned long long _indexOfCheekLandmark_topLeft;
	unsigned long long _indexOfCheekLandmark_bottomLeft;
	unsigned long long _indexOfCheekLandmark_topRight;
	unsigned long long _indexOfCheekLandmark_bottomRight;
	optional<unsigned long> _closestLeftCheekVertexID;
	optional<float> _cheekAngle;
	CVAFilterColorAlphaToFgBg* _colorAlphaToFgBg;
	CVAFilterMaskedVariableBlur* _blurPyramidForSkinFg;
	id<MTLTexture> _texSkinRGBAPyramid;
	id<MTLTexture> _texSkinSegmentationAlias;
	float _vignettingScale;
	float _relightingStability;
	double _gpuStartTime;
	double _gpuEndTime;

}

@property (readonly) double gpuStartTime;                    //@synthesize gpuStartTime=_gpuStartTime - In the implementation block
@property (readonly) double gpuEndTime;                      //@synthesize gpuEndTime=_gpuEndTime - In the implementation block
@property (readonly) float relightingStability;              //@synthesize relightingStability=_relightingStability - In the implementation block
-(void)initCommon;
-(float)relightingStability;
-(id)initWithMetalContext:(CVAPhotoMetalContext*)arg1 ;
-(id)create3DTextureWithSize:(unsigned long long)arg1 ;
-(void)createTexturesWith:(unsigned long long)arg1 imgHeight:(unsigned long long)arg2 ;
-(void)initKernelFunctions;
-(id)loadCube:(id)arg1 ;
-(id)getInternalColorCube:(int)arg1 ;
-(void)saveTexture:(id)arg1 toImage:(id)arg2 ;
-(void)configureRenderPipeline;
-(void)updateModelAndPose:(vector<float, std::__1::allocator<float> >*)arg1 camera:(vector<float, std::__1::allocator<float> >*)arg2 ;
-(void)setModelVertices;
-(void)generateModelNormals;
-(void)updateMatrixWithWidth:(int)arg1 height:(int)arg2 camera:(const vector<float, std::__1::allocator<float> >*)arg3 pose:(const vector<float, std::__1::allocator<float> >*)arg4 ;
-(void)updateUniforms:(BOOL)arg1 ;
-(void)loadRGBTransformMapsOnceTo:(id*)arg1 namePrefix:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 forIntermediateResults:(BOOL)arg3 ;
-(void)loadRGBTransformMapsForEffectVersion:(BOOL)arg1 ;
-(void)encodeTCKernelToCommandBuffer:(id)arg1 ;
-(void)encodeRelightKernelToCommandBuffer:(id)arg1 ;
-(void)encodeVertCountKernelToCommandBuffer:(id)arg1 ;
-(void)encodeCountKernelToCommandBuffer:(id)arg1 ;
-(void)encodeSlideKernelToCommandBuffer:(id)arg1 ;
-(void)updateFaceKitStreamedDataFromProcessOutput:(id)arg1 ;
-(void)encodeAlphaBlendRGBATextureArrayToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(const float*)arg5 ;
-(void)encodeLerpNearFarMapsToCommandBuffer:(id)arg1 ;
-(void)renderWithSrcImage:(CVBufferRef)arg1 srcAlpha:(CVBufferRef)arg2 trustAlpha:(BOOL)arg3 yuvSourceDownsampled:(id)arg4 skinSegmentation:(CVBufferRef)arg5 dstImage:(CVBufferRef)arg6 faceKitProcessOutput:(id)arg7 portraitStyleStrength:(float)arg8 colorSim:(id)arg9 disparity:(id)arg10 focusDistance:(float)arg11 singleCubeData:(id)arg12 properties:(id)arg13 callbackQueue:(id)arg14 callback:(/*^block*/id)arg15 ;
-(double)gpuStartTime;
-(double)gpuEndTime;
@end
