/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFaceDrivenImageProcessingCommand : CAMCaptureCommand {

	BOOL _faceDrivenImageProcessingEnabled;

}

@property (getter=isFaceDrivenImageProcessingEnabled,nonatomic,readonly) BOOL faceDrivenImageProcessingEnabled;              //@synthesize faceDrivenImageProcessingEnabled=_faceDrivenImageProcessingEnabled - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFaceDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFaceDrivenImageProcessingEnabled;
@end

