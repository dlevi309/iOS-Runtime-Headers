/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCapturePipeline.h>

@protocol BWNodeBackPressureSource, BWQRCodeSceneObserver;
@class BWPixelTransferNode, FigCaptureVISPipeline, BWVideoCompressorNode, BWBackPressureNode, BWQuickTimeMovieFileSinkNode;

@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline {

	BWPixelTransferNode* _scalerNode;
	FigCaptureVISPipeline* _visPipeline;
	BWVideoCompressorNode* _videoCompressorNode;
	BWVideoCompressorNode* _sdofCompressorNode;
	BWBackPressureNode* _irisIntermediateJPEGDecompressionBackPressureNode;
	BWBackPressureNode* _visBackPressureNode;
	BWBackPressureNode* _irisSDOFVISBackPressureNode;
	BWQuickTimeMovieFileSinkNode* _movieFileSinkNode;
	id<BWNodeBackPressureSource> _visBackPressureSourceNode;
	unsigned long long _tailIndex;
	int _visBackPressureExtraRetainedBufferCount;
	int _videoStabilizationType;
	BOOL _offlineVISEnabled;
	BOOL _recording;
	BOOL _sceneClassifierSuspended;
	id<BWQRCodeSceneObserver> _qrCodeSceneObserver;

}

@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver;                   //@synthesize qrCodeSceneObserver=_qrCodeSceneObserver - In the implementation block
@property (nonatomic,readonly) BWQuickTimeMovieFileSinkNode * movieFileSinkNode;              //@synthesize movieFileSinkNode=_movieFileSinkNode - In the implementation block
@property (nonatomic,readonly) BWVideoCompressorNode * videoCompressorNode;                   //@synthesize videoCompressorNode=_videoCompressorNode - In the implementation block
@property (nonatomic,readonly) BWVideoCompressorNode * sdofCompressorNode;                    //@synthesize sdofCompressorNode=_sdofCompressorNode - In the implementation block
@property (nonatomic,readonly) FigCaptureVISPipeline * visPipeline;                           //@synthesize visPipeline=_visPipeline - In the implementation block
@property (nonatomic,readonly) CGRect irisVISCleanOutputRectForCLAP; 
@property (nonatomic,readonly) SCD_Struct_BW2 offlineVISDimensions; 
@property (assign,nonatomic) BOOL recording;                                                  //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) BOOL sceneClassifierSuspended;                                   //@synthesize sceneClassifierSuspended=_sceneClassifierSuspended - In the implementation block
-(void)setRecording:(BOOL)arg1 ;
-(CGRect)irisVISCleanOutputRectForCLAP;
-(FigCaptureVISPipeline *)visPipeline;
-(void)setUpBackPressureSemaphoresWithIrisIntermediateJPEGPhotoDecompressorNode:(id)arg1 videoDefringingNode:(id)arg2 ;
-(int)_buildFaceDetectionNode:(id)arg1 parentPipeline:(id)arg2 objectDetectionSourceOutput:(id)arg3 faceDetectionNodeOut:(id*)arg4 ;
-(BOOL)recording;
-(id)_appendBackPressureNodeToPreviousVideoOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 pipelineStage:(id)arg4 nodeName:(id)arg5 backPressureNodeOut:(id*)arg6 ;
-(id)initWithConfiguration:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8 ;
-(BWVideoCompressorNode *)videoCompressorNode;
-(SCD_Struct_BW2)offlineVISDimensions;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(BWVideoCompressorNode *)sdofCompressorNode;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(int)_buildMovieFileSinkTailPipeline:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8 ;
-(BWQuickTimeMovieFileSinkNode *)movieFileSinkNode;
-(BOOL)sceneClassifierSuspended;
-(void)dealloc;
-(void)setSceneClassifierSuspended:(BOOL)arg1 ;
@end

