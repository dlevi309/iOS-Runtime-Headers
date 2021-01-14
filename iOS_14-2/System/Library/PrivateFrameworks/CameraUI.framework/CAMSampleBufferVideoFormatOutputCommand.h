/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSampleBufferVideoFormatOutputCommand : CAMCaptureCommand {

	long long __videoFormat;

}

@property (nonatomic,readonly) long long _videoFormat;              //@synthesize _videoFormat=__videoFormat - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSampleBufferVideoFormat:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_videoFormat;
@end

