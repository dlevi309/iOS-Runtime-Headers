/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class BWPhotoManifest;

@interface BWStillImageProcessingSettings : NSObject {

	BWPhotoManifest* _photoManifest;
	BOOL _processIntelligentDistortionCorrection;

}

@property (nonatomic,readonly) BWPhotoManifest * photoManifest;                          //@synthesize photoManifest=_photoManifest - In the implementation block
@property (nonatomic,readonly) BOOL processIntelligentDistortionCorrection;              //@synthesize processIntelligentDistortionCorrection=_processIntelligentDistortionCorrection - In the implementation block
-(id)initWithPhotoManifest:(id)arg1 processIntelligentDistortionCorrection:(BOOL)arg2 ;
-(BOOL)processIntelligentDistortionCorrection;
-(BWPhotoManifest *)photoManifest;
-(void)dealloc;
@end

