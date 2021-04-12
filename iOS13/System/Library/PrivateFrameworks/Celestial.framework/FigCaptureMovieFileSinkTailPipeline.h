/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCapturePipeline.h>

@protocol BWNodeBackPressureSource, BWQRCodeSceneObserver;
@class BWVideoStitcherNode, BWPixelTransferNode, FigCaptureVISPipeline, BWVideoCompressorNode, BWBackPressureNode, BWQuickTimeMovieFileSinkNode;

@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline {

	BWVideoStitcherNode* _videoStitcherNode;
	BWPixelTransferNode* _scalerNode;
	FigCaptureVISPipeline* _visPipeline;
	BWVideoCompressorNode* _videoCompressorNode;
	BWVideoCompressorNode* _sdofCompressorNode;
	BWBackPressureNode* _irisIntermediateJPEGDecompressionBackPressureNode;
	BWBackPressureNode* _irisIntermediateJPEGDecompressionBackPressureNodeForSynchronizedSlaveVideoStitching;
	BWBackPressureNode* _videoStitcherBackPressureNode;
	BWBackPressureNode* _visBackPressureNode;
	BWBackPressureNode* _irisSDOFVISBackPressureNode;
	BWQuickTimeMovieFileSinkNode* _movieFileSinkNode;
	id<BWNodeBackPressureSource> _visBackPressureSourceNode;
	unsigned long long _tailIndex;
	unsigned long long _JPEGDecompressionSlaveSemaphoreIndex;
	int _visBackPressureExtraRetainedBufferCount;
	int _videoStabilizationType;
	BOOL _offlineVISEnabled;
	BOOL _recording;
	BOOL _sceneClassifierSuspended;
	id<BWQRCodeSceneObserver> _qrCodeSceneObserver;

}

@property (assign,nonatomic) id<BWQRCodeSceneObserver> qrCodeSceneObserver;                          //@synthesize qrCodeSceneObserver=_qrCodeSceneObserver - In the implementation block
@property (nonatomic,readonly) BWQuickTimeMovieFileSinkNode * movieFileSinkNode;                     //@synthesize movieFileSinkNode=_movieFileSinkNode - In the implementation block
@property (nonatomic,readonly) BWVideoCompressorNode * videoCompressorNode;                          //@synthesize videoCompressorNode=_videoCompressorNode - In the implementation block
@property (nonatomic,readonly) BWVideoCompressorNode * sdofCompressorNode;                           //@synthesize sdofCompressorNode=_sdofCompressorNode - In the implementation block
@property (nonatomic,readonly) FigCaptureVISPipeline * visPipeline;                                  //@synthesize visPipeline=_visPipeline - In the implementation block
@property (nonatomic,readonly) CGRect irisVISCleanOutputRectForCLAP; 
@property (nonatomic,readonly) SCD_Struct_BW19 offlineVISDimensions; 
@property (assign,nonatomic) BOOL recording;                                                         //@synthesize recording=_recording - In the implementation block
@property (nonatomic,readonly) unsigned long long JPEGDecompressionSlaveSemaphoreIndex;              //@synthesize JPEGDecompressionSlaveSemaphoreIndex=_JPEGDecompressionSlaveSemaphoreIndex - In the implementation block
@property (assign,nonatomic) BOOL sceneClassifierSuspended;                                          //@synthesize sceneClassifierSuspended=_sceneClassifierSuspended - In the implementation block
-(void)dealloc;
-(void)setRecording:(BOOL)arg1 ;
-(BOOL)recording;
-(SCD_Struct_BW19)offlineVISDimensions;
-(CGRect)irisVISCleanOutputRectForCLAP;
-(void)setSceneClassifierSuspended:(BOOL)arg1 ;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(void)setQrCodeSceneObserver:(id<BWQRCodeSceneObserver>)arg1 ;
-(BOOL)sceneClassifierSuspended;
-(FigCaptureVISPipeline *)visPipeline;
-(int)_buildMovieFileSinkTailPipeline:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8 ;
-(id)_appendBackPressureNodeToPreviousVideoOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 pipelineStage:(id)arg4 nodeName:(id)arg5 backPressureNodeOut:(id*)arg6 ;
-(id)initWithConfiguration:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8 ;
-(void)setUpBackPressureSemaphoresWithIrisIntermediateJPEGPhotoDecompressorNode:(id)arg1 videoDefringingNode:(id)arg2 ;
-(BWQuickTimeMovieFileSinkNode *)movieFileSinkNode;
-(BWVideoCompressorNode *)videoCompressorNode;
-(BWVideoCompressorNode *)sdofCompressorNode;
-(unsigned long long)JPEGDecompressionSlaveSemaphoreIndex;
@end

