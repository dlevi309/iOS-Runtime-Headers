/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFaceDrivenImageProcessingCommand : CAMCaptureCommand {

	BOOL _faceDrivenImageProcessingEnabled;

}

@property (getter=isFaceDrivenImageProcessingEnabled,nonatomic,readonly) BOOL faceDrivenImageProcessingEnabled;              //@synthesize faceDrivenImageProcessingEnabled=_faceDrivenImageProcessingEnabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(BOOL)isFaceDrivenImageProcessingEnabled;
-(id)initWithFaceDrivenImageProcessingEnabled:(BOOL)arg1 ;
@end

