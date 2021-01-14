/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>
#import <libobjc.A.dylib/BWInferencePreventable.h>
#import <libobjc.A.dylib/BWInferencePropagatable.h>

@protocol BWInferenceProvider;
@class NSString;

@interface BWInferenceSchedulerInference : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferencePreventable, BWInferencePropagatable> {

	unsigned long long _identifier;
	id<BWInferenceProvider> _provider;
	int _inferenceType;
	unsigned _priority;
	float _maximumFramesPerSecond;
	Ad _previousExecutionTimeInSeconds;

}

@property (nonatomic,readonly) id<BWInferenceProvider> provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int inferenceType;                                     //@synthesize inferenceType=_inferenceType - In the implementation block
@property (nonatomic,readonly) unsigned priority;                                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) float maximumFramesPerSecond;                          //@synthesize maximumFramesPerSecond=_maximumFramesPerSecond - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 previousExecutionTime; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
@property (nonatomic,readonly) int type; 
+(void)initialize;
-(SCD_Struct_BW8)previousExecutionTime;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 withExecutionTime:(SCD_Struct_BW8)arg4 ;
-(id<BWInferenceProvider>)provider;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW8)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW8)arg2 ;
-(BOOL)mustExecuteWhenAllowed;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW8)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(id<BWInferenceExecutable>)executable;
-(NSString *)description;
-(int)type;
-(int)inferenceType;
-(id)initWithInferenceRequirement:(id)arg1 ;
-(unsigned long long)identifier;
-(float)maximumFramesPerSecond;
-(unsigned)priority;
-(int)prepare;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

