/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureTargetBiasCommand : CAMCaptureCommand {

	float __exposureTargetBias;

}

@property (nonatomic,readonly) float _exposureTargetBias;              //@synthesize _exposureTargetBias=__exposureTargetBias - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)_exposureTargetBias;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithExposureTargetBias:(float)arg1 ;
@end

