/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCapturePipeline.h>

@class BWIrisStagingNode, BWFileCoordinatorNode, BWPhotoDecompressorNode, BWVideoDefringingNode, BWSceneClassifierSinkNode, BWAudioConverterNode, BWVideoOrientationMetadataNode, BWNodeOutput, NSString, NSMutableArray, NSArray;

@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline {

	BWIrisStagingNode* _irisStagingNode;
	BWFileCoordinatorNode* _fileCoordinatorNode;
	BWPhotoDecompressorNode* _irisIntermediateJPEGPhotoDecompressorNode;
	BWVideoDefringingNode* _videoDefringingNode;
	BWSceneClassifierSinkNode* _sceneClassifierSinkNode;
	BWAudioConverterNode* _audioConverterNode;
	BWVideoOrientationMetadataNode* _videoOrientationMetadataNode;
	BWNodeOutput* _sceneClassifierPipelineUpstreamOutput;
	NSString* _videoConnectionID;
	NSString* _videoSourceID;
	int _sourceDeviceType;
	BWNodeOutput* _videoOutput;
	BWNodeOutput* _audioOutput;
	NSMutableArray* _metadataOutputs;
	NSArray* _indexesOfDetectedObjectsInMetadataOutputs;
	int _indexOfVideoOrientationInMetadataOutputs;
	int _videoSourceDeviceType;

}

@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver; 
@property (nonatomic,readonly) NSString * videoConnectionID;                                                     //@synthesize videoConnectionID=_videoConnectionID - In the implementation block
@property (nonatomic,readonly) NSString * videoSourceID;                                                         //@synthesize videoSourceID=_videoSourceID - In the implementation block
@property (nonatomic,readonly) int videoSourceDeviceType;                                                        //@synthesize videoSourceDeviceType=_videoSourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWIrisStagingNode * irisStagingNode;                                              //@synthesize irisStagingNode=_irisStagingNode - In the implementation block
@property (nonatomic,readonly) BWFileCoordinatorNode * fileCoordinatorNode;                                      //@synthesize fileCoordinatorNode=_fileCoordinatorNode - In the implementation block
@property (nonatomic,readonly) BWVideoOrientationMetadataNode * videoOrientationMetadataNode;                    //@synthesize videoOrientationMetadataNode=_videoOrientationMetadataNode - In the implementation block
@property (nonatomic,readonly) BWPhotoDecompressorNode * irisIntermediateJPEGPhotoDecompressorNode;              //@synthesize irisIntermediateJPEGPhotoDecompressorNode=_irisIntermediateJPEGPhotoDecompressorNode - In the implementation block
@property (nonatomic,readonly) BWVideoDefringingNode * videoDefringingNode;                                      //@synthesize videoDefringingNode=_videoDefringingNode - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * videoOutput;                                                       //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * audioOutput;                                                       //@synthesize audioOutput=_audioOutput - In the implementation block
@property (nonatomic,readonly) NSArray * metadataOutputs;                                                        //@synthesize metadataOutputs=_metadataOutputs - In the implementation block
@property (nonatomic,readonly) NSArray * indexesOfDetectedObjectsInMetadataOutputs;                              //@synthesize indexesOfDetectedObjectsInMetadataOutputs=_indexesOfDetectedObjectsInMetadataOutputs - In the implementation block
@property (nonatomic,readonly) int indexOfVideoOrientationInMetadataOutputs;                                     //@synthesize indexOfVideoOrientationInMetadataOutputs=_indexOfVideoOrientationInMetadataOutputs - In the implementation block
@property (assign,nonatomic) BOOL sceneClassifierSuspended; 
-(void)dealloc;
-(BWNodeOutput *)videoOutput;
-(BWIrisStagingNode *)irisStagingNode;
-(BWFileCoordinatorNode *)fileCoordinatorNode;
-(NSString *)videoSourceID;
-(int)videoSourceDeviceType;
-(void)setSceneClassifierSuspended:(BOOL)arg1 ;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(BWVideoOrientationMetadataNode *)videoOrientationMetadataNode;
-(int)_buildMovieFileSinkHeadPipeline:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 parentPipeline:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 irisRequestDelegate:(id)arg12 masterClock:(OpaqueCMClockRef)arg13 ;
-(int)_buildFaceDetectionNode:(id)arg1 parentPipeline:(id)arg2 objectDetectionSourceOutput:(id)arg3 faceDetectionNodeOut:(id*)arg4 ;
-(id)initWithConfiguration:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 parentPipeline:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 irisRequestDelegate:(id)arg12 masterClock:(OpaqueCMClockRef)arg13 ;
-(BOOL)sceneClassifierSuspended;
-(NSString *)videoConnectionID;
-(BWPhotoDecompressorNode *)irisIntermediateJPEGPhotoDecompressorNode;
-(BWNodeOutput *)audioOutput;
-(NSArray *)metadataOutputs;
-(NSArray *)indexesOfDetectedObjectsInMetadataOutputs;
-(int)indexOfVideoOrientationInMetadataOutputs;
-(BWVideoDefringingNode *)videoDefringingNode;
@end

