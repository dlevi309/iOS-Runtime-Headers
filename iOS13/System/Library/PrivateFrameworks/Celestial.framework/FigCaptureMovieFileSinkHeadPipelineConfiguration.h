/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(FigCaptureMovieFileSinkPipelineConfiguration *)movieFileSinkPipelineConfiguration;
-(void)setMovieFileSinkPipelineConfiguration:(FigCaptureMovieFileSinkPipelineConfiguration *)arg1 ;
-(BWPipelineStage *)movieFilePipelineStage;
-(void)setMovieFilePipelineStage:(BWPipelineStage *)arg1 ;
-(BWPipelineStage *)transferPipelineStage;
-(void)setTransferPipelineStage:(BWPipelineStage *)arg1 ;
-(int)visMotionMetadataPreloadingMode;
-(void)setVisMotionMetadataPreloadingMode:(int)arg1 ;
@end

