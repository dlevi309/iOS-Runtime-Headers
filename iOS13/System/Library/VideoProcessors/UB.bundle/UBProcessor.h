/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/

#import <UB/UB-Structs.h>
#import <libobjc.A.dylib/SidecarWriter.h>
#import <libobjc.A.dylib/ImageBufferProcessor.h>

@protocol MTLBuffer, MTLTexture, MTLCommandQueue, UBProcessorDelegate;
@class FigWiredMemory, DenoiseFusePipeline, UBPlist, RegWarpHelper, FigM2MController, RegWarpPP, FigMetalContext, LSCGainsPlist, NSMutableDictionary, UBConfig, UBFusionOutput, UBDeepFusionOutput, UBOutput, UBProgressiveBracketingParameters, NSString;

@interface UBProcessor : NSObject <SidecarWriter, ImageBufferProcessor> {

	SCD_Struct_UB54 _memoryRequirements;
	BOOL _regwarpHasBeenSetup;
	int _aggregateErr;
	id<MTLBuffer> _sharedMetalBuffer;
	BOOL _usingExternalSharedMetalBuffer;
	FigWiredMemory* _sharedRegWarpBuffer;
	BOOL _usingExternalSharedRegWarpBuffer;
	DenoiseFusePipeline* _denoiseFusePipeline;
	frameProperties_t _prebracketedProperties;
	int _preBracketFrameIndex;
	opaqueCMSampleBufferRef _ev0SampleBuffer;
	int _sifrFrameIndex;
	BOOL _processedSIFRandRefEV0;
	BOOL _inferenceInputGenerated;
	opaqueCMSampleBuffer* _bracketSampleBuffers[5];
	frameProperties_t _bracketProperties[5];
	int _curRegWarpTempIndex;
	FusionConfiguration _fusionConf;
	BOOL _requestTuningParams;
	UBPlist* _ubPlist;
	CVBufferRef _regWarpInput;
	RegWarpHelper* _regWarpHelper;
	FigM2MController* _regWarpM2M;
	SCD_Struct_UB60 _registrationPipelineRWPPConfig;
	RegWarpPP* _registrationPipelineRWPP;
	FigMetalContext* _metal;
	unsigned _fusionOptions;
	LSCGainsPlist* _lscGainsPlist;
	BOOL _saveInputFramesToDisk;
	NSMutableDictionary* _sidecar;
	UBConfig* _ubConfig;
	UBFusionOutput* _ubFusionOutput;
	UBDeepFusionOutput* _deepFusionOutput;
	float _deepFusionMotionScore;
	BOOL _processedSyntheticReference;
	BOOL _deepFusionPyramidBuilt[5];
	id<MTLTexture> _lscGainsTex;
	opaqueCMSampleBufferRef _referenceFrame;
	frameProperties_t _referenceFrameProperties;
	float _maxCornerScore;
	float _minGyroScore;
	double _maxFocusScore;
	BOOL _lowLightHybridRegistrationDone;
	SCD_Struct_De20 _evmGreenTintAdjustmentParams;
	BOOL _doRedFaceFix;
	BOOL _referenceFrameHasEVMinus;
	int _progressiveBatchSize;
	int _cntBracketSampleBuffers;
	int _batchCount;
	int _referenceFrameIndex;
	unsigned _processingType;
	id<MTLCommandQueue> _commandQueue;
	UBOutput* _output;
	UBProgressiveBracketingParameters* _progressiveBracketingParameters;
	id<UBProcessorDelegate> _delegate;
	NSMutableDictionary* _tuningParams;
	NSMutableDictionary* _tuningParamsPlist;
	NSMutableDictionary* _defringingTuningByPortType;

}

@property (nonatomic,retain) NSMutableDictionary * tuningParams;                                               //@synthesize tuningParams=_tuningParams - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tuningParamsPlist;                                          //@synthesize tuningParamsPlist=_tuningParamsPlist - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defringingTuningByPortType;                                 //@synthesize defringingTuningByPortType=_defringingTuningByPortType - In the implementation block
@property (assign,nonatomic) unsigned processingType;                                                          //@synthesize processingType=_processingType - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;                                               //@synthesize commandQueue=_commandQueue - In the implementation block
@property (assign,nonatomic) int referenceFrameIndex;                                                          //@synthesize referenceFrameIndex=_referenceFrameIndex - In the implementation block
@property (assign,nonatomic) BOOL doRedFaceFix;                                                                //@synthesize doRedFaceFix=_doRedFaceFix - In the implementation block
@property (assign,nonatomic) BOOL referenceFrameHasEVMinus;                                                    //@synthesize referenceFrameHasEVMinus=_referenceFrameHasEVMinus - In the implementation block
@property (assign,nonatomic) BOOL srlEnabled; 
@property (assign,nonatomic) int fusionMode; 
@property (nonatomic,retain) UBOutput * output;                                                                //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) UBProgressiveBracketingParameters * progressiveBracketingParameters;              //@synthesize progressiveBracketingParameters=_progressiveBracketingParameters - In the implementation block
@property (assign,nonatomic) int progressiveBatchSize;                                                         //@synthesize progressiveBatchSize=_progressiveBatchSize - In the implementation block
@property (assign,nonatomic,__weak) id<UBProcessorDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> sharedMetalBuffer; 
@property (nonatomic,retain) FigWiredMemory * sharedRegWarpBuffer; 
@property (nonatomic,readonly) int cntBracketSampleBuffers;                                                    //@synthesize cntBracketSampleBuffers=_cntBracketSampleBuffers - In the implementation block
@property (nonatomic,readonly) int batchCount;                                                                 //@synthesize batchCount=_batchCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<UBProcessorDelegate>)delegate;
-(void)setDelegate:(id<UBProcessorDelegate>)arg1 ;
-(int)finishProcessing;
-(id<MTLCommandQueue>)commandQueue;
-(int)allocateResources:(const SCD_Struct_UB54*)arg1 ;
-(int)process;
-(UBOutput *)output;
-(int)batchCount;
-(void)setOutput:(UBOutput *)arg1 ;
-(id)initWithCommandQueue:(id)arg1 ;
-(id<MTLBuffer>)sharedMetalBuffer;
-(FigWiredMemory *)sharedRegWarpBuffer;
-(int)addFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setFusionMode:(int)arg1 ;
-(int)fusionMode;
-(void)finishScheduling;
-(int)prewarmWithTuningParameters:(id)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 ;
-(int)prepareToProcess:(unsigned)arg1 prepareDescriptor:(id)arg2 ;
-(int)resetState;
-(int)setupWithOptions:(id)arg1 ;
-(UBProgressiveBracketingParameters *)progressiveBracketingParameters;
-(int)referenceFrameIndex;
-(unsigned)processingType;
-(void)setSrlEnabled:(BOOL)arg1 ;
-(void)setProgressiveBracketingParameters:(UBProgressiveBracketingParameters *)arg1 ;
-(void)setDoRedFaceFix:(BOOL)arg1 ;
-(void)setReferenceFrameHasEVMinus:(BOOL)arg1 ;
-(int)determineWorkingBufferRequirementsWithOptions:(id)arg1 memoryAllocationInfo:(SCD_Struct_UB54*)arg2 ;
-(void)setSharedMetalBuffer:(id<MTLBuffer>)arg1 ;
-(void)setSharedRegWarpBuffer:(FigWiredMemory *)arg1 ;
-(void)setReferenceFrameIndex:(int)arg1 ;
-(void)setProcessingType:(unsigned)arg1 ;
-(int)purgeResources;
-(BOOL)srlEnabled;
-(int)_appendFrames:(opaqueCMSampleBufferRef)arg1 cfp:(frameProperties_t*)arg2 ;
-(int)_perFrameProcessing:(id)arg1 input:(opaqueCMSampleBufferRef)arg2 cfp:(frameProperties_t*)arg3 ;
-(void)injectReferenceIfNeeded;
-(int)_process:(BOOL)arg1 ;
-(int)_multiFrameProcessing:(BOOL)arg1 ;
-(void)StartKTraceEventForProcess:(opaqueCMSampleBufferRef)arg1 ;
-(void)_prepareOutputMetadata;
-(int)resetInternalState;
-(void)EndKTraceEventForProcess:(opaqueCMSampleBufferRef)arg1 ;
-(void)initFrameProperties:(id)arg1 cfp:(frameProperties_t*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(void)StartKTraceEventForAddFrame:(frameProperties_t*)arg1 timestamp:(SCD_Struct_UB61)arg2 ;
-(id)getProcessingTypeKey:(frameProperties_t*)arg1 ;
-(void)EndKTraceEventForAddFrame:(frameProperties_t*)arg1 timestamp:(SCD_Struct_UB61)arg2 ;
-(int)updateEV0ReferenceFrameIfNecessary;
-(BOOL)_isMetadataConsistentWithFirstFrame;
-(int)_downsampleImageForRegistration:(CVBufferRef)arg1 outputImage:(CVBufferRef)arg2 ;
-(int)_processInferenceImage:(CVBufferRef)arg1 sourceFrameType:(int)arg2 sourceFrameIndex:(int)arg3 ltcFrameIndex:(int)arg4 gtcFrameIndex:(int)arg5 originalWidth:(unsigned long long)arg6 originalHeight:(unsigned long long)arg7 ;
-(int)_computeMetricsForReferenceFrameSelection:(int)arg1 ;
-(int)_computeReferenceFrameIndex;
-(int)_registerImages:(BOOL)arg1 ;
-(int)_lowLightMotionDetection;
-(int)_computeBlurryFrameWeight:(int)arg1 ;
-(int)_processSIFRandRefEV0IfPossible;
-(void)setProgressiveBatchSize:(int)arg1 ;
-(int)getOptions:(id)arg1 ;
-(void)applyOverrides;
-(int)determineWorkingBufferRequirementsWithOptions:(id)arg1 ubConfig:(id)arg2 memoryAllocationInfo:(SCD_Struct_UB54*)arg3 ;
-(int)determineWorkingBufferRequirementsToProcess:(unsigned)arg1 prepareDescriptor:(id)arg2 ubConfig:(id)arg3 denoiseFusePipelineSize:(unsigned long long*)arg4 rwppSize:(unsigned long long*)arg5 rwppInputWidth:(unsigned long long*)arg6 rwppInputHeight:(unsigned long long*)arg7 ;
-(id)newMTLBufferWithLength:(unsigned long long)arg1 ;
-(int)_bindRegWarpPPWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 ;
-(int)bindResourcesForProcessingType:(unsigned)arg1 prepareDescriptor:(id)arg2 ;
-(void)releaseStoredReference;
-(int)_setupFusionConfig;
-(void)storeReferenceIfNeeded;
-(int)_ubFuseImages:(BOOL)arg1 ;
-(int)_deepFusion;
-(int)_doDeepFusionSytheticRefererenceAndProxy;
-(int)_populateDeepFusionMetadata:(id)arg1 ;
-(BOOL)sanityCheckHomographyForBracketIndex:(int)arg1 ;
-(int)_deepFusionSetWarpReference:(int)arg1 ;
-(void)_deepFusionInvalidatePyramids;
-(void)_deepFusionRevertWarpToDefault;
-(int)_computeCornersStrength:(CVBufferRef)arg1 ROI:(CGRect*)arg2 totalCornerStrength:(float*)arg3 ;
-(int)_getSharpestBracket:(int)arg1 normGyroScores:(float*)arg2 normCornerScores:(float*)arg3 normFocusScores:(float*)arg4 useLongWeights:(unsigned char)arg5 sharpFrameIndex:(int*)arg6 ;
-(void)addToSidecar:(id)arg1 forKey:(id)arg2 ;
-(int)prepareToProcess:(unsigned)arg1 prepareDescriptor:(id)arg2 skinMaskProvider:(/*^block*/id)arg3 outputFrameReadyCallback:(/*^block*/id)arg4 ;
-(int)progressiveBatchSize;
-(int)cntBracketSampleBuffers;
-(BOOL)doRedFaceFix;
-(BOOL)referenceFrameHasEVMinus;
-(NSMutableDictionary *)tuningParams;
-(void)setTuningParams:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)tuningParamsPlist;
-(void)setTuningParamsPlist:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)defringingTuningByPortType;
-(void)setDefringingTuningByPortType:(NSMutableDictionary *)arg1 ;
@end

