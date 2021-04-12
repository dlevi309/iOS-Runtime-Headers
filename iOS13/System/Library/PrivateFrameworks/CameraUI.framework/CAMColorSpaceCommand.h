/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMColorSpaceCommand : CAMCaptureCommand {

	long long __colorSpace;

}

@property (nonatomic,readonly) long long _colorSpace;              //@synthesize _colorSpace=__colorSpace - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_colorSpace;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithColorSpace:(long long)arg1 ;
@end

