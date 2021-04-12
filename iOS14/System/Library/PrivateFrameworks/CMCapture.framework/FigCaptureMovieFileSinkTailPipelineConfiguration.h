/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class FigCaptureMovieFileSinkPipelineConfiguration, BWPipelineStage, BWPhotoDecompressorNode, BWNodeOutput, NSArray;

@interface FigCaptureMovieFileSinkTailPipelineConfiguration : NSObject {

	FigCaptureMovieFileSinkPipelineConfiguration* _movieFileSinkPipelineConfiguration;
	BWPipelineStage* _movieFilePipelineStage;
	BWPhotoDecompressorNode* _irisIntermediateJPEGPhotoDecompressorNode;
	BWNodeOutput* _videoSourceOutput;
	BWNodeOutput* _audioSourceOutput;
	NSArray* _metadataSourceOutputs;
	NSArray* _indexesOfDetectedObjectsInMetadataOutputs;
	int _indexOfVideoOrientationInMetadataOutputs;
	BOOL _vitalityScoringEnabled;
	BOOL _meaningfulSubjectTrackingEnabled;
	BOOL _delayedCompressorCleanupEnabled;

}

@property (nonatomic,retain) FigCaptureMovieFileSinkPipelineConfiguration * movieFileSinkPipelineConfiguration;              //@synthesize movieFileSinkPipelineConfiguration=_movieFileSinkPipelineConfiguration - In the implementation block
@property (nonatomic,retain) BWPipelineStage * movieFilePipelineStage;                                                       //@synthesize movieFilePipelineStage=_movieFilePipelineStage - In the implementation block
@property (nonatomic,retain) BWPhotoDecompressorNode * irisIntermediateJPEGPhotoDecompressorNode;                            //@synthesize irisIntermediateJPEGPhotoDecompressorNode=_irisIntermediateJPEGPhotoDecompressorNode - In the implementation block
@property (nonatomic,retain) BWNodeOutput * videoSourceOutput;                                                               //@synthesize videoSourceOutput=_videoSourceOutput - In the implementation block
@property (nonatomic,retain) BWNodeOutput * audioSourceOutput;                                                               //@synthesize audioSourceOutput=_audioSourceOutput - In the implementation block
@property (nonatomic,retain) NSArray * metadataSourceOutputs;                                                                //@synthesize metadataSourceOutputs=_metadataSourceOutputs - In the implementation block
@property (nonatomic,retain) NSArray * indexesOfDetectedObjectsInMetadataOutputs;                                            //@synthesize indexesOfDetectedObjectsInMetadataOutputs=_indexesOfDetectedObjectsInMetadataOutputs - In the implementation block
@property (assign,nonatomic) int indexOfVideoOrientationInMetadataOutputs;                                                   //@synthesize indexOfVideoOrientationInMetadataOutputs=_indexOfVideoOrientationInMetadataOutputs - In the implementation block
@property (assign,nonatomic) BOOL vitalityScoringEnabled;                                                                    //@synthesize vitalityScoringEnabled=_vitalityScoringEnabled - In the implementation block
@property (assign,nonatomic) BOOL meaningfulSubjectTrackingEnabled;                                                          //@synthesize meaningfulSubjectTrackingEnabled=_meaningfulSubjectTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL delayedCompressorCleanupEnabled;                                                           //@synthesize delayedCompressorCleanupEnabled=_delayedCompressorCleanupEnabled - In the implementation block
-(id)init;
-(BOOL)meaningfulSubjectTrackingEnabled;
-(void)setVideoSourceOutput:(BWNodeOutput *)arg1 ;
-(NSArray *)indexesOfDetectedObjectsInMetadataOutputs;
-(FigCaptureMovieFileSinkPipelineConfiguration *)movieFileSinkPipelineConfiguration;
-(void)setDelayedCompressorCleanupEnabled:(BOOL)arg1 ;
-(int)indexOfVideoOrientationInMetadataOutputs;
-(BOOL)delayedCompressorCleanupEnabled;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(void)setIndexesOfDetectedObjectsInMetadataOutputs:(NSArray *)arg1 ;
-(void)setIndexOfVideoOrientationInMetadataOutputs:(int)arg1 ;
-(void)setMetadataSourceOutputs:(NSArray *)arg1 ;
-(BOOL)vitalityScoringEnabled;
-(void)setMeaningfulSubjectTrackingEnabled:(BOOL)arg1 ;
-(void)setIrisIntermediateJPEGPhotoDecompressorNode:(BWPhotoDecompressorNode *)arg1 ;
-(void)setAudioSourceOutput:(BWNodeOutput *)arg1 ;
-(BWPipelineStage *)movieFilePipelineStage;
-(BWNodeOutput *)videoSourceOutput;
-(NSArray *)metadataSourceOutputs;
-(BWPhotoDecompressorNode *)irisIntermediateJPEGPhotoDecompressorNode;
-(BWNodeOutput *)audioSourceOutput;
-(void)setMovieFilePipelineStage:(BWPipelineStage *)arg1 ;
-(void)setMovieFileSinkPipelineConfiguration:(FigCaptureMovieFileSinkPipelineConfiguration *)arg1 ;
-(void)dealloc;
@end

