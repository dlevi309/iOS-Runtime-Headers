/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateCameraCalibrationData;

}

@property (assign,nonatomic) BOOL discardsLateCameraCalibrationData;              //@synthesize discardsLateCameraCalibrationData=_discardsLateCameraCalibrationData - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)description;
-(void)setDiscardsLateCameraCalibrationData:(BOOL)arg1 ;
-(BOOL)discardsLateCameraCalibrationData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(BOOL)isEqual:(id)arg1 ;
@end

