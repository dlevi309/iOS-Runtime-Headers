/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	BOOL _mirroringEnabled;
	int _orientation;

}

@property (assign,nonatomic) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) int orientation;                    //@synthesize orientation=_orientation - In the implementation block
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)mirroringEnabled;
-(id)description;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
@end

