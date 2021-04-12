/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordingCameraSelectionBehaviorCommand : CAMCaptureCommand {

	BOOL __cameraSwitchingEnabled;

}

@property (getter=_isCameraSwitchingEnabled,nonatomic,readonly) BOOL _cameraSwitchingEnabled;              //@synthesize _cameraSwitchingEnabled=__cameraSwitchingEnabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isCameraSwitchingEnabled;
-(id)initWithCameraSwitchingEnabled:(BOOL)arg1 ;
@end

