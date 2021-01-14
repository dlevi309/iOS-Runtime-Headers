/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMImageControlModeCommand : CAMCaptureCommand {

	BOOL __capturing;
	long long __captureMode;

}

@property (nonatomic,readonly) long long _captureMode;              //@synthesize _captureMode=__captureMode - In the implementation block
@property (nonatomic,readonly) BOOL _capturing;                     //@synthesize _capturing=__capturing - In the implementation block
-(BOOL)_capturing;
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCaptureMode:(long long)arg1 capturing:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_captureMode;
@end

