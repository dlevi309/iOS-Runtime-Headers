/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaCaptureRequest;

@interface CAMStartPanoramaCommand : CAMCaptureCommand {

	CAMPanoramaCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMPanoramaCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CAMPanoramaCaptureRequest *)_request;
-(id)initWithRequest:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end

