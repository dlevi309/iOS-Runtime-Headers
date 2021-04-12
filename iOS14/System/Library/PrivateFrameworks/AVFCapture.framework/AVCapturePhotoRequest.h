/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReferencingDelegateStorage, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, NSArray;

@interface AVCapturePhotoRequest : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	unsigned _photoCallbackFlavor;
	AVCapturePhotoSettings* _unresolvedSettings;
	AVCaptureResolvedPhotoSettings* _resolvedSettings;
	NSArray* _expectedPhotoManifest;
	unsigned _firedCallbackFlags;
	unsigned long long _firedPhotoCallbacksCount;
	IOSurfaceRef _previewSurface;
	opaqueCMSampleBufferRef _previewSampleBuffer;
	IOSurfaceRef _thumbnailSurface;
	BOOL _delegateSupportsDebugMetadataSidecarFile;
	BOOL _lensStabilizationSupported;

}

@property (readonly) unsigned photoCallbackFlavor;                                           //@synthesize photoCallbackFlavor=_photoCallbackFlavor - In the implementation block
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;                     //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) AVCapturePhotoSettings * unresolvedSettings;                            //@synthesize unresolvedSettings=_unresolvedSettings - In the implementation block
@property (nonatomic,retain) AVCaptureResolvedPhotoSettings * resolvedSettings; 
@property (nonatomic,readonly) NSArray * expectedPhotoManifest;                              //@synthesize expectedPhotoManifest=_expectedPhotoManifest - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedPhotoCount; 
@property (assign,nonatomic) unsigned firedCallbackFlags;                                    //@synthesize firedCallbackFlags=_firedCallbackFlags - In the implementation block
@property (assign,nonatomic) unsigned long long firedPhotoCallbacksCount;                    //@synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount - In the implementation block
@property (readonly) BOOL delegateSupportsDebugMetadataSidecarFile;                          //@synthesize delegateSupportsDebugMetadataSidecarFile=_delegateSupportsDebugMetadataSidecarFile - In the implementation block
@property (readonly) BOOL lensStabilizationSupported;                                        //@synthesize lensStabilizationSupported=_lensStabilizationSupported - In the implementation block
@property (nonatomic,retain) IOSurfaceRef previewSurface;                                    //@synthesize previewSurface=_previewSurface - In the implementation block
@property (nonatomic,retain) opaqueCMSampleBufferRef previewSampleBuffer;                    //@synthesize previewSampleBuffer=_previewSampleBuffer - In the implementation block
@property (nonatomic,retain) IOSurfaceRef thumbnailSurface;                                  //@synthesize thumbnailSurface=_thumbnailSurface - In the implementation block
+(void)initialize;
+(id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3 ;
-(void)setPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(unsigned long long)firedPhotoCallbacksCount;
-(void)setResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg1 ;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(void)setFiredPhotoCallbacksCount:(unsigned long long)arg1 ;
-(BOOL)delegateSupportsDebugMetadataSidecarFile;
-(NSArray *)expectedPhotoManifest;
-(void)setThumbnailSurface:(IOSurfaceRef)arg1 ;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3 ;
-(IOSurfaceRef)thumbnailSurface;
-(opaqueCMSampleBufferRef)previewSampleBuffer;
-(BOOL)lensStabilizationSupported;
-(unsigned)photoCallbackFlavor;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(unsigned long long)expectedPhotoCount;
-(void)_resolveExpectedPhotoManifest;
-(void)setPreviewSurface:(IOSurfaceRef)arg1 ;
-(unsigned)firedCallbackFlags;
-(IOSurfaceRef)previewSurface;
-(void)dealloc;
-(AVCapturePhotoSettings *)unresolvedSettings;
@end

