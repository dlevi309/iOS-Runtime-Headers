/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/CAMCaptureAdjustmentProvider.h>
#import <libobjc.A.dylib/CAMBurstIdentifierProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAMBurstRequest.h>
#import <libobjc.A.dylib/CAMIrisRequest.h>
#import <libobjc.A.dylib/CAMTimelapseRequest.h>

@protocol CAMStillImageCaptureRequestDelegate;
@class NSString, NSArray, NSURL;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMCaptureAdjustmentProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest> {

	NSString* _EV0PersistenceUUID;
	NSString* _timelapseIdentifier;
	long long _effectFilterType;
	long long _lightingEffectType;
	long long _aspectRatioCrop;
	unsigned long long _maximumBurstLength;
	long long _flashMode;
	long long _hdrMode;
	long long _irisMode;
	long long _ctmCaptureType;
	BOOL _wantsSpatialOverCapture;
	BOOL _wantsPortraitEffect;
	NSArray* _adjustmentFilters;
	NSArray* _originalFilters;
	long long _photoQualityPrioritization;
	BOOL _wantsAutoDualCameraFusion;
	BOOL _wantsSemanticSceneFilter;
	BOOL _wantsAudioForCapture;
	BOOL _wantsSquareCrop;
	long long _lowLightMode;
	long long _aspectRatio;
	BOOL _wantsHighResolutionStills;
	BOOL _stillDuringVideo;
	CGSize _desiredPreviewSize;
	NSString* _burstIdentifier;
	NSString* _irisIdentifier;
	NSURL* _localVideoDestinationURL;
	NSURL* _localCTMVideoDestinationURL;
	NSURL* _localSpatialOverCaptureVideoDestinationURL;
	NSURL* _localCTMSpatialOverCaptureVideoDestinationURL;
	NSString* _videoPersistenceUUID;
	NSString* _EV0IrisIdentifier;
	NSURL* _EV0LocalVideoDestinationURL;
	NSURL* _EV0LocalSpatialOverCaptureVideoDestinationURL;
	NSString* _EV0VideoPersistenceUUID;
	unsigned long long _userInitiationTime;
	double _loggingVideoZoomFactor;
	long long _loggingZoomInteractionType;
	id<CAMStillImageCaptureRequestDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * EV0PersistenceUUID;                                      //@synthesize EV0PersistenceUUID=_EV0PersistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * timelapseIdentifier;                                     //@synthesize timelapseIdentifier=_timelapseIdentifier - In the implementation block
@property (nonatomic,readonly) long long effectFilterType;                                              //@synthesize effectFilterType=_effectFilterType - In the implementation block
@property (nonatomic,readonly) long long lightingEffectType;                                            //@synthesize lightingEffectType=_lightingEffectType - In the implementation block
@property (nonatomic,readonly) long long aspectRatioCrop;                                               //@synthesize aspectRatioCrop=_aspectRatioCrop - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumBurstLength;                                   //@synthesize maximumBurstLength=_maximumBurstLength - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                                     //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                                                       //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) long long irisMode;                                                      //@synthesize irisMode=_irisMode - In the implementation block
@property (nonatomic,readonly) BOOL wantsPortraitEffect;                                                //@synthesize wantsPortraitEffect=_wantsPortraitEffect - In the implementation block
@property (nonatomic,readonly) NSArray * adjustmentFilters;                                             //@synthesize adjustmentFilters=_adjustmentFilters - In the implementation block
@property (nonatomic,readonly) NSArray * originalFilters;                                               //@synthesize originalFilters=_originalFilters - In the implementation block
@property (nonatomic,readonly) long long photoQualityPrioritization;                                    //@synthesize photoQualityPrioritization=_photoQualityPrioritization - In the implementation block
@property (nonatomic,readonly) BOOL wantsAutoDualCameraFusion;                                          //@synthesize wantsAutoDualCameraFusion=_wantsAutoDualCameraFusion - In the implementation block
@property (nonatomic,readonly) BOOL wantsSemanticSceneFilter;                                           //@synthesize wantsSemanticSceneFilter=_wantsSemanticSceneFilter - In the implementation block
@property (nonatomic,readonly) BOOL wantsAudioForCapture;                                               //@synthesize wantsAudioForCapture=_wantsAudioForCapture - In the implementation block
@property (nonatomic,readonly) BOOL wantsSquareCrop;                                                    //@synthesize wantsSquareCrop=_wantsSquareCrop - In the implementation block
@property (nonatomic,readonly) BOOL wantsHighResolutionStills;                                          //@synthesize wantsHighResolutionStills=_wantsHighResolutionStills - In the implementation block
@property (nonatomic,readonly) BOOL stillDuringVideo;                                                   //@synthesize stillDuringVideo=_stillDuringVideo - In the implementation block
@property (nonatomic,readonly) long long ctmCaptureType;                                                //@synthesize ctmCaptureType=_ctmCaptureType - In the implementation block
@property (getter=isCTMVideo,nonatomic,readonly) BOOL CTMVideo; 
@property (nonatomic,readonly) BOOL wantsSpatialOverCapture;                                            //@synthesize wantsSpatialOverCapture=_wantsSpatialOverCapture - In the implementation block
@property (nonatomic,readonly) long long lowLightMode;                                                  //@synthesize lowLightMode=_lowLightMode - In the implementation block
@property (nonatomic,readonly) CGSize desiredPreviewSize;                                               //@synthesize desiredPreviewSize=_desiredPreviewSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                                         //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * irisIdentifier;                                          //@synthesize irisIdentifier=_irisIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localVideoDestinationURL;                                   //@synthesize localVideoDestinationURL=_localVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localCTMVideoDestinationURL;                                //@synthesize localCTMVideoDestinationURL=_localCTMVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localSpatialOverCaptureVideoDestinationURL;                 //@synthesize localSpatialOverCaptureVideoDestinationURL=_localSpatialOverCaptureVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localCTMSpatialOverCaptureVideoDestinationURL;              //@synthesize localCTMSpatialOverCaptureVideoDestinationURL=_localCTMSpatialOverCaptureVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoPersistenceUUID;                                    //@synthesize videoPersistenceUUID=_videoPersistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * EV0IrisIdentifier;                                       //@synthesize EV0IrisIdentifier=_EV0IrisIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * EV0LocalVideoDestinationURL;                                //@synthesize EV0LocalVideoDestinationURL=_EV0LocalVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * EV0LocalSpatialOverCaptureVideoDestinationURL;              //@synthesize EV0LocalSpatialOverCaptureVideoDestinationURL=_EV0LocalSpatialOverCaptureVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * EV0VideoPersistenceUUID;                                 //@synthesize EV0VideoPersistenceUUID=_EV0VideoPersistenceUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiationTime;                                   //@synthesize userInitiationTime=_userInitiationTime - In the implementation block
@property (nonatomic,readonly) double loggingVideoZoomFactor;                                           //@synthesize loggingVideoZoomFactor=_loggingVideoZoomFactor - In the implementation block
@property (nonatomic,readonly) long long loggingZoomInteractionType;                                    //@synthesize loggingZoomInteractionType=_loggingZoomInteractionType - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMStillImageCaptureRequestDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)flashMode;
-(unsigned long long)userInitiationTime;
-(BOOL)isCTMVideo;
-(BOOL)stillDuringVideo;
-(CGSize)desiredPreviewSize;
-(NSString *)EV0PersistenceUUID;
-(long long)hdrMode;
-(id)init;
-(id<CAMStillImageCaptureRequestDelegate>)delegate;
-(long long)loggingZoomInteractionType;
-(NSURL *)localSpatialOverCaptureVideoDestinationURL;
-(NSArray *)adjustmentFilters;
-(id)irisVideoPersistenceUUIDForEV0:(BOOL)arg1 ;
-(NSArray *)originalFilters;
-(long long)irisMode;
-(BOOL)wantsSpatialOverCapture;
-(id)irisLocalVideoDestinationURLForEV0:(BOOL)arg1 ;
-(NSString *)irisIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)photoQualityPrioritization;
-(NSURL *)localCTMSpatialOverCaptureVideoDestinationURL;
-(NSString *)burstIdentifier;
-(NSString *)timelapseIdentifier;
-(long long)ctmCaptureType;
-(NSURL *)localVideoDestinationURL;
-(BOOL)wantsAutoDualCameraFusion;
-(id)irisStillImagePersistenceUUIDForEV0:(BOOL)arg1 ;
-(NSURL *)localCTMVideoDestinationURL;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
-(BOOL)isEV0LocalVideoDestinationURL:(id)arg1 ;
-(BOOL)wantsAudioForCapture;
-(NSString *)EV0VideoPersistenceUUID;
-(long long)effectFilterType;
-(long long)aspectRatioCrop;
-(BOOL)wantsSemanticSceneFilter;
-(id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(BOOL)arg1 ;
-(BOOL)hasAdjustments;
-(NSString *)EV0IrisIdentifier;
-(BOOL)wantsHighResolutionStills;
-(BOOL)wantsPortraitEffect;
-(unsigned long long)maximumBurstLength;
-(NSURL *)EV0LocalSpatialOverCaptureVideoDestinationURL;
-(BOOL)wantsSquareCrop;
-(NSString *)videoPersistenceUUID;
-(double)loggingVideoZoomFactor;
-(id)irisIdentifierForEV0:(BOOL)arg1 ;
-(NSURL *)EV0LocalVideoDestinationURL;
-(long long)lightingEffectType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)lowLightMode;
-(BOOL)shouldProtectPersistenceForVideo;
-(id)captureRequest;
-(BOOL)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg1 ;
@end

