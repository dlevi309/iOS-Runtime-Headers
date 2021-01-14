/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>

@protocol MTLCommandQueue;
@class NSSet, NSArray, BWInferenceVideoRequirement, NSDictionary, FigMatting, NSString;

@interface BWMattingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable> {

	BWInferenceVideoRequirement* _primaryFormatInputVideoRequirement;
	BWInferenceVideoRequirement* _segmentationInputVideoRequirement;
	BWInferenceVideoRequirement* _depthInputVideoRequirement;
	BWInferenceVideoRequirement* _disparityInputVideoRequirement;
	NSArray* _inputVideoRequirements;
	BWInferenceVideoRequirement* _segmentationOutputVideoRequirement;
	BWInferenceVideoRequirement* _refinedDepthOutputVideoRequirement;
	NSArray* _outputVideoRequirements;
	NSDictionary* _tuningParameters;
	FigMatting* _mattingProcessor;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int executionTarget; 
@property (nonatomic,copy,readonly) NSSet * preventionReasons; 
@property (nonatomic,readonly) NSArray * inputVideoRequirements;                             //@synthesize inputVideoRequirements=_inputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputVideoRequirements;                            //@synthesize outputVideoRequirements=_outputVideoRequirements - In the implementation block
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
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW8)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<BWInferenceExecutable>)executable;
-(id)initWithConfiguration:(id)arg1 ;
-(int)type;
-(int)executionTarget;
-(int)_loadMattingProcessor;
-(int)_configureMattingProcessor;
-(id)processorOptionsDictionary;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg1 ;
-(NSSet *)preventionReasons;
-(NSArray *)inputVideoRequirements;
-(NSArray *)outputVideoRequirements;
-(NSArray *)cloneVideoRequirements;
-(NSArray *)inputMetadataRequirements;
-(NSArray *)outputMetadataRequirements;
-(unsigned)allowedPixelBufferCompressionDirection;
-(void)dealloc;
@end

