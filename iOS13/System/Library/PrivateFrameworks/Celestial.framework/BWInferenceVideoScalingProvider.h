/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
+(void)initialize;
-(void)dealloc;
-(NSString *)description;
-(int)type;
-(id)newStorage;
-(id<BWInferenceExecutable>)executable;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW2)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 enableFencing:(BOOL)arg3 ;
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW2)arg2 ;
-(BOOL)mustExecuteWhenAllowed;
-(void)_configureCustomFiltersForScalingFromSourceWidth:(unsigned long long)arg1 sourceHeight:(unsigned long long)arg2 destinationWidth:(unsigned long long)arg3 destinationHeight:(unsigned long long)arg4 ;
@end

