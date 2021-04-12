/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class NSObject, AVAsset, NSDictionary, CIContext, AVAssetExportSession, CIImage, NSString, NSURL;

@interface ISEditSession : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	AVAsset* _videoAsset;
	SCD_Struct_IS1 _inputVideoDuration;
	SCD_Struct_IS1 _photoTime;
	CGImageSourceRef _inputImageSource;
	unsigned _inputOrientation;
	NSDictionary* _inputImageProperties;
	CIContext* _renderContext;
	AVAssetExportSession* _exportSession;
	CIImage* _inputImage;
	CIImage* _subsampledInputImage;
	long long _subsampleFactor;
	CIImage* _outputImage;
	CIImage* _scaledOutputImage;
	double _inputVideoScale;
	CGSize _inputVideoScaleRoundingError;
	/*^block*/id _frameProcessor;
	NSString* _temporaryDirectory;
	NSURL* _lastTemporaryVideoURL;
	NSString* _uniqueIdentifier;
	BOOL _isExporting;
	float _audioVolume;

}

@property (readonly) SCD_Struct_IS1 duration; 
@property (readonly) SCD_Struct_IS1 photoTime;              //@synthesize photoTime=_photoTime - In the implementation block
@property (readonly) unsigned orientation; 
@property (readonly) CIImage * inputImage; 
@property (copy) id frameProcessor; 
@property (assign) float audioVolume;                       //@synthesize audioVolume=_audioVolume - In the implementation block
@property (readonly) CGSize outputImageSize; 
@property (readonly) CGSize outputVideoSize; 
+(id)temporaryDirectory;
+(id)_createTemporaryDirectory;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(unsigned)orientation;
-(SCD_Struct_IS1)duration;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)imageProperties;
-(id)_inputImage;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(unsigned)_inputOrientation;
-(SCD_Struct_IS1)photoTime;
-(id)frameProcessor;
-(void)setFrameProcessor:(id)arg1 ;
-(void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(SCD_Struct_IS1)arg3 photoOrientation:(unsigned)arg4 ;
-(id)_outputImage;
-(SCD_Struct_IS1)_inputVideoDuration;
-(id)_inputImageProperties;
-(double)_inputVideoScale;
-(SCD_Struct_IS1)_loadInputVideoDuration;
-(unsigned)_loadInputImageOrientation;
-(id)_loadInputImageProperties;
-(id)_loadInputImage;
-(id)_loadInputImageWithSubsampleFactor:(long long)arg1 ;
-(id)_scaledInputImageForTargetScale:(double)arg1 ;
-(id)inputImageForRenderScale:(double)arg1 ;
-(CGSize)_inputImageSize;
-(id)_inputVideoTrack;
-(CGSize)_inputVideoSize;
-(CGAffineTransform)_inputVideoTransform;
-(CGSize)outputImageSize;
-(CGSize)_outputImageSize;
-(CGSize)outputVideoSize;
-(CGSize)_outputVideoSize;
-(id)_videoCompositionForTargetSize:(CGSize)arg1 ;
-(CGSize)_outputVideoSizeForScale:(double)arg1 ;
-(id)_processImage:(id)arg1 scale:(double)arg2 error:(id*)arg3 ;
-(void)_cancelCurrentExportIfNeeded;
-(void)_prepareForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canRenderAtPlaybackTime;
-(void)_renderImageToURL:(id)arg1 fileType:(id)arg2 targetSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_renderImageWithTargetSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_targetScaleForTargetSize:(CGSize)arg1 ;
-(id)_outputImageProperties;
-(void)_renderVideoToURL:(id)arg1 fileType:(id)arg2 targetSize:(CGSize)arg3 volume:(float)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_outputVideoMetadata;
-(id)_temporaryURLOfType:(id)arg1 ;
-(void)_exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

