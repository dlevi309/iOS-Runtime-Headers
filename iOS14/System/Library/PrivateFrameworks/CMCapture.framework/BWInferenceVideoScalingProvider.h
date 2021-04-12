/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceScalingProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferencePreventable.h>

@class BWInferenceVideoRequirement, NSArray, NSDictionary, FigM2MController, NSString;

@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceScalingProvider, BWInferenceExecutable, BWInferencePreventable> {

	BWInferenceVideoRequirement* _inputRequirement;
	NSArray* _outputRequirements;
	NSDictionary* _colorSpaceProperties;
	BOOL _applyUprightExifOrientation;
	BOOL _applyValidBufferRect;
	BOOL _computeAndApplyAspectRatioCrop;
	FigM2MController* _scalerController;
	float _customFiltersLastUsedHorizontalRatio;
	float _customFiltersLastUsedVerticalRatio;
	BOOL _enableFencing;
	float _outputAspectRatio;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
+(void)initialize;
-(void)_configureCustomFiltersForScalingFromSourceWidth:(unsigned long long)arg1 sourceHeight:(unsigned long long)arg2 destinationWidth:(unsigned long long)arg3 destinationHeight:(unsigned long long)arg4 ;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW8)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW8)arg2 ;
-(BOOL)mustExecuteWhenAllowed;
-(id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 enableFencing:(BOOL)arg3 ;
-(id<BWInferenceExecutable>)executable;
-(NSString *)description;
-(int)type;
-(void)dealloc;
@end

