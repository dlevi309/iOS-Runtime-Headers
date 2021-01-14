/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSetVideoOrientationCommand : CAMCaptureCommand {

	long long __captureOrientation;

}

@property (nonatomic,readonly) long long _captureOrientation;              //@synthesize _captureOrientation=__captureOrientation - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_captureOrientation;
-(id)initWithCaptureOrientation:(long long)arg1 ;
@end

