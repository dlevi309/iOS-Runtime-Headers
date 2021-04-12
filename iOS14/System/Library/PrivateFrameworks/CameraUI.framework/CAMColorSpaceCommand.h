/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMColorSpaceCommand : CAMCaptureCommand {

	long long __colorSpace;

}

@property (nonatomic,readonly) long long _colorSpace;              //@synthesize _colorSpace=__colorSpace - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)_colorSpace;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithColorSpace:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

