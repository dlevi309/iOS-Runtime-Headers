/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class FigCaptureMicSourcePipeline, NSMutableArray, NSArray;

@interface FigCaptureSessionPipelines : NSObject {

	FigCaptureMicSourcePipeline* _micSourcePipeline;
	NSMutableArray* _cameraSourcePipelines;
	NSMutableArray* _metadataSourcePipelines;
	NSMutableArray* _previewSinkPipelines;
	NSMutableArray* _videoDataSinkPipelines;
	NSMutableArray* _movieFileSinkPipelines;
	NSMutableArray* _depthDataSinkPipelines;
	NSMutableArray* _videoThumbnailSinkPipelines;
	NSMutableArray* _metadataSinkPipelines;
	NSMutableArray* _visionDataSinkPipelines;
	NSMutableArray* _audioDataSinkPipelines;
	NSMutableArray* _audioFileSinkPipelines;
	NSMutableArray* _stillImageSinkPipelineStorages;
	NSMutableArray* _pointCloudDataSinkPipelines;
	NSMutableArray* _cameraCalibrationDataSinkPipelines;

}

@property (nonatomic,retain) FigCaptureMicSourcePipeline * micSourcePipeline;                //@synthesize micSourcePipeline=_micSourcePipeline - In the implementation block
@property (nonatomic,readonly) NSArray * cameraSourcePipelines;                              //@synthesize cameraSourcePipelines=_cameraSourcePipelines - In the implementation block
@property (nonatomic,readonly) NSArray * metadataSourcePipelines;                            //@synthesize metadataSourcePipelines=_metadataSourcePipelines - In the implementation block
@property (nonatomic,readonly) NSArray * previewSinkPipelines;                               //@synthesize previewSinkPipelines=_previewSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * videoDataSinkPipelines;                             //@synthesize videoDataSinkPipelines=_videoDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * movieFileSinkPipelines;                             //@synthesize movieFileSinkPipelines=_movieFileSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * stillImageSinkPipelineSessionStorages;              //@synthesize stillImageSinkPipelineStorages=_stillImageSinkPipelineStorages - In the implementation block
@property (nonatomic,readonly) NSArray * depthDataSinkPipelines;                             //@synthesize depthDataSinkPipelines=_depthDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * videoThumbnailSinkPipelines;                        //@synthesize videoThumbnailSinkPipelines=_videoThumbnailSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * metadataSinkPipelines;                              //@synthesize metadataSinkPipelines=_metadataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * visionDataSinkPipelines;                            //@synthesize visionDataSinkPipelines=_visionDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * audioDataSinkPipelines;                             //@synthesize audioDataSinkPipelines=_audioDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * audioFileSinkPipelines;                             //@synthesize audioFileSinkPipelines=_audioFileSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * pointCloudDataSinkPipelines;                        //@synthesize pointCloudDataSinkPipelines=_pointCloudDataSinkPipelines - In the implementation block
@property (nonatomic,readonly) NSArray * cameraCalibrationDataSinkPipelines;                 //@synthesize cameraCalibrationDataSinkPipelines=_cameraCalibrationDataSinkPipelines - In the implementation block
-(void)dealloc;
-(id)movieFileSinkPipelineWithFileSinkNode:(id)arg1 ;
-(id)audioFileSinkPipelineWithFileSinkNode:(id)arg1 ;
-(id)stillImageSinkPipelineSessionStorageWithStillImageCoordinator:(id)arg1 ;
-(id)movieFileSinkPipelineWithSinkID:(id)arg1 ;
-(id)previewSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(id)movieFileSinkPipelineWithIrisStagingNode:(id)arg1 ;
-(id)stillImageSinkPipelineSessionStorageWithSinkID:(id)arg1 ;
-(NSArray *)cameraSourcePipelines;
-(FigCaptureMicSourcePipeline *)micSourcePipeline;
-(NSArray *)videoDataSinkPipelines;
-(NSArray *)previewSinkPipelines;
-(NSArray *)videoThumbnailSinkPipelines;
-(NSArray *)movieFileSinkPipelines;
-(id)previewSinkPipelineWithSinkID:(id)arg1 ;
-(id)audioFileSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)stillImageSinkPipelineSessionStorages;
-(id)movieFileSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(NSArray *)audioFileSinkPipelines;
-(id)cameraSourcePipelineWithSourceID:(id)arg1 ;
-(id)metadataSinkPipelineWithSinkID:(id)arg1 ;
-(id)videoDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)depthDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)audioDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)videoThumbnailSinkPipelineWithSinkID:(id)arg1 ;
-(id)visionDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)pointCloudDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)cameraCalibrationDataSinkPipelineWithSinkID:(id)arg1 ;
-(void)addCameraSourcePipeline:(id)arg1 ;
-(void)addMetadataSourcePipeline:(id)arg1 ;
-(void)addPreviewSinkPipeline:(id)arg1 ;
-(void)addVideoThumbnailSinkPipeline:(id)arg1 ;
-(void)addStillImageSinkPipelineSessionStorage:(id)arg1 ;
-(void)addVideoDataSinkPipeline:(id)arg1 ;
-(void)addVisionDataSinkPipeline:(id)arg1 ;
-(id)videoDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(void)addDepthDataSinkPipeline:(id)arg1 ;
-(id)depthDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(void)addMetadataSinkPipeline:(id)arg1 ;
-(id)metadataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(NSArray *)metadataSourcePipelines;
-(void)addMovieFileSinkPipeline:(id)arg1 ;
-(void)addAudioFileSinkPipeline:(id)arg1 ;
-(void)addAudioDataSinkPipeline:(id)arg1 ;
-(void)addPointCloudDataSinkPipeline:(id)arg1 ;
-(void)addCameraCalibrationDataSinkPipeline:(id)arg1 ;
-(void)setMicSourcePipeline:(FigCaptureMicSourcePipeline *)arg1 ;
-(NSArray *)metadataSinkPipelines;
-(NSArray *)audioDataSinkPipelines;
-(NSArray *)depthDataSinkPipelines;
-(NSArray *)visionDataSinkPipelines;
-(NSArray *)pointCloudDataSinkPipelines;
-(NSArray *)cameraCalibrationDataSinkPipelines;
-(id)movieFileSinkPipelineWithVideoConnectionID:(id)arg1 ;
@end

