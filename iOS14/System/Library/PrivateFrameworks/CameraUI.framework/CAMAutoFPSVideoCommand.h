/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMAutoFPSVideoCommand : CAMCaptureCommand {

	BOOL _autoFPSVideoEnabled;

}

@property (getter=isAutoFPSVideoEnabled,nonatomic,readonly) BOOL autoFPSVideoEnabled;              //@synthesize autoFPSVideoEnabled=_autoFPSVideoEnabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAutoFPSVideoEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAutoFPSVideoEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

