/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>
#import <libobjc.A.dylib/BWInferencePreventable.h>

@protocol BWInferenceScalingProvider;
@class BWInferenceVideoRequirement, NSArray, NSString;

@interface BWInferenceSchedulerScaler : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceSubmittable, BWInferenceJobProvider, BWInferencePreventable> {

	BWInferenceVideoRequirement* _inputRequirement;
	NSArray* _outputRequirements;
	id<BWInferenceScalingProvider> _provider;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * inputRequirement;              //@synthesize inputRequirement=_inputRequirement - In the implementation block
@property (nonatomic,readonly) NSArray * outputRequirements;                                //@synthesize outputRequirements=_outputRequirements - In the implementation block
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
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
-(NSArray *)outputRequirements;
-(BWInferenceVideoRequirement *)inputRequirement;
-(id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 options:(unsigned long long)arg3 ;
-(int)prepare;
-(id)_newProviderForWithOptions:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

