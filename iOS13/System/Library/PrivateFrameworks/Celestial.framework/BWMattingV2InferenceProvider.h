/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>

@protocol MTLCommandQueue;
@class NSDictionary, FigMatting, NSMutableArray, BWInferenceVideoRequirement, BWInferenceMetadataRequirement, NSString, NSSet, NSArray;

@interface BWMattingV2InferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable> {

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
	BWInferenceVideoRequirement* _personSemanticsHairInputVideoRequirement;
	BWInferenceVideoRequirement* _personSemanticsSkinInputVideoRequirement;
	BWInferenceVideoRequirement* _personSemanticsTeethInputVideoRequirement;
	BWInferenceVideoRequirement* _personSemanticsHairOutputVideoRequirement;
	BWInferenceVideoRequirement* _personSemanticsSkinOutputVideoRequirement;
	BWInferenceVideoRequirement* _personSemanticsTeethOutputVideoRequirement;
	BWInferenceMetadataRequirement* _faceSegmentsWithLandmarksMetadataRequirement;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int executionTarget; 
@property (nonatomic,copy,readonly) NSSet * preventionReasons; 
@property (nonatomic,readonly) NSArray * inputVideoRequirements; 
@property (nonatomic,readonly) NSArray * outputVideoRequirements; 
@property (nonatomic,readonly) NSArray * cloneVideoRequirements; 
@property (nonatomic,readonly) NSArray * inputMetadataRequirements; 
@property (nonatomic,readonly) NSArray * outputMetadataRequirements; 
+(void)initialize;
-(void)dealloc;
-(int)type;
-(id)initWithConfiguration:(id)arg1 ;
-(id)newStorage;
-(id<BWInferenceExecutable>)executable;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg1 ;
-(int)executionTarget;
-(NSSet *)preventionReasons;
-(NSArray *)inputVideoRequirements;
-(NSArray *)outputVideoRequirements;
-(NSArray *)cloneVideoRequirements;
-(NSArray *)inputMetadataRequirements;
-(NSArray *)outputMetadataRequirements;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)_loadMattingProcessor;
-(int)_configureMattingProcessor;
-(id)_processorOptions;
-(CVBufferRef)_outputPixelBufferForOutputVideoRequirement:(id)arg1 storage:(id)arg2 isMatte:(BOOL)arg3 ;
-(void)propagateMattingOutputToSampleBuffer:(opaqueCMSampleBufferRef)arg1 storage:(id)arg2 ;
-(id)mutableInputVideoRequirements;
-(id)mutableOutputVideoRequirements;
-(int)setInputsAndOutputsOnMattingProcessor:(id)arg1 inputSampleBuffer:(opaqueCMSampleBufferRef)arg2 storage:(id)arg3 ;
@end

