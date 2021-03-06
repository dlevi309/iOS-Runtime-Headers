/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoHDRSuspensionCommand : CAMCaptureCommand {

	BOOL _videoHDRSuspended;

}

@property (getter=isVideoHDRSuspended,nonatomic,readonly) BOOL videoHDRSuspended;              //@synthesize videoHDRSuspended=_videoHDRSuspended - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isVideoHDRSuspended;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithVideoHDRSuspended:(BOOL)arg1 ;
@end

