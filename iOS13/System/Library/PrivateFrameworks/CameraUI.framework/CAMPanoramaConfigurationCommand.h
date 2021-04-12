/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaConfiguration;

@interface CAMPanoramaConfigurationCommand : CAMCaptureCommand {

	CAMPanoramaConfiguration* __configuration;

}

@property (nonatomic,readonly) CAMPanoramaConfiguration * _configuration;              //@synthesize _configuration=__configuration - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CAMPanoramaConfiguration *)_configuration;
-(void)executeWithContext:(id)arg1 ;
@end

