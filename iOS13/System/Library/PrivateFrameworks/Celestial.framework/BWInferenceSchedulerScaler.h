/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>
#import <libobjc.A.dylib/BWInferencePreventable.h>

@protocol BWInferenceScalingProvider;
@class BWInferenceVideoRequirement, NSArray, NSString;

@interface BWInferenceSchedulerScaler : NSObject <BWInferenceJobProvider, BWInferenceExecutable, BWInferenceJobProvider, BWInferencePreventable> {

	BWInferenceVideoRequirement* _inputRequirement;
	NSArray* _outputRequirements;
	id<BWInferenceScalingProvider> _provider;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * inputRequirement;              //@synthesize inputRequirement=_inputRequirement - In the implementation block
@property (nonatomic,readonly) NSArray * outputRequirements;                                //@synthesize outputRequirements=_outputRequirements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)prepare;
-(id)newStorage;
-(id<BWInferenceExecutable>)executable;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_newProviderForWithOptions:(unsigned long long)arg1 ;
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)mustExecuteWhenAllowed;
-(id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 options:(unsigned long long)arg3 ;
-(BWInferenceVideoRequirement *)inputRequirement;
-(NSArray *)outputRequirements;
@end

