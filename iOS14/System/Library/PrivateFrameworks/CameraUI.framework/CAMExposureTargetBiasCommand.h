/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureTargetBiasCommand : CAMCaptureCommand {

	float __exposureTargetBias;

}

@property (nonatomic,readonly) float _exposureTargetBias;              //@synthesize _exposureTargetBias=__exposureTargetBias - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)_exposureTargetBias;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExposureTargetBias:(float)arg1 ;
@end

