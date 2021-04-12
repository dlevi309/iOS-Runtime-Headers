/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaConfiguration;

@interface CAMPanoramaConfigurationCommand : CAMCaptureCommand {

	CAMPanoramaConfiguration* __configuration;

}

@property (nonatomic,readonly) CAMPanoramaConfiguration * _configuration;              //@synthesize _configuration=__configuration - In the implementation block
-(CAMPanoramaConfiguration *)_configuration;
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

