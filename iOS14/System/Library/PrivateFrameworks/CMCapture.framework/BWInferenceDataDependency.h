/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class BWInferenceDataRequirement, BWInferenceRequirement;

@interface BWInferenceDataDependency : NSObject {

	BWInferenceDataRequirement* _dataRequirement;
	BWInferenceRequirement* _inferenceRequirement;

}

@property (nonatomic,readonly) BWInferenceDataRequirement * dataRequirement;               //@synthesize dataRequirement=_dataRequirement - In the implementation block
@property (nonatomic,readonly) BWInferenceRequirement * inferenceRequirement;              //@synthesize inferenceRequirement=_inferenceRequirement - In the implementation block
-(id)initWithInferenceRequirement:(id)arg1 dependentOnDataRequirement:(id)arg2 ;
-(BWInferenceRequirement *)inferenceRequirement;
-(BWInferenceDataRequirement *)dataRequirement;
-(void)dealloc;
@end

