/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>

@class NSSet, NSArray, NSMutableArray, VCPCaptureAnalysisSession, NSString;

@interface BWVideoProcessingInferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable, BWInferenceExecutable> {

	int _type;
	int _executionTarget;
	NSSet* _preventionReasons;
	NSMutableArray* _inputVideoRequirements;
	NSMutableArray* _outputVideoRequirements;
	NSMutableArray* _cloneVideoRequirements;
	NSMutableArray* _inputMetadataRequirements;
	NSMutableArray* _outputMetadataRequirements;
	unsigned long long _analysisType;
	VCPCaptureAnalysisSession* _vcpSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (nonatomic,readonly) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int executionTarget;                                   //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,copy,readonly) NSSet * preventionReasons;                        //@synthesize preventionReasons=_preventionReasons - In the implementation block
@property (nonatomic,readonly) NSArray * inputVideoRequirements;                      //@synthesize inputVideoRequirements=_inputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputVideoRequirements;                     //@synthesize outputVideoRequirements=_outputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * cloneVideoRequirements;                      //@synthesize cloneVideoRequirements=_cloneVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * inputMetadataRequirements;                   //@synthesize inputMetadataRequirements=_inputMetadataRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputMetadataRequirements;                  //@synthesize outputMetadataRequirements=_outputMetadataRequirements - In the implementation block
+(void)initialize;
-(void)dealloc;
-(int)type;
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
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW2)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithType:(int)arg1 analysisType:(unsigned long long)arg2 executionTarget:(int)arg3 schedulerPriority:(unsigned)arg4 preventionReasons:(id)arg5 resourceProvider:(id)arg6 ;
-(id)bindVideoInputFromAttachedMediaUsingKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 withVideoFormatProvider:(/*^block*/id)arg3 ;
-(id)bindOutputMetadataKeys:(id)arg1 ;
@end

