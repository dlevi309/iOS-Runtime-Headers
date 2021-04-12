/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol FigCaptureStillImageSinkPipeline;
#import <CMCapture/CMCapture-Structs.h>
@class FigCaptureSinkPipeline, FigCaptureCameraSourcePipeline, BWImageQueueSinkNode, FigCapturePixelConverter, NSDictionary, FigVideoCaptureConnectionConfiguration, NSArray, FigCaptureSessionPreparedBracket;

@interface FigCaptureStillImageSinkPipelineSessionStorage : NSObject {

	FigCaptureSinkPipeline*<FigCaptureStillImageSinkPipeline> _stillImageSinkPipeline;
	FigCaptureCameraSourcePipeline* _cameraSourcePipeline;
	BWImageQueueSinkNode* _previewSinkNode;
	FigCapturePixelConverter* _pixelConverter;
	NSDictionary* _colorInfo;
	BOOL _stillImagesAreOptimizedForOfflineVideoStabilization;
	float _videoStabilizationOverscanCropMultiplier;
	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	opaqueCMFormatDescriptionRef _stillImageFormatDescription;
	opaqueCMFormatDescriptionRef _previewFormatDescription;
	opaqueCMFormatDescriptionRef _rawFormatDescription;
	NSArray* _rawDNGColorCalibrations;
	FigCaptureSessionPreparedBracket* _preparedBracket;
	unsigned long long _currentUserInitiatedRequestHostTime;
	SCD_Struct_BW8 _currentUserInitiatedRequestPTS;
	long long _mostRecentBurstSettingsID;
	BOOL _videoStabilizationOverscanCropEnabled;

}

@property (nonatomic,readonly) FigCaptureSinkPipeline*<FigCaptureStillImageSinkPipeline> stillImageSinkPipeline;              //@synthesize stillImageSinkPipeline=_stillImageSinkPipeline - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                    //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigCaptureCameraSourcePipeline * cameraSourcePipeline;                                         //@synthesize cameraSourcePipeline=_cameraSourcePipeline - In the implementation block
@property (nonatomic,readonly) BWImageQueueSinkNode * previewSinkNode;                                                        //@synthesize previewSinkNode=_previewSinkNode - In the implementation block
@property (nonatomic,readonly) FigCapturePixelConverter * pixelConverter;                                                     //@synthesize pixelConverter=_pixelConverter - In the implementation block
@property (nonatomic,readonly) NSDictionary * colorInfo;                                                                      //@synthesize colorInfo=_colorInfo - In the implementation block
@property (nonatomic,readonly) BOOL stillImagesAreOptimizedForOfflineVideoStabilization;                                      //@synthesize stillImagesAreOptimizedForOfflineVideoStabilization=_stillImagesAreOptimizedForOfflineVideoStabilization - In the implementation block
@property (assign,nonatomic) float videoStabilizationOverscanCropMultiplier;                                                  //@synthesize videoStabilizationOverscanCropMultiplier=_videoStabilizationOverscanCropMultiplier - In the implementation block
@property (nonatomic,readonly) const opaqueCMFormatDescription* stillImageFormatDescriptionPtr; 
@property (nonatomic,readonly) const opaqueCMFormatDescription* previewFormatDescriptionPtr; 
@property (nonatomic,readonly) const opaqueCMFormatDescription* rawFormatDescriptionPtr; 
@property (nonatomic,readonly) FigCaptureSessionPreparedBracket * preparedBracket; 
@property (nonatomic,retain) NSArray * rawDNGColorCalibrations;                                                               //@synthesize rawDNGColorCalibrations=_rawDNGColorCalibrations - In the implementation block
@property (assign,nonatomic) unsigned long long currentUserInitiatedRequestHostTime;                                          //@synthesize currentUserInitiatedRequestHostTime=_currentUserInitiatedRequestHostTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 currentUserInitiatedRequestPTS;                                                   //@synthesize currentUserInitiatedRequestPTS=_currentUserInitiatedRequestPTS - In the implementation block
@property (assign,nonatomic) long long mostRecentBurstSettingsID;                                                             //@synthesize mostRecentBurstSettingsID=_mostRecentBurstSettingsID - In the implementation block
@property (assign,nonatomic) BOOL videoStabilizationOverscanCropEnabled;                                                      //@synthesize videoStabilizationOverscanCropEnabled=_videoStabilizationOverscanCropEnabled - In the implementation block
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigCapturePixelConverter *)pixelConverter;
-(const opaqueCMFormatDescription*)previewFormatDescriptionPtr;
-(FigCaptureSessionPreparedBracket *)preparedBracket;
-(void)setCurrentUserInitiatedRequestHostTime:(unsigned long long)arg1 ;
-(void)setVideoStabilizationOverscanCropEnabled:(BOOL)arg1 ;
-(NSArray *)rawDNGColorCalibrations;
-(BOOL)videoStabilizationOverscanCropEnabled;
-(id)initWithStillImageSinkPipeline:(id)arg1 cameraSourcePipeline:(id)arg2 previewSinkNode:(id)arg3 pixelConverter:(id)arg4 colorInfo:(id)arg5 stillImagesAreOptimizedForOfflineVideoStabilization:(BOOL)arg6 videoStabilizationOverscanCropMultiplier:(float)arg7 preparedBracket:(id)arg8 stillImageConnectionConfiguration:(id)arg9 ;
-(BOOL)stillImagesAreOptimizedForOfflineVideoStabilization;
-(void)setVideoStabilizationOverscanCropMultiplier:(float)arg1 ;
-(const opaqueCMFormatDescription*)stillImageFormatDescriptionPtr;
-(float)videoStabilizationOverscanCropMultiplier;
-(void)setCurrentUserInitiatedRequestPTS:(SCD_Struct_BW8)arg1 ;
-(BWImageQueueSinkNode *)previewSinkNode;
-(unsigned long long)currentUserInitiatedRequestHostTime;
-(void)setRawDNGColorCalibrations:(NSArray *)arg1 ;
-(FigCaptureSinkPipeline*<FigCaptureStillImageSinkPipeline>)stillImageSinkPipeline;
-(NSDictionary *)colorInfo;
-(SCD_Struct_BW8)currentUserInitiatedRequestPTS;
-(long long)mostRecentBurstSettingsID;
-(const opaqueCMFormatDescription*)rawFormatDescriptionPtr;
-(void)setMostRecentBurstSettingsID:(long long)arg1 ;
-(FigCaptureCameraSourcePipeline *)cameraSourcePipeline;
-(void)dealloc;
@end

