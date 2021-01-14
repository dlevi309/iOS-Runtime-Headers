/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStereoAudioCaptureCommand : CAMCaptureCommand {

	BOOL _stereoAudioCaptureEnabled;

}

@property (getter=isStereoAudioCaptureEnabled,nonatomic,readonly) BOOL stereoAudioCaptureEnabled;              //@synthesize stereoAudioCaptureEnabled=_stereoAudioCaptureEnabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)initWithStereoAudioCaptureEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isStereoAudioCaptureEnabled;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

