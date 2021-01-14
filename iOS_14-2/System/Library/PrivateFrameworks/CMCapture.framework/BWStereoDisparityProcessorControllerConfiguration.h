/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorConfiguration.h>

@interface BWStereoDisparityProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	SCD_Struct_BW2 _inputDimensions;
	SCD_Struct_BW2 _disparityOutputDimensions;
	BOOL _shouldComputeDisparityWhenCalibrationFails;

}

@property (assign,nonatomic) SCD_Struct_BW2 inputDimensions;                               //@synthesize inputDimensions=_inputDimensions - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 disparityOutputDimensions;                     //@synthesize disparityOutputDimensions=_disparityOutputDimensions - In the implementation block
@property (assign,nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails;              //@synthesize shouldComputeDisparityWhenCalibrationFails=_shouldComputeDisparityWhenCalibrationFails - In the implementation block
-(SCD_Struct_BW2)inputDimensions;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(SCD_Struct_BW2)disparityOutputDimensions;
-(void)setInputDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setDisparityOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
@end

