/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPhotoQualityPrioritizationConfigurationCommand : CAMCaptureCommand {

	long long __photoQualityPrioritization;

}

@property (nonatomic,readonly) long long _photoQualityPrioritization;              //@synthesize _photoQualityPrioritization=__photoQualityPrioritization - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(long long)_photoQualityPrioritization;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPhotoQualityPrioritization:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

