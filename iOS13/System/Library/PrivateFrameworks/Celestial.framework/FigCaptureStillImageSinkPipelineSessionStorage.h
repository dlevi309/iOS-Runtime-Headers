/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol FigCaptureStillImageSinkPipeline;
#import <Celestial/Celestial-Structs.h>
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
	opaqueCMFormatDescriptionRef _sushiRawFormatDescription;
	NSArray* _sushiRawDNGColorCalibrations;
	FigCaptureSessionPreparedBracket* _preparedBracket;
	unsigned long long _currentUserInitiatedRequestHostTime;
	SCD_Struct_BW2 _currentUserInitiatedRequestPTS;
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
@property (nonatomic,readonly) const opaqueCMFormatDescription* sushiRawFormatDescriptionPtr; 
@property (nonatomic,readonly) FigCaptureSessionPreparedBracket * preparedBracket; 
@property (nonatomic,retain) NSArray * sushiRawDNGColorCalibrations;                                                          //@synthesize sushiRawDNGColorCalibrations=_sushiRawDNGColorCalibrations - In the implementation block
@property (assign,nonatomic) unsigned long long currentUserInitiatedRequestHostTime;                                          //@synthesize currentUserInitiatedRequestHostTime=_currentUserInitiatedRequestHostTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 currentUserInitiatedRequestPTS;                                                   //@synthesize currentUserInitiatedRequestPTS=_currentUserInitiatedRequestPTS - In the implementation block
@property (assign,nonatomic) long long mostRecentBurstSettingsID;                                                             //@synthesize mostRecentBurstSettingsID=_mostRecentBurstSettingsID - In the implementation block
@property (assign,nonatomic) BOOL videoStabilizationOverscanCropEnabled;                                                      //@synthesize videoStabilizationOverscanCropEnabled=_videoStabilizationOverscanCropEnabled - In the implementation block
-(void)dealloc;
-(FigCaptureSessionPreparedBracket *)preparedBracket;
-(NSDictionary *)colorInfo;
-(void)setVideoStabilizationOverscanCropMultiplier:(float)arg1 ;
-(float)videoStabilizationOverscanCropMultiplier;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigCaptureSinkPipeline*<FigCaptureStillImageSinkPipeline>)stillImageSinkPipeline;
-(FigCaptureCameraSourcePipeline *)cameraSourcePipeline;
-(void)setVideoStabilizationOverscanCropEnabled:(BOOL)arg1 ;
-(FigCapturePixelConverter *)pixelConverter;
-(BWImageQueueSinkNode *)previewSinkNode;
-(id)initWithStillImageSinkPipeline:(id)arg1 cameraSourcePipeline:(id)arg2 previewSinkNode:(id)arg3 pixelConverter:(id)arg4 colorInfo:(id)arg5 stillImagesAreOptimizedForOfflineVideoStabilization:(BOOL)arg6 videoStabilizationOverscanCropMultiplier:(float)arg7 preparedBracket:(id)arg8 stillImageConnectionConfiguration:(id)arg9 ;
-(BOOL)stillImagesAreOptimizedForOfflineVideoStabilization;
-(const opaqueCMFormatDescription*)stillImageFormatDescriptionPtr;
-(NSArray *)sushiRawDNGColorCalibrations;
-(void)setSushiRawDNGColorCalibrations:(NSArray *)arg1 ;
-(const opaqueCMFormatDescription*)sushiRawFormatDescriptionPtr;
-(const opaqueCMFormatDescription*)previewFormatDescriptionPtr;
-(long long)mostRecentBurstSettingsID;
-(void)setCurrentUserInitiatedRequestHostTime:(unsigned long long)arg1 ;
-(void)setCurrentUserInitiatedRequestPTS:(SCD_Struct_BW2)arg1 ;
-(BOOL)videoStabilizationOverscanCropEnabled;
-(unsigned long long)currentUserInitiatedRequestHostTime;
-(SCD_Struct_BW2)currentUserInitiatedRequestPTS;
-(void)setMostRecentBurstSettingsID:(long long)arg1 ;
@end

