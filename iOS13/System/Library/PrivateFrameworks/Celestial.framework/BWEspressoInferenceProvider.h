/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>

@class NSSet, NSURL, NSString, BWEspressoInferenceContext, NSMutableDictionary, NSMutableArray, NSArray;

@interface BWEspressoInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable, BWInferenceSubmittable> {

	int _type;
	int _executionTarget;
	NSSet* _preventionReasons;
	NSURL* _networkURL;
	NSString* _networkConfiguration;
	BWEspressoInferenceContext* _context;
	OpaqueFigCaptureISPProcessingSessionRef _ispProcessingSession;
	void* _espressoPlan;
	SCD_Struct_BW38* _espressoNetwork;
	int _espressoPriority;
	NSMutableDictionary* _bindingNamesByRequirement;
	NSMutableArray* _inputVideoRequirements;
	NSMutableArray* _outputVideoRequirements;
	NSMutableArray* _cloneVideoRequirements;
	NSMutableArray* _inputMetadataRequirements;
	NSMutableArray* _outputMetadataRequirements;
	NSMutableArray* _pixelBuffersLockedDuringExecution;

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
-(NSString *)description;
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
-(id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2 ;
-(int)_mapSchedulerToEspressoPriority:(unsigned)arg1 ;
-(int)_espressoStorageTypeForExecutionTarget:(int)arg1 ;
-(int)_bindPixelBuffer:(CVBufferRef)arg1 asAccelerateImageForRequirement:(id)arg2 withBindingName:(id)arg3 ;
-(int)_prepareForInferenceWithWorkQueue:(id)arg1 ;
-(int)_ensureEspressoBindingsUsingStorage:(id)arg1 ;
-(id)initWithType:(int)arg1 networkURL:(id)arg2 networkConfiguration:(id)arg3 context:(id)arg4 executionTarget:(int)arg5 schedulerPriority:(unsigned)arg6 preventionReasons:(id)arg7 resourceProvider:(id)arg8 ;
-(id)bindEspressoInput:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 ;
-(id)bindEspressoInput:(id)arg1 fromMetadataUsingKeys:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 ;
-(id)bindEspressoOutput:(id)arg1 asMetadataUsingKey:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asMetadataUsingKeys:(id)arg2 ;
-(id)bindEspressoOutput:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2 ;
@end

