/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(NSArray *)videoThumbnailSinkPipelines;
-(id)visionDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)movieFileSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)videoDataSinkPipelines;
-(id)movieFileSinkPipelineWithFileCoordinatorNode:(id)arg1 ;
-(void)addAudioFileSinkPipeline:(id)arg1 ;
-(id)videoDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(id)stillImageSinkPipelineSessionStorageWithStillImageCoordinator:(id)arg1 ;
-(void)addPreviewSinkPipeline:(id)arg1 ;
-(id)previewSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(NSArray *)metadataSourcePipelines;
-(id)cameraSourcePipelineWithSourceID:(id)arg1 ;
-(id)videoDataSinkPipelineWithSinkID:(id)arg1 ;
-(void)addVisionDataSinkPipeline:(id)arg1 ;
-(id)videoThumbnailSinkPipelineWithSinkID:(id)arg1 ;
-(id)audioFileSinkPipelineWithFileSinkNode:(id)arg1 ;
-(id)audioFileSinkPipelineWithSinkID:(id)arg1 ;
-(NSArray *)audioDataSinkPipelines;
-(id)depthDataSinkPipelineWithSinkID:(id)arg1 ;
-(void)addCameraCalibrationDataSinkPipeline:(id)arg1 ;
-(id)movieFileSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(void)addDepthDataSinkPipeline:(id)arg1 ;
-(id)movieFileSinkPipelineWithVideoConnectionID:(id)arg1 ;
-(void)addMetadataSinkPipeline:(id)arg1 ;
-(NSArray *)depthDataSinkPipelines;
-(void)addCameraSourcePipeline:(id)arg1 ;
-(id)previewSinkPipelineWithSinkID:(id)arg1 ;
-(void)addAudioDataSinkPipeline:(id)arg1 ;
-(id)movieFileSinkPipelineWithIrisStagingNode:(id)arg1 ;
-(void)addMetadataSourcePipeline:(id)arg1 ;
-(void)addMovieFileSinkPipeline:(id)arg1 ;
-(id)audioDataSinkPipelineWithSinkID:(id)arg1 ;
-(id)metadataSinkPipelineWithSinkID:(id)arg1 ;
-(id)metadataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(id)pointCloudDataSinkPipelineWithSinkID:(id)arg1 ;
-(void)addVideoDataSinkPipeline:(id)arg1 ;
-(id)stillImageSinkPipelineSessionStorageWithSinkID:(id)arg1 ;
-(id)movieFileSinkPipelineWithFileSinkNode:(id)arg1 ;
-(void)addVideoThumbnailSinkPipeline:(id)arg1 ;
-(NSArray *)visionDataSinkPipelines;
-(NSArray *)metadataSinkPipelines;
-(id)depthDataSinkPipelineWithSourceID:(id)arg1 sourceDeviceType:(int)arg2 ;
-(FigCaptureMicSourcePipeline *)micSourcePipeline;
-(NSArray *)cameraCalibrationDataSinkPipelines;
-(NSArray *)stillImageSinkPipelineSessionStorages;
-(void)addStillImageSinkPipelineSessionStorage:(id)arg1 ;
-(void)setMicSourcePipeline:(FigCaptureMicSourcePipeline *)arg1 ;
-(NSArray *)cameraSourcePipelines;
-(NSArray *)audioFileSinkPipelines;
-(NSArray *)pointCloudDataSinkPipelines;
-(void)addPointCloudDataSinkPipeline:(id)arg1 ;
-(id)cameraCalibrationDataSinkPipelineWithSinkID:(id)arg1 ;
-(void)dealloc;
-(NSArray *)previewSinkPipelines;
-(NSArray *)movieFileSinkPipelines;
@end

