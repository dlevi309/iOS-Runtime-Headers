/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>

@protocol MTLCommandQueue;
@class NSDictionary, FigMatting, NSMutableArray, BWInferenceVideoRequirement, NSArray, NSMutableDictionary, BWInferenceMetadataRequirement, NSSet, NSString;

@interface BWMattingV2InferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable> {

	NSDictionary* _sensorConfigurationsByPortType;
	FigMatting* _mattingProcessor;
	int _mattingProcessorVersion;
	int _mattingTuningConfiguration;
	BOOL _submitWithoutSynchronization;
	NSMutableArray* _inputVideoRequirements;
	NSMutableArray* _outputVideoRequirements;
	NSMutableArray* _inputMetadataRequirements;
	BWInferenceVideoRequirement* _primaryFormatInputVideoRequirement;
	BWInferenceVideoRequirement* _depthInputVideoRequirement;
	BWInferenceVideoRequirement* _disparityInputVideoRequirement;
	BWInferenceVideoRequirement* _segmentationInputVideoRequirement;
	BWInferenceVideoRequirement* _segmentationOutputVideoRequirement;
	BWInferenceVideoRequirement* _refinedDepthOutputVideoRequirement;
	NSArray* _enabledSemanticMattingOutputTypes;
	NSMutableDictionary* _semanticMatteInputVideoRequirementsByMattingOutputType;
	NSMutableDictionary* _semanticMatteOutputVideoRequirementsByMattingOutputType;
	BWInferenceMetadataRequirement* _faceSegmentsWithLandmarksMetadataRequirement;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int executionTarget; 
@property (nonatomic,copy,readonly) NSSet * preventionReasons; 
@property (nonatomic,readonly) NSArray * inputVideoRequirements; 
@property (nonatomic,readonly) NSArray * outputVideoRequirements; 
@property (nonatomic,readonly) NSArray * cloneVideoRequirements; 
@property (nonatomic,readonly) NSArray * inputMetadataRequirements; 
@property (nonatomic,readonly) NSArray * outputMetadataRequirements; 
@property (nonatomic,readonly) unsigned allowedPixelBufferCompressionDirection; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW8)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(id<BWInferenceExecutable>)executable;
-(id)initWithConfiguration:(id)arg1 ;
-(id)_processorOptions;
-(int)type;
-(int)executionTarget;
-(int)_loadMattingProcessor;
-(int)_configureMattingProcessor;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg1 ;
-(NSSet *)preventionReasons;
-(NSArray *)inputVideoRequirements;
-(NSArray *)outputVideoRequirements;
-(NSArray *)cloneVideoRequirements;
-(NSArray *)inputMetadataRequirements;
-(NSArray *)outputMetadataRequirements;
-(unsigned)allowedPixelBufferCompressionDirection;
-(CVBufferRef)_outputPixelBufferForOutputVideoRequirement:(id)arg1 storage:(id)arg2 isMatte:(BOOL)arg3 ;
-(void)dealloc;
-(void)propagateMattingOutputToSampleBuffer:(opaqueCMSampleBufferRef)arg1 storage:(id)arg2 ;
-(id)mutableInputVideoRequirements;
-(id)mutableOutputVideoRequirements;
-(int)setInputsAndOutputsOnMattingProcessor:(id)arg1 inputSampleBuffer:(opaqueCMSampleBufferRef)arg2 storage:(id)arg3 ;
@end

