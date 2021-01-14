/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSArray, CAMVideoThumbnailOutputConfiguration;

@interface CAMCaptureGraphConfiguration : NSObject {

	BOOL _enableAutoFPSVideo;
	BOOL _videoHDRSuspended;
	BOOL _enableHDR10BitVideoIfSupported;
	BOOL _captureMirrored;
	BOOL _enableContentAwareDistortionCorrection;
	BOOL _enableResponsiveShutter;
	long long _mode;
	long long _device;
	long long _videoConfiguration;
	long long _audioConfiguration;
	unsigned long long _previewConfiguration;
	long long _previewSampleBufferVideoFormat;
	NSArray* _previewFilters;
	CAMVideoThumbnailOutputConfiguration* _videoThumbnailOutputConfiguration;
	long long _photoEncodingBehavior;
	long long _videoEncodingBehavior;
	long long _aspectRatioCrop;
	long long _photoQualityPrioritization;

}

@property (nonatomic,readonly) long long mode;                                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) long long devicePosition; 
@property (nonatomic,readonly) long long device;                                                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long videoConfiguration;                                                          //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,readonly) long long audioConfiguration;                                                          //@synthesize audioConfiguration=_audioConfiguration - In the implementation block
@property (nonatomic,readonly) unsigned long long previewConfiguration;                                               //@synthesize previewConfiguration=_previewConfiguration - In the implementation block
@property (nonatomic,readonly) long long previewSampleBufferVideoFormat;                                              //@synthesize previewSampleBufferVideoFormat=_previewSampleBufferVideoFormat - In the implementation block
@property (nonatomic,readonly) NSArray * previewFilters;                                                              //@synthesize previewFilters=_previewFilters - In the implementation block
@property (nonatomic,readonly) CAMVideoThumbnailOutputConfiguration * videoThumbnailOutputConfiguration;              //@synthesize videoThumbnailOutputConfiguration=_videoThumbnailOutputConfiguration - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior;                                                       //@synthesize photoEncodingBehavior=_photoEncodingBehavior - In the implementation block
@property (nonatomic,readonly) long long videoEncodingBehavior;                                                       //@synthesize videoEncodingBehavior=_videoEncodingBehavior - In the implementation block
@property (nonatomic,readonly) BOOL enableAutoFPSVideo;                                                               //@synthesize enableAutoFPSVideo=_enableAutoFPSVideo - In the implementation block
@property (getter=isVideoHDRSuspended,nonatomic,readonly) BOOL videoHDRSuspended;                                     //@synthesize videoHDRSuspended=_videoHDRSuspended - In the implementation block
@property (nonatomic,readonly) long long aspectRatioCrop;                                                             //@synthesize aspectRatioCrop=_aspectRatioCrop - In the implementation block
@property (nonatomic,readonly) long long photoQualityPrioritization;                                                  //@synthesize photoQualityPrioritization=_photoQualityPrioritization - In the implementation block
@property (nonatomic,readonly) BOOL enableHDR10BitVideoIfSupported;                                                   //@synthesize enableHDR10BitVideoIfSupported=_enableHDR10BitVideoIfSupported - In the implementation block
@property (getter=isCaptureMirrored,nonatomic,readonly) BOOL captureMirrored;                                         //@synthesize captureMirrored=_captureMirrored - In the implementation block
@property (nonatomic,readonly) BOOL enableContentAwareDistortionCorrection;                                           //@synthesize enableContentAwareDistortionCorrection=_enableContentAwareDistortionCorrection - In the implementation block
@property (nonatomic,readonly) BOOL enableResponsiveShutter;                                                          //@synthesize enableResponsiveShutter=_enableResponsiveShutter - In the implementation block
-(long long)mode;
-(long long)previewSampleBufferVideoFormat;
-(id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 previewConfiguration:(unsigned long long)arg5 previewSampleBufferVideoFormat:(long long)arg6 previewFilters:(id)arg7 videoThumbnailOutputConfiguration:(id)arg8 photoEncodingBehavior:(long long)arg9 videoEncodingBehavior:(long long)arg10 enableAutoFPSVideo:(BOOL)arg11 videoHDRSuspended:(BOOL)arg12 aspectRatioCrop:(long long)arg13 photoQualityPrioritization:(long long)arg14 enableHDR10BitVideoIfSupported:(BOOL)arg15 captureMirrored:(BOOL)arg16 enableContentAwareDistortionCorrection:(BOOL)arg17 enableResponsiveShutter:(BOOL)arg18 ;
-(BOOL)enableAutoFPSVideo;
-(long long)devicePosition;
-(id)shortDescription;
-(long long)audioConfiguration;
-(long long)videoEncodingBehavior;
-(id)completeDescription;
-(long long)videoConfiguration;
-(long long)device;
-(unsigned long long)previewConfiguration;
-(long long)photoQualityPrioritization;
-(id)description;
-(BOOL)enableContentAwareDistortionCorrection;
-(BOOL)isCaptureMirrored;
-(BOOL)enableResponsiveShutter;
-(NSArray *)previewFilters;
-(long long)aspectRatioCrop;
-(CAMVideoThumbnailOutputConfiguration *)videoThumbnailOutputConfiguration;
-(long long)photoEncodingBehavior;
-(BOOL)enableHDR10BitVideoIfSupported;
-(BOOL)isVideoHDRSuspended;
@end

