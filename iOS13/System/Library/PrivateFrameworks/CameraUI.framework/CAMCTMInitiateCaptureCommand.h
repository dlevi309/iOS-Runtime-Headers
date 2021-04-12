/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMMomentCaptureSettings;

@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand {

	CAMMomentCaptureSettings* __settings;

}

@property (nonatomic,readonly) CAMMomentCaptureSettings * _settings;              //@synthesize _settings=__settings - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(CAMMomentCaptureSettings *)_settings;
-(void)executeWithContext:(id)arg1 ;
@end

