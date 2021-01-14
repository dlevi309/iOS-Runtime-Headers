/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand {

	BOOL __enabled;

}

@property (getter=_isEnabled,nonatomic,readonly) BOOL _enabled;              //@synthesize _enabled=__enabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_addMetadataConnectionForPortType:(id)arg1 videoDeviceInput:(id)arg2 movieFileOutput:(id)arg3 captureSession:(id)arg4 ;
-(id)_connectionForMovieFileOutput:(id)arg1 metadataPortType:(id)arg2 ;
-(BOOL)_isEnabled;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

