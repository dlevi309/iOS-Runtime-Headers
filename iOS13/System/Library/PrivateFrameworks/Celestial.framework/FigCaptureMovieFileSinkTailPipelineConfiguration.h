/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(id)init;
-(void)dealloc;
-(void)setVitalityScoringEnabled:(BOOL)arg1 ;
-(BOOL)vitalityScoringEnabled;
-(FigCaptureMovieFileSinkPipelineConfiguration *)movieFileSinkPipelineConfiguration;
-(void)setMovieFileSinkPipelineConfiguration:(FigCaptureMovieFileSinkPipelineConfiguration *)arg1 ;
-(BWPipelineStage *)movieFilePipelineStage;
-(void)setMovieFilePipelineStage:(BWPipelineStage *)arg1 ;
-(BWPhotoDecompressorNode *)irisIntermediateJPEGPhotoDecompressorNode;
-(NSArray *)indexesOfDetectedObjectsInMetadataOutputs;
-(int)indexOfVideoOrientationInMetadataOutputs;
-(void)setIrisIntermediateJPEGPhotoDecompressorNode:(BWPhotoDecompressorNode *)arg1 ;
-(BWNodeOutput *)videoSourceOutput;
-(void)setVideoSourceOutput:(BWNodeOutput *)arg1 ;
-(BWNodeOutput *)audioSourceOutput;
-(void)setAudioSourceOutput:(BWNodeOutput *)arg1 ;
-(NSArray *)metadataSourceOutputs;
-(void)setMetadataSourceOutputs:(NSArray *)arg1 ;
-(void)setIndexesOfDetectedObjectsInMetadataOutputs:(NSArray *)arg1 ;
-(void)setIndexOfVideoOrientationInMetadataOutputs:(int)arg1 ;
-(BOOL)meaningfulSubjectTrackingEnabled;
-(void)setMeaningfulSubjectTrackingEnabled:(BOOL)arg1 ;
@end

