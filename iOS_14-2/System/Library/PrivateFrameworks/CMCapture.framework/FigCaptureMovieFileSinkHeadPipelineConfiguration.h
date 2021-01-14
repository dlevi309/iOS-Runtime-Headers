/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigCaptureMovieFileSinkPipelineConfiguration, BWPipelineStage;

@interface FigCaptureMovieFileSinkHeadPipelineConfiguration : NSObject {

	FigCaptureMovieFileSinkPipelineConfiguration* _movieFileSinkPipelineConfiguration;
	BWPipelineStage* _movieFilePipelineStage;
	BWPipelineStage* _transferPipelineStage;
	int _visMotionMetadataPreloadingMode;

}

@property (nonatomic,retain) FigCaptureMovieFileSinkPipelineConfiguration * movieFileSinkPipelineConfiguration;              //@synthesize movieFileSinkPipelineConfiguration=_movieFileSinkPipelineConfiguration - In the implementation block
@property (nonatomic,retain) BWPipelineStage * movieFilePipelineStage;                                                       //@synthesize movieFilePipelineStage=_movieFilePipelineStage - In the implementation block
@property (nonatomic,retain) BWPipelineStage * transferPipelineStage;                                                        //@synthesize transferPipelineStage=_transferPipelineStage - In the implementation block
@property (assign,nonatomic) int visMotionMetadataPreloadingMode;                                                            //@synthesize visMotionMetadataPreloadingMode=_visMotionMetadataPreloadingMode - In the implementation block
-(BWPipelineStage *)transferPipelineStage;
-(void)setVisMotionMetadataPreloadingMode:(int)arg1 ;
-(int)visMotionMetadataPreloadingMode;
-(FigCaptureMovieFileSinkPipelineConfiguration *)movieFileSinkPipelineConfiguration;
-(void)setTransferPipelineStage:(BWPipelineStage *)arg1 ;
-(BWPipelineStage *)movieFilePipelineStage;
-(void)setMovieFilePipelineStage:(BWPipelineStage *)arg1 ;
-(void)setMovieFileSinkPipelineConfiguration:(FigCaptureMovieFileSinkPipelineConfiguration *)arg1 ;
-(void)dealloc;
@end

