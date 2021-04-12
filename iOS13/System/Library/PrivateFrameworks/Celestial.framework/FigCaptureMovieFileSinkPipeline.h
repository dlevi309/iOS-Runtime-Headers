/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkPipeline.h>

@class BWFigVideoCaptureDevice, FigCaptureMovieFileSinkHeadPipeline, FigCaptureMovieFileSinkMiddlePipeline, NSMutableArray, NSDictionary, NSString, BWIrisStagingNode, BWFileCoordinatorNode, BWVideoOrientationMetadataNode, NSArray;

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {

	BWFigVideoCaptureDevice* _captureDevice;
	FigCaptureMovieFileSinkHeadPipeline* _headPipeline;
	FigCaptureMovieFileSinkMiddlePipeline* _middlePipeline;
	NSMutableArray* _tailPipelines;
	NSMutableArray* _movieFileSinkNodes;
	NSMutableArray* _videoCompressorNodes;
	NSMutableArray* _sdofCompressorNodes;
	NSDictionary* _movieFileColorInfo;
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
@property (nonatomic,readonly) NSDictionary * movieFileColorInfo;                                          //@synthesize movieFileColorInfo=_movieFileColorInfo - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW19 offlineVISDimensions; 
@property (nonatomic,readonly) BOOL overCaptureEnabled;                                                    //@synthesize overCaptureEnabled=_overCaptureEnabled - In the implementation block
@property (assign,nonatomic) BOOL overCaptureTailPipelineRenderingEnabled; 
@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver; 
@property (assign,nonatomic) BOOL sceneClassifierSuspended; 
@property (nonatomic,readonly) BOOL allTailsAreRecording; 
@property (nonatomic,readonly) BOOL atLeastOneTailIsRecording; 
+(void)initialize;
-(void)dealloc;
-(BWFigVideoCaptureDevice *)captureDevice;
-(BOOL)overCaptureEnabled;
-(void)setRecording:(BOOL)arg1 forTailPipelineIndex:(unsigned long long)arg2 ;
-(BOOL)atLeastOneTailIsRecording;
-(BWIrisStagingNode *)irisStagingNode;
-(BWFileCoordinatorNode *)fileCoordinatorNode;
-(NSString *)videoSourceID;
-(NSArray *)movieFileSinkNodes;
-(int)videoSourceDeviceType;
-(void)setUpBackPressureForResolvedRetainedBufferCounts;
-(NSArray *)videoCompressorNodes;
-(SCD_Struct_BW19)offlineVISDimensions;
-(NSDictionary *)movieFileColorInfo;
-(NSArray *)sdofCompressorNodes;
-(CGRect)irisVISCleanOutputRectForCLAP;
-(void)setOverCaptureTailPipelineRenderingEnabled:(BOOL)arg1 ;
-(void)setSceneClassifierSuspended:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 name:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 recordingStatusDelegate:(id)arg12 irisRequestDelegate:(id)arg13 masterClock:(OpaqueCMClockRef)arg14 ;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(BWVideoOrientationMetadataNode *)videoOrientationMetadataNode;
-(BOOL)sceneClassifierSuspended;
-(NSString *)videoConnectionID;
-(id)middlePipeline;
-(void)setRecordingForAllTailPipelines:(BOOL)arg1 ;
-(BOOL)allTailsAreRecording;
-(BOOL)overCaptureTailPipelineRenderingEnabled;
@end

