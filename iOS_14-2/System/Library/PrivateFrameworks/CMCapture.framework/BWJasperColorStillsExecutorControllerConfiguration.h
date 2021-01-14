/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWJasperColorStillsExecutorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputColorFormat;
	BWVideoFormat* _outputDepthFormat;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;

}

@property (nonatomic,retain) BWVideoFormat * inputColorFormat;               //@synthesize inputColorFormat=_inputColorFormat - In the implementation block
@property (nonatomic,retain) BWVideoFormat * outputDepthFormat;              //@synthesize outputDepthFormat=_outputDepthFormat - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;              //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
-(BWVideoFormat *)inputColorFormat;
-(void)setInputColorFormat:(BWVideoFormat *)arg1 ;
-(BWVideoFormat *)outputDepthFormat;
-(void)setOutputDepthFormat:(BWVideoFormat *)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(int)horizontalSensorBinningFactor;
-(void)dealloc;
@end

