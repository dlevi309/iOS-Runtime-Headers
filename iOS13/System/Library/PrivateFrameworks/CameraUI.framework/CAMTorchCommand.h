/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)_level;
-(long long)_torchMode;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithTorchMode:(long long)arg1 ;
-(id)initWithTorchLevel:(float)arg1 ;
@end

