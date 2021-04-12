/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureCameraCalibrationDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateCameraCalibrationData;

}

@property (assign,nonatomic) BOOL discardsLateCameraCalibrationData;              //@synthesize discardsLateCameraCalibrationData=_discardsLateCameraCalibrationData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDiscardsLateCameraCalibrationData:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)discardsLateCameraCalibrationData;
@end

