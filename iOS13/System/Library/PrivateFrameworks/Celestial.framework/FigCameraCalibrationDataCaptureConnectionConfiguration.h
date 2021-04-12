/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	BOOL _mirroringEnabled;
	int _orientation;

}

@property (assign,nonatomic) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign,nonatomic) int orientation;                    //@synthesize orientation=_orientation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)mirroringEnabled;
@end

