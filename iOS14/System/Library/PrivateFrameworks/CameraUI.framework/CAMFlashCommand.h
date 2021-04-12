/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executeWithContext:(id)arg1 ;
-(id)initWithFlashMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_flashMode;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

