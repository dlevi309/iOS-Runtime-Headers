/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMTorchCommand : CAMCaptureCommand {

	float __level;
	long long __torchMode;

}

@property (nonatomic,readonly) long long _torchMode;              //@synthesize _torchMode=__torchMode - In the implementation block
@property (nonatomic,readonly) float _level;                      //@synthesize _level=__level - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTorchMode:(long long)arg1 ;
-(float)_level;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTorchLevel:(float)arg1 ;
-(long long)_torchMode;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

