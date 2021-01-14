/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkPipeline.h>

@class BWFigVideoCaptureDevice, FigCaptureMovieFileSinkHeadPipeline, FigCaptureMovieFileSinkMiddlePipeline, NSMutableArray, NSString, BWIrisStagingNode, BWFileCoordinatorNode, BWVideoOrientationMetadataNode, NSArray;

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {

	BWFigVideoCaptureDevice* _captureDevice;
	FigCaptureMovieFileSinkHeadPipeline* _headPipeline;
	FigCaptureMovieFileSinkMiddlePipeline* _middlePipeline;
	NSMutableArray* _tailPipelines;
	NSMutableArray* _movieFileSinkNodes;
	NSMutableArray* _videoCompressorNodes;
	NSMutableArray* _sdofCompressorNodes;
	BOOL _momentCaptureMovieRecordingEnabled;
	BOOL _overCaptureTailPipelineRenderingEnabled;
	BOOL _overCaptureEnabled;

}

@property (nonatomic,readonly) NSString * videoConnectionID; 
@property (nonatomic,readonly) NSString * videoSourceID; 
@property (nonatomic,readonly) int videoSourceDeviceType; 
@property (nonatomic,readonly) BWIrisStagingNode * irisStagingNode; 
@property (nonatomic,readonly) BWFileCoordinatorNode * fileCoordinatorNode; 
@property (nonatomic,readonly) BWVideoOrientationMetadataNode * videoOrientationMetadataNode; 
@property (nonatomic,readonly) NSArray * movieFileSinkNodes;                                               //@synthesize movieFileSinkNodes=_movieFileSinkNodes - In the implementation block
@property (nonatomic,readonly) NSArray * videoCompressorNodes;                                             //@synthesize videoCompressorNodes=_videoCompressorNodes - In the implementation block
@property (nonatomic,readonly) NSArray * sdofCompressorNodes;                                              //@synthesize sdofCompressorNodes=_sdofCompressorNodes - In the implementation block
@property (nonatomic,readonly) BWFigVideoCaptureDevice * captureDevice;                                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) CGRect irisVISCleanOutputRectForCLAP; 
@property (nonatomic,readonly) SCD_Struct_BW2 offlineVISDimensions; 
@property (nonatomic,readonly) BOOL overCaptureEnabled;                                                    //@synthesize overCaptureEnabled=_overCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL overCaptureTailPipelineRenderingEnabled; 
@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver; 
@property (assign,nonatomic) BOOL sceneClassifierSuspended; 
@property (nonatomic,readonly) BOOL allTailsAreRecording; 
@property (nonatomic,readonly) BOOL atLeastOneTailIsRecording; 
+(void)initialize;
-(BOOL)overCaptureEnabled;
-(BWFigVideoCaptureDevice *)captureDevice;
-(BWIrisStagingNode *)irisStagingNode;
-(CGRect)irisVISCleanOutputRectForCLAP;
-(BWVideoOrientationMetadataNode *)videoOrientationMetadataNode;
-(id)middlePipeline;
-(id)initWithConfiguration:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 name:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 fileCoordinatorStatusDelegate:(id)arg12 recordingStatusDelegate:(id)arg13 irisRequestDelegate:(id)arg14 masterClock:(OpaqueCMClockRef)arg15 delayedCompressorCleanupEnabled:(BOOL)arg16 ;
-(void)setUpBackPressureForResolvedRetainedBufferCounts;
-(void)setRecording:(BOOL)arg1 forTailPipelineIndex:(unsigned long long)arg2 ;
-(void)setRecordingForAllTailPipelines:(BOOL)arg1 ;
-(BOOL)allTailsAreRecording;
-(BOOL)atLeastOneTailIsRecording;
-(void)setOverCaptureTailPipelineRenderingEnabled:(BOOL)arg1 ;
-(BOOL)overCaptureTailPipelineRenderingEnabled;
-(NSArray *)movieFileSinkNodes;
-(NSArray *)videoCompressorNodes;
-(NSArray *)sdofCompressorNodes;
-(SCD_Struct_BW2)offlineVISDimensions;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(int)videoSourceDeviceType;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(NSString *)videoSourceID;
-(BWFileCoordinatorNode *)fileCoordinatorNode;
-(NSString *)videoConnectionID;
-(BOOL)sceneClassifierSuspended;
-(void)dealloc;
-(void)setSceneClassifierSuspended:(BOOL)arg1 ;
@end

