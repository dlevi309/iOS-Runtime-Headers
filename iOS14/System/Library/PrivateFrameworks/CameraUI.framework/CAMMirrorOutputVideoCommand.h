/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMMirrorOutputVideoCommand : CAMCaptureCommand {

	BOOL _outputMirrored;

}

@property (getter=isOutputMirrored,nonatomic,readonly) BOOL outputMirrored;              //@synthesize outputMirrored=_outputMirrored - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)_setVideoMirrored:(BOOL)arg1 forOutput:(id)arg2 requirePhysicalFlip:(BOOL)arg3 ;
-(id)initWithOutputMirrored:(BOOL)arg1 ;
-(BOOL)isOutputMirrored;
-(id)_debugStringForMirroringMethod:(long long)arg1 ;
-(id)_debugStringForSupportedMirroringMethods:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

