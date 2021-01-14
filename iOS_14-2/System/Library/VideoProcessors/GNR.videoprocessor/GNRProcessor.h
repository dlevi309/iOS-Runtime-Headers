/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/

#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
#import <libobjc.A.dylib/SidecarWriter.h>
#import <libobjc.A.dylib/SampleBufferProcessor.h>

@class NSMutableDictionary, NSDictionary, DenoiseFusePipeline, DeviceParameters, RegWarp, FigMetalContext, NSString;

@interface GNRProcessor : NSObject <SidecarWriter, SampleBufferProcessor> {

	NSMutableDictionary* _tuningParams;
	NSMutableDictionary* _tuningParamsPlist;
	/*^block*/id _callback;
	int _isAsynchronous;
	int _ctxCreateSynchronization;
	int _gpuPriority;
	NSDictionary* _debugConfigurationOptions;
	BOOL _disableispDGainFactorFix;
	BOOL _hasBeenSetup;
	BOOL _isMultiFrameProcessing;
	int _fusionAlgo;
	int _aggregateErr;
	SCD_Struct_GN29* _errorRecoveryData;
	DenoiseFusePipeline* _denoiseFusePipeline;
	CVBufferRef _outputPixelBuffer;
	opaqueCMSampleBufferRef _prebracketedEV0SampleBuffer;
	frameProperties_t _prebracketedProperties;
	opaqueCMSampleBufferRef _evmSampleBuffer;
	frameProperties_t _evmProperties;
	opaqueCMSampleBufferRef _ev0SampleBuffer;
	frameProperties_t _ev0Properties;
	opaqueCMSampleBuffer* _bracketSampleBuffers[4];
	frameProperties_t _bracketProperties[4];
	int _cntBracketSampleBuffers;
	FusionConfiguration _fusionConf;
	BOOL _requestTuningParams;
	DeviceParameters* _deviceTuningParams;
	RegWarp* _registrationPipelineRW;
	FigMetalContext* _metal;
	unsigned _fusionOptions;
	CVPixelBufferPoolRef _outputPixelBufferPool;
	NSMutableDictionary* _sidecar;
	int _registrationReferenceFrameIndex;
	BOOL _allowModifyingInputBuffers;
	BOOL _enforceReferenceFrameIndex;
	int _processingType;
	int _referenceFrameIndex;
	/*^block*/id _referenceFrameSelectionHandlerBlock;

}

@property (assign,nonatomic) int processingType;                                //@synthesize processingType=_processingType - In the implementation block
@property (assign,nonatomic) BOOL allowModifyingInputBuffers;                   //@synthesize allowModifyingInputBuffers=_allowModifyingInputBuffers - In the implementation block
@property (assign,nonatomic) int referenceFrameIndex;                           //@synthesize referenceFrameIndex=_referenceFrameIndex - In the implementation block
@property (assign,nonatomic) BOOL enforceReferenceFrameIndex;                   //@synthesize enforceReferenceFrameIndex=_enforceReferenceFrameIndex - In the implementation block
@property (nonatomic,copy) id referenceFrameSelectionHandlerBlock;              //@synthesize referenceFrameSelectionHandlerBlock=_referenceFrameSelectionHandlerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptions:(id)arg1 ;
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)purgeResources;
-(void)setAllowModifyingInputBuffers:(BOOL)arg1 ;
-(NSString *)debugDescription;
-(int)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setReferenceFrameIndex:(int)arg1 ;
-(int)referenceFrameIndex;
-(void)resetState;
-(void)setReferenceFrameSelectionHandlerBlock:(id)arg1 ;
-(void)prepareForProcessingPixelBuffersWithAttributes:(id)arg1 ;
-(BOOL)isTele;
-(int)processingType;
-(void)setProcessingType:(int)arg1 ;
-(void)finishScheduling;
-(void)dealloc;
-(int)copyValue:(void*)arg1 forProperty:(id)arg2 ;
-(int)processSequence;
-(void)onOutput:(/*^block*/id)arg1 ;
-(void)finishPendingProcessing;
-(int)getOptions:(id)arg1 ;
-(void)_oneTimeSetupUsingAttributes:(id)arg1 fallbackPixelBuffer:(CVBufferRef)arg2 ;
-(int)_multiFrameProcessing;
-(int)_prepareOutput:(opaqueCMSampleBufferRef)arg1 params:(id)arg2 ;
-(int)setPropertyForReferenceFrameIndex:(int)arg1 ;
-(int)_shortFramesDelivered;
-(void)setEnforceReferenceFrameIndex:(BOOL)arg1 ;
-(int)_registerImages:(BOOL)arg1 ;
-(int)StartKTraceEventForBracketFrame:(id)arg1 ;
-(void)loadBracketMetadata:(id)arg1 cfp:(frameProperties_t*)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(int)_appendFrames:(opaqueCMSampleBufferRef)arg1 cfp:(frameProperties_t*)arg2 ;
-(int)_perFrameProcessing:(id)arg1 input:(opaqueCMSampleBufferRef)arg2 cfp:(frameProperties_t*)arg3 ;
-(void)EndKTraceEventForBracketFrame:(id)arg1 ktraceCode:(int)arg2 ;
-(void)_selectErrorRecoveryFrame;
-(float)_computeFusionEffectiveness:(unsigned)arg1 ;
-(int)_getSharpestFrame;
-(int)_computeRegistrationOrder;
-(int)_fuseImages:(CVBufferRef)arg1 ;
-(void)_createResourcesUsingAttributes:(id)arg1 pixelBuffer:(CVBufferRef)arg2 ;
-(void)addToSidecar:(id)arg1 forKey:(id)arg2 ;
-(BOOL)allowModifyingInputBuffers;
-(BOOL)enforceReferenceFrameIndex;
-(id)referenceFrameSelectionHandlerBlock;
@end

