/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMStillImageCaptureRequest;

@interface CAMStillImageCaptureCommand : CAMCaptureCommand {

	CAMStillImageCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMStillImageCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_sanitizeCapturePhotoSettings:(id)arg1 withContext:(id)arg2 ;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CAMStillImageCaptureRequest *)_request;
@end

