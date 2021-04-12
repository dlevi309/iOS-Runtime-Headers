/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand {

	BOOL __recordingPaused;

}

@property (getter=_isRecordingPaused,nonatomic,readonly) BOOL _recordingPaused;              //@synthesize _recordingPaused=__recordingPaused - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecordingPaused:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isRecordingPaused;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

