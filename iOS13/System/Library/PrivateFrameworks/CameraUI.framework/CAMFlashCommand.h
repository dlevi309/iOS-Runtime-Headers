/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CAMFlashCommand : CAMCaptureCommand <NSCopying, NSCoding> {

	long long __flashMode;

}

@property (nonatomic,readonly) long long _flashMode;              //@synthesize _flashMode=__flashMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_flashMode;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithFlashMode:(long long)arg1 ;
@end

