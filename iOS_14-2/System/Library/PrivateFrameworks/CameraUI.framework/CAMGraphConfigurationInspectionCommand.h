/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executeWithContext:(id)arg1 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setResolvedGraphConfiguration:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_knownGraphConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(long long)_resolvedVideoConfigurationFromContext:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_resolvedGraphConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKnownGraphConfiguration:(id)arg1 ;
@end

