/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTVideoWriterDelegate;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInputMetadataAdaptor, NSDictionary, NSLock, WriterReorderQ, NSMutableArray, NSURL, NSString;

@interface JTVideoWriter : NSObject {

	AVAssetWriter* _movieAssetWriter;
	AVAssetWriterInput* _movieVideoAssetWriterInput;
	AVAssetWriterInput* _movieAudioAssetWriterInput;
	AVAssetWriterInput* _movieMetadataAssetWriterInput;
	AVAssetWriterInput* _movieFaceMetadataAssetWriterInput;
	AVAssetWriterInput* _movieDepthAssetWriterInput;
	AVAssetWriterInput* _movieARFrameAssetWriterInput;
	AVAssetWriterInput* _movieFaceAnchorAssetWriterInput;
	AVAssetWriterInputPixelBufferAdaptor* _depthAdaptor;
	AVAssetWriterInputMetadataAdaptor* _metadataAdaptor;
	AVAssetWriterInputMetadataAdaptor* _faceMetadataAdaptor;
	AVAssetWriterInputMetadataAdaptor* _arFrameMetadataAdaptor;
	AVAssetWriterInputMetadataAdaptor* _faceAnchorMetadataAdaptor;
	NSDictionary* _depthPixelBufferAttributes;
	opaqueCMFormatDescriptionRef _audioFormatHint;
	BOOL _wroteSessionStartTime;
	SCD_Struct_JT6 _sessionsStartTime;
	SCD_Struct_JT6 _sessionEndTime;
	AB _preparingWriter;
	AB _finishingWritingMovie;
	NSLock* _finishingLock;
	BOOL _wroteFirstAudioSample;
	SCD_Struct_JT14 _depthDimensions;
	WriterReorderQ* _reorderQ;
	NSMutableArray* _audioBufferQ;
	BOOL _forInternalRecord;
	BOOL _storeDepthDataAsVideoTrack;
	BOOL _trackOutOfOrderVideoBuffers;
	NSURL* _url;
	NSString* _fileType;
	NSDictionary* _videoOutputSettings;
	NSDictionary* _audioOutputSettings;
	id<JTVideoWriterDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * fileType;                                    //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoOutputSettings;                     //@synthesize videoOutputSettings=_videoOutputSettings - In the implementation block
@property (nonatomic,readonly) NSDictionary * audioOutputSettings;                     //@synthesize audioOutputSettings=_audioOutputSettings - In the implementation block
@property (nonatomic,readonly) NSDictionary * depthPixelBufferAttributes;              //@synthesize depthPixelBufferAttributes=_depthPixelBufferAttributes - In the implementation block
@property (nonatomic,readonly) BOOL wroteSessionStartTime;                             //@synthesize wroteSessionStartTime=_wroteSessionStartTime - In the implementation block
@property (assign) BOOL forInternalRecord;                                             //@synthesize forInternalRecord=_forInternalRecord - In the implementation block
@property (assign) BOOL storeDepthDataAsVideoTrack;                                    //@synthesize storeDepthDataAsVideoTrack=_storeDepthDataAsVideoTrack - In the implementation block
@property (assign) SCD_Struct_JT14 depthDimensions;                                    //@synthesize depthDimensions=_depthDimensions - In the implementation block
@property (assign,nonatomic,__weak) id<JTVideoWriterDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL trackOutOfOrderVideoBuffers;                         //@synthesize trackOutOfOrderVideoBuffers=_trackOutOfOrderVideoBuffers - In the implementation block
+(id)ARFrameMetadataTrackForAsset:(id)arg1 ;
+(id)faceAnchorMetadataTrackForAsset:(id)arg1 ;
+(id)JT_funcamCameraPositionMetadataIdentifier;
+(id)JT_funcamCaptureInterfaceOrientationMetadataIdentifier;
+(id)JT_arFrameMetadataIdentifier;
+(id)JT_metadataAssetTrackFromAsset:(id)arg1 metadataIdentifier:(id)arg2 ;
+(id)JT_faceAnchorMetadataIdentifier;
+(opaqueCMSampleBufferRef)CreateCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(SCD_Struct_JT15)arg2 ;
+(void)metadataForVideo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<JTVideoWriterDelegate>)delegate;
-(void)setDelegate:(id<JTVideoWriterDelegate>)arg1 ;
-(NSString *)fileType;
-(NSURL *)url;
-(void)startSessionAtSourceTime:(SCD_Struct_JT6)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)audioOutputSettings;
-(NSDictionary *)videoOutputSettings;
-(void)setDepthDimensions:(SCD_Struct_JT14)arg1 ;
-(SCD_Struct_JT14)depthDimensions;
-(void)writeCameraFrameSet:(id)arg1 ;
-(void)writeAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 videoOutputSettings:(id)arg3 audioOutputSettings:(id)arg4 audioFormatHint:(opaqueCMFormatDescriptionRef)arg5 ;
-(void)setStoreDepthDataAsVideoTrack:(BOOL)arg1 ;
-(BOOL)startWriter:(id*)arg1 ;
-(BOOL)storeDepthDataAsVideoTrack;
-(BOOL)_canStart:(id*)arg1 ;
-(BOOL)_setupWriter:(id*)arg1 ;
-(BOOL)_setupVideoOutput:(id*)arg1 ;
-(BOOL)_setupDepthOutput:(id*)arg1 ;
-(BOOL)forInternalRecord;
-(BOOL)_setupFaceMetadataOutput:(id*)arg1 ;
-(BOOL)_setupARFrameMetadata;
-(BOOL)_setupFaceAnchorMetadata;
-(BOOL)_setupAutoExposureMetadataOutput:(id*)arg1 ;
-(BOOL)_setupAudioOutput:(id*)arg1 ;
-(BOOL)trackOutOfOrderVideoBuffers;
-(void)_startSessionAtSourceTime_noLock:(SCD_Struct_JT6)arg1 ;
-(CVBufferRef)copyDepthBufferAsBGRA:(CVBufferRef)arg1 ;
-(void)_writeDepthBuffer:(id)arg1 ;
-(void)_writeFaceDetectMetadata:(id)arg1 pts:(SCD_Struct_JT6)arg2 ;
-(void)_writeVideoBuffer:(id)arg1 ;
-(void)_writeDepthBufferForAVDepthData:(id)arg1 withTimingInfo:(SCD_Struct_JT15)arg2 ;
-(void)_writeMetadata:(id)arg1 withTimingInfo:(SCD_Struct_JT15)arg2 ;
-(void)_writeBuffer:(opaqueCMSampleBufferRef)arg1 type:(int)arg2 arFrame:(id)arg3 faceAnchor:(id)arg4 ;
-(void)_writeBuffer:(opaqueCMSampleBufferRef)arg1 type:(int)arg2 ;
-(id)JT_FunCamMetadata;
-(void)_drainQueuedAudioBufferBeforeSessionStart_noLock;
-(void)_writeARFrameMetadata:(id)arg1 time:(SCD_Struct_JT6)arg2 ;
-(void)_writeFaceAnchorMetadata:(id)arg1 time:(SCD_Struct_JT6)arg2 ;
-(void)_writeAutoExposureMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_queueAudioBufferBeforeSessionStart:(opaqueCMSampleBufferRef)arg1 ;
-(void)setForInternalRecord:(BOOL)arg1 ;
-(void)writeImageBuffer:(id)arg1 timingInfo:(SCD_Struct_JT15)arg2 ;
-(NSDictionary *)depthPixelBufferAttributes;
-(BOOL)wroteSessionStartTime;
-(void)setTrackOutOfOrderVideoBuffers:(BOOL)arg1 ;
@end

