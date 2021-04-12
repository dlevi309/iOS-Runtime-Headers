/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand {

	BOOL __enabled;

}

@property (getter=_isEnabled,nonatomic,readonly) BOOL _enabled;              //@synthesize _enabled=__enabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isEnabled;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithEnabled:(BOOL)arg1 ;
-(id)_connectionForMovieFileOutput:(id)arg1 metadataPortType:(id)arg2 ;
-(void)_addMetadataConnectionForPortType:(id)arg1 videoDeviceInput:(id)arg2 movieFileOutput:(id)arg3 captureSession:(id)arg4 ;
@end

