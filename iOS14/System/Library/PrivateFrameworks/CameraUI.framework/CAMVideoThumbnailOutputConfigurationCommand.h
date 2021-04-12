/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMVideoThumbnailOutputConfiguration;

@interface CAMVideoThumbnailOutputConfigurationCommand : CAMCaptureCommand {

	CAMVideoThumbnailOutputConfiguration* _configuration;

}

@property (nonatomic,readonly) CAMVideoThumbnailOutputConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CAMVideoThumbnailOutputConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

