/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
+(id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3 ;
-(void)dealloc;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3 ;
-(void)_resolveExpectedPhotoManifest;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(unsigned long long)expectedPhotoCount;
-(void)setResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg1 ;
-(unsigned)photoCallbackFlavor;
-(AVCapturePhotoSettings *)unresolvedSettings;
-(NSArray *)expectedPhotoManifest;
-(unsigned)firedCallbackFlags;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(unsigned long long)firedPhotoCallbacksCount;
-(void)setFiredPhotoCallbacksCount:(unsigned long long)arg1 ;
-(IOSurfaceRef)previewSurface;
-(void)setPreviewSurface:(IOSurfaceRef)arg1 ;
-(opaqueCMSampleBufferRef)previewSampleBuffer;
-(void)setPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(IOSurfaceRef)thumbnailSurface;
-(void)setThumbnailSurface:(IOSurfaceRef)arg1 ;
-(BOOL)delegateSupportsDebugMetadataSidecarFile;
-(BOOL)lensStabilizationSupported;
@end

