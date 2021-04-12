/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration;

@interface CAMPreparePhotoSettingsCommand : CAMCaptureCommand {

	CAMCaptureGraphConfiguration* __desiredGraphConfiguration;

}

@property (nonatomic,readonly) CAMCaptureGraphConfiguration * _desiredGraphConfiguration;              //@synthesize _desiredGraphConfiguration=__desiredGraphConfiguration - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_desiredGraphConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGraphConfiguration:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

