/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>

@class NSSet, NSArray, BWVisionInferenceContext, NSMapTable, NSMutableDictionary, NSMutableArray, BWInferenceVideoRequirement, NSString;

@interface BWVisionInferenceProvider : NSObject <BWInferenceProvider, BWInferenceExecutable> {

	int _type;
	int _executionTarget;
	NSSet* _preventionReasons;
	NSArray* _prototypeRequests;
	BWVisionInferenceContext* _context;
	unsigned long long _indexOfRequestForMaximumNumberOfFaces;
	unsigned long long _maximumNumberOfFaces;
	BOOL _alwaysExecuteForRedEyeReduction;
	NSMapTable* _requestIndexByRequest;
	NSMutableDictionary* _requestIndexByRequirement;
	NSMutableArray* _inputVideoRequirements;
	NSMutableArray* _outputVideoRequirements;
	NSMutableArray* _cloneVideoRequirements;
	NSMutableArray* _inputMetadataRequirements;
	NSMutableArray* _outputMetadataRequirements;
	BWInferenceVideoRequirement* _primaryInputVideoRequirement;
	BOOL _executesRequestsIndividually;

}

@property (nonatomic,retain) BWInferenceVideoRequirement * primaryInputVideoRequirement;              //@synthesize primaryInputVideoRequirement=_primaryInputVideoRequirement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (nonatomic,readonly) int type;                                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int executionTarget;                                                   //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,copy,readonly) NSSet * preventionReasons;                                        //@synthesize preventionReasons=_preventionReasons - In the implementation block
@property (nonatomic,readonly) NSArray * inputVideoRequirements;                                      //@synthesize inputVideoRequirements=_inputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputVideoRequirements;                                     //@synthesize outputVideoRequirements=_outputVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * cloneVideoRequirements;                                      //@synthesize cloneVideoRequirements=_cloneVideoRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * inputMetadataRequirements;                                   //@synthesize inputMetadataRequirements=_inputMetadataRequirements - In the implementation block
@property (nonatomic,readonly) NSArray * outputMetadataRequirements;                                  //@synthesize outputMetadataRequirements=_outputMetadataRequirements - In the implementation block
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
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BWInferenceVideoRequirement *)primaryInputVideoRequirement;
-(void)setPrimaryInputVideoRequirement:(BWInferenceVideoRequirement *)arg1 ;
-(id)initWithConfiguration:(id)arg1 requests:(id)arg2 executesRequestsIndividually:(BOOL)arg3 executionTarget:(int)arg4 preventionReasons:(id)arg5 resourceProvider:(id)arg6 ;
-(id)bindInputForRequest:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 preparedByAttachedMediaKey:(id)arg3 withVideoFormatProvider:(/*^block*/id)arg4 ;
-(id)bindIdealInputForRequest:(id)arg1 fromAttachedMediaUsingKey:(id)arg2 ;
-(id)bindInputForRequest:(id)arg1 fromMetadataUsingKeys:(id)arg2 ;
-(id)bindOutputForRequest:(id)arg1 asAttachedMediaUsingKey:(id)arg2 withVideoFormat:(id)arg3 ;
-(id)bindOutputByCloningInputRequirement:(id)arg1 toAttachedMediaUsingKey:(id)arg2 ;
-(id)bindOutputForRequest:(id)arg1 asMetadataUsingKey:(id)arg2 ;
-(id)bindOutputForRequest:(id)arg1 asMetadataUsingKeys:(id)arg2 ;
-(id)bindOutputForRequest:(id)arg1 asConsolidatedMetadataUsingKeys:(id)arg2 ;
@end

