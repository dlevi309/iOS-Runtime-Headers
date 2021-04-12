/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class BWInferenceDataRequirement, BWInferenceRequirement;

@interface BWInferenceDataDependency : NSObject {

	BWInferenceDataRequirement* _dataRequirement;
	BWInferenceRequirement* _inferenceRequirement;

}

@property (nonatomic,readonly) BWInferenceDataRequirement * dataRequirement;               //@synthesize dataRequirement=_dataRequirement - In the implementation block
@property (nonatomic,readonly) BWInferenceRequirement * inferenceRequirement;              //@synthesize inferenceRequirement=_inferenceRequirement - In the implementation block
-(void)dealloc;
-(id)initWithInferenceRequirement:(id)arg1 dependentOnDataRequirement:(id)arg2 ;
-(BWInferenceDataRequirement *)dataRequirement;
-(BWInferenceRequirement *)inferenceRequirement;
@end

