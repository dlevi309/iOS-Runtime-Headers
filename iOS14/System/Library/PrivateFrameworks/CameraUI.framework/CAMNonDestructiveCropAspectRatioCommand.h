/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMNonDestructiveCropAspectRatioCommand : CAMCaptureCommand {

	long long __aspectRatioCrop;

}

@property (nonatomic,readonly) long long _aspectRatioCrop;              //@synthesize _aspectRatioCrop=__aspectRatioCrop - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAspectRatioCrop:(long long)arg1 ;
-(long long)_aspectRatioCrop;
@end

