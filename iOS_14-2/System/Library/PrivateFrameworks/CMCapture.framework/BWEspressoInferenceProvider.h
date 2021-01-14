/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>

@class NSSet, NSURL, NSString, BWEspressoInferenceContext, BWFigCaptureISPProcessingSession, NSMutableDictionary, NSMutableArray, NSArray;

@interface BWEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable> {

	int _type;
	int _executionTarget;
	NSSet* _preventionReasons;
	unsigned _allowedCompressionDirection;
	unsigned long long _concurrentSubmissionLimit;
	NSURL* _networkURL;
	NSString* _networkConfiguration;
	BWEspressoInferenceContext* _context;
	BWFigCaptureISPProcessingSession* _ispProcessingSession;
	void* _espressoPlan;
	SCD_Struct_BW30* _espressoNetwork;
	int _espressoPriority;
	NSMutableDictionary* _bindingNamesByRequirement;
	NSMutableArray* _inputVideoRequirements;
	NSMutableArray* _outputVideoRequirements;
	NSMutableArray* _cloneVideoRequirements;
	NSMutableArray* _inputMetadataRequirements;
	NSMutableArray* _outputMetadataRequirements;
	NSMutableArray* _pixelBuffersLockedDuringExecution;

}

@property (nonatomic,readonly) int type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int executionTarget;                                          //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,copy,readonly) NSSet * preventionReasons;                               //@synthesize preventionReasons=_preventionReasons - In the implementation block
@property (nonatomic,readonly) NSArray * inputVideoRequirements;                             //@synthesize inputVideoRequirements=_inputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputVideoRequirements;                            //@synthesize outputVideoRequirements=_outputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * cloneVideoRequirements;                             //@synthesize cloneVideoRequirements=_cloneVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * inputMetadataRequirements;                          //@synthesize inputMetadataRequirements=_inputMetadataRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputMetadataRequirements;                         //@synthesize outputMetadataRequirements=_outputMetadataRequirements - In the implementation block
@property (nonatomic,readonly) unsigned allowedPixelBufferCompressionDirection;              //@synthesize allowedCompressionDirection=_allowedCompressionDirection - In the implementation block
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
-(id)initWithType:(int)arg1 networkURL:(id)arg2 networkConfiguration:(id)arg3 context:(id)arg4 executionTarget:(int)arg5 schedulerPriority:(unsigned)arg6 preventionReasons:(id)arg7 resourceProvider:(id)arg8 allowedCompressionDirection:(unsigned)arg9 concurrentSubmissionLimit:(unsigned long long)arg10 ;
-(id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 ;
-(id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 ;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW8)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(id<BWInferenceExecutable>)executable;
-(NSString *)description;
-(int)type;
-(int)_mapSchedulerToEspressoPriority:(unsigned)arg1 ;
-(int)_espressoStorageTypeForExecutionTarget:(int)arg1 ;
-(int)_bindPixelBuffer:(CVBufferRef)arg1 asAccelerateImageForRequirement:(id)arg2 withBindingName:(id)arg3 ;
-(int)_prepareForInferenceWithWorkQueue:(id)arg1 ;
-(int)_ensureEspressoBindingsUsingStorage:(id)arg1 ;
-(id)bindEspressoInput:(id)arg1 fromMetadataUsingKeys:(id)arg2 ;
-(id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asMetadataUsingKey:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asMetadataUsingKeys:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2 ;
-(int)executionTarget;
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
