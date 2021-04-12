/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPhotoQualityPrioritizationConfigurationCommand : CAMCaptureCommand {

	long long __photoQualityPrioritization;

}

@property (nonatomic,readonly) long long _photoQualityPrioritization;              //@synthesize _photoQualityPrioritization=__photoQualityPrioritization - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_photoQualityPrioritization;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(id)initWithPhotoQualityPrioritization:(long long)arg1 ;
@end

