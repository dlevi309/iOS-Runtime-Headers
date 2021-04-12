/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMStillImageCaptureRequest;

@interface CAMStillImageCaptureCommand : CAMCaptureCommand {

	CAMStillImageCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMStillImageCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CAMStillImageCaptureRequest *)_request;
-(id)initWithRequest:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
-(void)_sanitizeCapturePhotoSettings:(id)arg1 withContext:(id)arg2 ;
@end

