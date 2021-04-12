/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand {

	BOOL __blinkDetectionEnabled;
	BOOL __smileDetectionEnabled;

}

@property (getter=_isBlinkDetectionEnabled,nonatomic,readonly) BOOL _blinkDetectionEnabled;              //@synthesize _blinkDetectionEnabled=__blinkDetectionEnabled - In the implementation block
@property (getter=_isSmileDetectionEnabled,nonatomic,readonly) BOOL _smileDetectionEnabled;              //@synthesize _smileDetectionEnabled=__smileDetectionEnabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(BOOL)_isBlinkDetectionEnabled;
-(BOOL)_isSmileDetectionEnabled;
-(id)initWithBlinkDetection:(BOOL)arg1 smileDetection:(BOOL)arg2 ;
@end

