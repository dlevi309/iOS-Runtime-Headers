/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMLowLightModeCommand : CAMCaptureCommand {

	long long __lowLightMode;

}

@property (nonatomic,readonly) long long _lowLightMode;              //@synthesize _lowLightMode=__lowLightMode - In the implementation block
-(long long)_lowLightMode;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithLowLightMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

