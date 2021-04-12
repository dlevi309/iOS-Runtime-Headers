/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSArray, CAMVideoThumbnailOutputConfiguration;

@interface CAMCaptureGraphConfiguration : NSObject {

	BOOL _videoHDRSuspended;
	BOOL _enableAutoLowLightVideoIfSupported;
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
@property (getter=isVideoHDRSuspended,nonatomic,readonly) BOOL videoHDRSuspended;                                     //@synthesize videoHDRSuspended=_videoHDRSuspended - In the implementation block
@property (nonatomic,readonly) BOOL enableAutoLowLightVideoIfSupported;                                               //@synthesize enableAutoLowLightVideoIfSupported=_enableAutoLowLightVideoIfSupported - In the implementation block
@property (nonatomic,readonly) long long aspectRatioCrop;                                                             //@synthesize aspectRatioCrop=_aspectRatioCrop - In the implementation block
@property (nonatomic,readonly) long long photoQualityPrioritization;                                                  //@synthesize photoQualityPrioritization=_photoQualityPrioritization - In the implementation block
-(id)description;
-(long long)mode;
-(long long)device;
-(id)shortDescription;
-(long long)photoQualityPrioritization;
-(BOOL)isVideoHDRSuspended;
-(long long)devicePosition;
-(long long)audioConfiguration;
-(long long)videoConfiguration;
-(long long)photoEncodingBehavior;
-(long long)videoEncodingBehavior;
-(long long)aspectRatioCrop;
-(id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 previewConfiguration:(unsigned long long)arg5 previewSampleBufferVideoFormat:(long long)arg6 previewFilters:(id)arg7 videoThumbnailOutputConfiguration:(id)arg8 photoEncodingBehavior:(long long)arg9 videoEncodingBehavior:(long long)arg10 enableAutoLowLightVideoIfSupported:(BOOL)arg11 videoHDRSuspended:(BOOL)arg12 aspectRatioCrop:(long long)arg13 photoQualityPrioritization:(long long)arg14 ;
-(unsigned long long)previewConfiguration;
-(long long)previewSampleBufferVideoFormat;
-(NSArray *)previewFilters;
-(CAMVideoThumbnailOutputConfiguration *)videoThumbnailOutputConfiguration;
-(BOOL)enableAutoLowLightVideoIfSupported;
-(id)completeDescription;
@end

