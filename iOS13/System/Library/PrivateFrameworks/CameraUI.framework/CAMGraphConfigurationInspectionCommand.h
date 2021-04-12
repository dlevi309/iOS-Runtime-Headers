/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand {

	CAMCaptureGraphConfiguration* __knownGraphConfiguration;
	CAMCaptureGraphConfiguration* __resolvedGraphConfiguration;

}

@property (nonatomic,readonly) CAMCaptureGraphConfiguration * _knownGraphConfiguration;                                                      //@synthesize _knownGraphConfiguration=__knownGraphConfiguration - In the implementation block
@property (setter=_setResolvedGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _resolvedGraphConfiguration;              //@synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_resolvedGraphConfiguration;
-(void)_setResolvedGraphConfiguration:(id)arg1 ;
-(id)initWithKnownGraphConfiguration:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_knownGraphConfiguration;
-(long long)_resolvedVideoConfigurationFromContext:(id)arg1 ;
@end

