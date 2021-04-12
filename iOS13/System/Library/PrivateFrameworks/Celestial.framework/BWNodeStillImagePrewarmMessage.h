/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWNodeMessage.h>

@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWPhotoManifest;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {

	FigCaptureStillImageSettings* _requestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _resolvedStillImageCaptureSettings;
	BWPhotoManifest* _photoManifest;

}

@property (readonly) FigCaptureStillImageSettings * requestedStillImageCaptureSettings; 
@property (readonly) BWStillImageCaptureSettings * resolvedStillImageCaptureSettings; 
@property (readonly) BWPhotoManifest * photoManifest; 
+(id)newMessageWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 ;
-(void)dealloc;
-(BWPhotoManifest *)photoManifest;
-(FigCaptureStillImageSettings *)requestedStillImageCaptureSettings;
-(BWStillImageCaptureSettings *)resolvedStillImageCaptureSettings;
-(id)_initWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 ;
@end

