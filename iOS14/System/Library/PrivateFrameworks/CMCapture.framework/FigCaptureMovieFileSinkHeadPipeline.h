/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCapturePipeline.h>

@class BWIrisStagingNode, BWFileCoordinatorNode, BWPhotoDecompressorNode, BWVideoDefringingNode, BWSceneClassifierSinkNode, BWAudioConverterNode, BWVideoOrientationMetadataNode, BWNodeOutput, NSMutableArray, NSString, NSArray;

@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline {

	BWIrisStagingNode* _irisStagingNode;
	BWFileCoordinatorNode* _fileCoordinatorNode;
	BWPhotoDecompressorNode* _irisIntermediateJPEGPhotoDecompressorNode;
	BWVideoDefringingNode* _videoDefringingNode;
	BWSceneClassifierSinkNode* _sceneClassifierSinkNode;
	BWAudioConverterNode* _audioConverterNode;
	BWVideoOrientationMetadataNode* _videoOrientationMetadataNode;
	BWNodeOutput* _sceneClassifierPipelineUpstreamOutput;
	NSMutableArray* _inferenceConnections;
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
@property (nonatomic,readonly) NSArray * inferenceConnections;                                                   //@synthesize inferenceConnections=_inferenceConnections - In the implementation block
@property (assign,nonatomic) BOOL sceneClassifierSuspended; 
-(BWVideoDefringingNode *)videoDefringingNode;
-(BWIrisStagingNode *)irisStagingNode;
-(BWNodeOutput *)videoOutput;
-(NSArray *)indexesOfDetectedObjectsInMetadataOutputs;
-(BWVideoOrientationMetadataNode *)videoOrientationMetadataNode;
-(id)initWithConfiguration:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 parentPipeline:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 fileCoordinatorStatusDelegate:(id)arg12 irisRequestDelegate:(id)arg13 masterClock:(OpaqueCMClockRef)arg14 ;
-(int)_buildFaceDetectionNode:(id)arg1 parentPipeline:(id)arg2 objectDetectionSourceOutput:(id)arg3 faceDetectionNodeOut:(id*)arg4 ;
-(int)indexOfVideoOrientationInMetadataOutputs;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(int)videoSourceDeviceType;
-(BWNodeOutput *)audioOutput;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(NSString *)videoSourceID;
-(BWFileCoordinatorNode *)fileCoordinatorNode;
-(NSArray *)metadataOutputs;
-(NSString *)videoConnectionID;
-(BWPhotoDecompressorNode *)irisIntermediateJPEGPhotoDecompressorNode;
-(BOOL)sceneClassifierSuspended;
-(int)_buildMovieFileSinkHeadPipeline:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 parentPipeline:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 fileCoordinatorStatusDelegate:(id)arg12 irisRequestDelegate:(id)arg13 masterClock:(OpaqueCMClockRef)arg14 ;
-(NSArray *)inferenceConnections;
-(void)dealloc;
-(void)setSceneClassifierSuspended:(BOOL)arg1 ;
@end

