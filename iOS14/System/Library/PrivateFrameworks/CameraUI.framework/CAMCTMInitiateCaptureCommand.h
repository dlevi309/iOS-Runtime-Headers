/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMMomentCaptureSettings;

@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand {

	CAMMomentCaptureSettings* __settings;

}

@property (nonatomic,readonly) CAMMomentCaptureSettings * _settings;              //@synthesize _settings=__settings - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(CAMMomentCaptureSettings *)_settings;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

