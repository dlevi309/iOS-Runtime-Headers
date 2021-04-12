/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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
	unsigned _priority;
	float _maximumFramesPerSecond;
	Ad _previousExecutionTimeInSeconds;

}

@property (nonatomic,readonly) id<BWInferenceProvider> provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned priority;                                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) float maximumFramesPerSecond;                          //@synthesize maximumFramesPerSecond=_maximumFramesPerSecond - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 previousExecutionTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
@property (nonatomic,readonly) int type; 
+(void)initialize;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(unsigned long long)identifier;
-(unsigned)priority;
-(id<BWInferenceProvider>)provider;
-(float)maximumFramesPerSecond;
-(int)prepare;
-(id)newStorage;
-(id<BWInferenceExecutable>)executable;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW2)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)mustExecuteWhenAllowed;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 withExecutionTime:(SCD_Struct_BW2)arg4 ;
-(id)initWithInferenceRequirement:(id)arg1 ;
-(SCD_Struct_BW2)previousExecutionTime;
@end

