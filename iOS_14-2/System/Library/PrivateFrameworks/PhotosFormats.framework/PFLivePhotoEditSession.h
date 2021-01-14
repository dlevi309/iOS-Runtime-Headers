/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@protocol OS_dispatch_queue;
#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSObject, AVAsset, NSDictionary, CIContext, AVAssetExportSession, CIImage, NSString, NSURL;

@interface PFLivePhotoEditSession : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	AVAsset* _videoAsset;
	SCD_Struct_PF3 _inputVideoDuration;
	SCD_Struct_PF3 _photoTime;
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

@property (readonly) SCD_Struct_PF3 duration; 
@property (readonly) SCD_Struct_PF3 photoTime;              //@synthesize photoTime=_photoTime - In the implementation block
@property (readonly) unsigned orientation; 
@property (readonly) CIImage * inputImage; 
@property (copy) id frameProcessor; 
@property (assign) float audioVolume;                       //@synthesize audioVolume=_audioVolume - In the implementation block
@property (readonly) CGSize outputImageSize; 
@property (readonly) CGSize outputVideoSize; 
+(id)temporaryDirectory;
+(id)_createTemporaryDirectory;
-(id)_inputImage;
-(id)init;
-(unsigned)_inputOrientation;
-(void)setAudioVolume:(float)arg1 ;
-(unsigned)orientation;
-(id)_outputImage;
-(SCD_Struct_PF3)photoTime;
-(id)outputImage;
-(SCD_Struct_PF3)duration;
-(void)cancel;
-(CIImage *)inputImage;
-(float)audioVolume;
-(id)frameProcessor;
-(void)setFrameProcessor:(id)arg1 ;
-(void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareForPlaybackWithTargetSize:(CGSize)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(SCD_Struct_PF3)arg3 photoOrientation:(unsigned)arg4 ;
-(id)imageProperties;
-(CGSize)_inputImageSize;
-(SCD_Struct_PF3)_inputVideoDuration;
-(id)_inputImageProperties;
-(double)_inputVideoScale;
-(SCD_Struct_PF3)_loadInputVideoDuration;
-(unsigned)_loadInputImageOrientation;
-(id)_loadInputImageProperties;
-(id)_loadInputImage;
-(id)_loadInputImageWithSubsampleFactor:(long long)arg1 ;
-(id)_scaledInputImageForTargetScale:(double)arg1 ;
-(id)inputImageForRenderScale:(double)arg1 ;
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

