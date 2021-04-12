/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPrepareStillImageCaptureCommand : CAMCaptureCommand {

	unsigned long long __systemTimeOfCapture;

}

@property (nonatomic,readonly) unsigned long long _systemTimeOfCapture;              //@synthesize _systemTimeOfCapture=__systemTimeOfCapture - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSystemTime:(unsigned long long)arg1 ;
-(unsigned long long)_systemTimeOfCapture;
@end

