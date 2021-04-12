/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>

@protocol MTLCommandQueue;
@class BWInferenceVideoRequirement, NSArray, NSDictionary, FigMatting, NSString, NSSet;

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
@property (nonatomic,readonly) NSArray * inputVideoRequirements;                      //@synthesize inputVideoRequirements=_inputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputVideoRequirements;                     //@synthesize outputVideoRequirements=_outputVideoRequirements - In the implementation block
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
-(id)processorOptionsDictionary;
@end

