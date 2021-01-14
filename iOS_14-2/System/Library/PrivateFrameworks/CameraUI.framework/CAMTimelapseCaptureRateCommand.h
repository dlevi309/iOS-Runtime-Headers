/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMTimelapseCaptureRateCommand : CAMCaptureCommand {

	float __captureRate;

}

@property (nonatomic,readonly) float _captureRate;              //@synthesize _captureRate=__captureRate - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaultTimelapseCaptureRate;
-(id)initWithTimelapseCaptureRate:(float)arg1 ;
-(float)_captureRate;
@end

