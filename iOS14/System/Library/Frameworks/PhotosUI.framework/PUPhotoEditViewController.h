/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUEditViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIPencilInteractionDelegate.h>
#import <libobjc.A.dylib/PUPhotoEditToolControllerDelegate.h>
#import <libobjc.A.dylib/PUVideoEditPluginSessionDataSource.h>
#import <libobjc.A.dylib/PUImageEditPluginSessionDataSource.h>
#import <libobjc.A.dylib/PUEditPluginSessionDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PUOneUpAssetTransitionViewController.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PUPhotoEditIrisModelChangeObserver.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>
#import <libobjc.A.dylib/PUPhotoEditResourceLoaderDelegate.h>
#import <libobjc.A.dylib/PUViewControllerSpecChangeObserver.h>
#import <libobjc.A.dylib/NUMediaViewDelegatePrivate.h>
#import <libobjc.A.dylib/PUPhotoEditToolbarDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PICompositionControllerDelegate.h>
#import <libobjc.A.dylib/PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutSource.h>

@protocol OS_dispatch_source, NUImageProperties, PUEditableAsset, PUPhotoEditViewControllerPresentationDelegate, PUPhotoEditViewControllerSessionDelegate;
@class NSArray, PUPhotoEditToolController, UIViewController, NUMediaView, NUBufferRenderClient, PUTouchingGestureRecognizer, PUPhotoEditToolbar, PUPhotoEditButtonCenteredToolbar, PXUIButton, PUPhotoEditToolPickerController, UIView, UIButton, PUEditPluginSession, PUPhotoEditSnapshot, NSURL, NSString, PUAutoAdjustmentController, UIImageView, UITapGestureRecognizer, CEKBadgeTextView, PXUIAssetBadgeView, PUProgressIndicatorView, NSObject, PUCropToolController, PUFilterToolController, PUAdjustmentsToolController, PULivePhotoEffectsToolController, PUPhotoEditLivePhotoVideoToolController, PUPhotoEditPortraitToolController, _PPTState, CEKLightingControl, CEKLightingNameBadge, NSMutableSet, UIMenu, PUPhotoEditViewControllerSpec, PUEditableMediaProvider, PUMediaDestination, PXImageLayerModulator, PXLivePhotoViewModulator, PUPhotoEditValuesCalculator, PLPhotoEditRenderer, PURedeyeToolController, PUPhotoEditAggregateSession, PUPhotoEditResourceLoader, PICompositionController, NUComposition, PUPhotoEditIrisModel, PLEditSource, PHContentEditingInput, NSTimer, UIAlertController, UIPencilInteraction, PUPhotoEditPerfHUD, PUPhotoEditReframeHUD, PUPhotoSceneHUD, PXTimeInterval, PUEnterEditPerformanceEventBuilder, PUExitEditPerformanceEventBuilder;

@interface PUPhotoEditViewController : PUEditViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIPencilInteractionDelegate, PUPhotoEditToolControllerDelegate, PUVideoEditPluginSessionDataSource, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PXPhotoLibraryUIChangeObserver, PUOneUpAssetTransitionViewController, PXForcedDismissableViewController, PUPhotoEditIrisModelChangeObserver, PHLivePhotoViewDelegate, PUPhotoEditResourceLoaderDelegate, PUViewControllerSpecChangeObserver, NUMediaViewDelegatePrivate, PUPhotoEditToolbarDelegate, PXChangeObserver, PICompositionControllerDelegate, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PUPhotoEditLayoutSource> {

	NSArray* __allTools;
	PUPhotoEditToolController* _currentEditingTool;
	PUPhotoEditToolController* _previousEditingTool;
	UIViewController* _currentTool;
	BOOL _switchingToolsAnimated;
	BOOL _leavingEdit;
	NUMediaView* _mediaView;
	BOOL _isImageFrameReady;
	BOOL _isImageZooming;
	NUBufferRenderClient* _renderImageClient;
	BOOL _isAnimatingLayoutOrientation;
	PUTouchingGestureRecognizer* _livePhotoTouchRecognizer;
	BOOL _livePhotoIsPlaying;
	NSArray* _mainToolbarConstraints;
	NSArray* _alternateToolbarConstraints;
	NSArray* _secondaryToolbarConstraints;
	NSArray* _currentToolViewConstraints;
	NSArray* _placeholderImageViewConstraints;
	NSArray* _previewingOriginalBadgeConstraints;
	NSArray* _rawDecodeBadgeConstraints;
	NSArray* _depthBadgeConstraints;
	NSArray* _progressIndicatorViewConstraints;
	NSArray* _progressEventBlockingViewConstraints;
	NSArray* _mediaViewConstraints;
	PUPhotoEditToolbar* _mainToolbar;
	PUPhotoEditToolbar* _alternateToolbar;
	PUPhotoEditButtonCenteredToolbar* _secondaryToolbar;
	NSArray* _coreToolButtons;
	NSArray* _mainToolButtons;
	PXUIButton* _cancelButton;
	PXUIButton* _mainActionButton;
	long long _mainButtonAction;
	BOOL _toolbarButtonsValid;
	PUPhotoEditToolPickerController* _toolPickerController;
	NSArray* _secondaryLeadingViews;
	NSArray* _secondaryTrailingViews;
	UIView* _secondaryCenterView;
	UIButton* _depthBadge;
	UIButton* _pluginButton;
	UIButton* _redEyeButton;
	UIButton* _ttrButton;
	BOOL _ttrExceededThreshold;
	PUEditPluginSession* _pluginSession;
	BOOL _pluginWorkImageVersionIsValid;
	long long _pluginWorkImageVersion;
	PUPhotoEditSnapshot* _stashedSnapshot;
	NSURL* _pluginFullSizeImageURL;
	NSString* _pluginFullSizeImageSandboxExtensionToken;
	NSString* _pluginSessionIdentifier;
	BOOL _pluginWorkingOffPenultimate;
	UIButton* _autoEnhanceButton;
	PUAutoAdjustmentController* _autoEnhanceController;
	UIImageView* _placeholderImageView;
	BOOL _placeholderImageViewTransitioningOut;
	UITapGestureRecognizer* _togglePreviewTapGestureRecognizer;
	CEKBadgeTextView* _previewingOriginalBadge;
	unsigned long long _togglePreviewOriginalOffRequestID;
	PXUIAssetBadgeView* _rawDecodeBadge;
	BOOL _shouldShowRawDecodeBadge;
	PUProgressIndicatorView* _progressIndicatorView;
	id _progressIndicatorInteractionDisablingToken;
	int _inProgressSaveRequestID;
	BOOL _inProgressSaveIsDeferredRender;
	NSObject*<OS_dispatch_source> _saveProgressTimer;
	UIView* _progressEventBlockingView;
	BOOL _downloadingForRevert;
	BOOL _didLoadTools;
	BOOL _needToReloadTools;
	BOOL _updatingToolbars;
	PUCropToolController* _cropController;
	PUFilterToolController* _filtersController;
	PUAdjustmentsToolController* _adjustmentsController;
	PULivePhotoEffectsToolController* _livePhotoEffectsToolController;
	PUPhotoEditLivePhotoVideoToolController* _livePhotoToolController;
	PUPhotoEditPortraitToolController* _portraitToolController;
	_PPTState* _pptState;
	BOOL __isCachingVideo;
	BOOL _isEmbeddedEdit;
	id<NUImageProperties> _imageProperties;
	CGSize _previewOriginalSavedImageSize;
	BOOL _shouldShowPortraitTool;
	CEKLightingControl* _lightingControl;
	CEKLightingNameBadge* _lightingNameBadge;
	NSMutableSet* _assetsWaitingForLibraryNotification;
	UIMenu* _askToSaveAsNewClipMenu;
	BOOL __hasLoadedRaw;
	BOOL __penultimateAvailable;
	BOOL _runningAutoCalculators;
	BOOL _isTransitioningFromDownloadingToRunningAutoCalculators;
	BOOL __revertingToOriginal;
	BOOL __shouldBePreviewingOriginal;
	BOOL _burningInTrim;
	BOOL _firstSinceBoot;
	BOOL _firstSinceLaunch;
	float _gainMapValue;
	long long _layoutOrientation;
	PUPhotoEditViewControllerSpec* _photoEditSpec;
	NSObject*<PUEditableAsset> _photo;
	PUEditableMediaProvider* _mediaProvider;
	PUMediaDestination* _mediaDestination;
	id<PUPhotoEditViewControllerPresentationDelegate> _presentationDelegate;
	id<PUPhotoEditViewControllerSessionDelegate> _sessionDelegate;
	PXImageLayerModulator* _imageLayerModulator;
	PXLivePhotoViewModulator* _livePhotoViewModulator;
	PXImageLayerModulator* _placeholderImageLayerModulator;
	PUPhotoEditValuesCalculator* __valuesCalculator;
	PLPhotoEditRenderer* __mainRenderer;
	PURedeyeToolController* __redEyeController;
	PUPhotoEditAggregateSession* __aggregateSession;
	PUPhotoEditResourceLoader* __resourceLoader;
	long long __workImageVersion;
	PICompositionController* __compositionController;
	NUComposition* __uneditedComposition;
	NUComposition* __originalComposition;
	PUPhotoEditIrisModel* __photoEditIrisModel;
	PLEditSource* __editSource;
	PLEditSource* _overCaptureEditSource;
	NSURL* _overCaptureEditSourceURL;
	long long _editSourceSelection;
	long long _overcaptureType;
	NSString* __editSourceUTI;
	PHContentEditingInput* __editSourceContentEditingInput;
	PLEditSource* __originalImageEditSource;
	unsigned long long _originalReframeVariation;
	PLEditSource* _originalOvercaptureEditSource;
	long long __originalImageExifOrientation;
	long long __originalExifOrientation;
	long long __assetChangeDismissalState;
	long long __saveCompetionDismissalState;
	NSTimer* _assetChangeTimeoutTimer;
	long long __previewRenderType;
	PLPhotoEditRenderer* __previewingOriginalRenderer;
	UIAlertController* __cancelConfirmationAlert;
	UIAlertController* __revertConfirmationAlert;
	UIAlertController* __jpegPreviewForRawConfirmationAlert;
	UIAlertController* __irisRevertConfirmationAlert;
	UIAlertController* __saveTrimOptionsAlert;
	long long _mediaViewEdgeInsetsUpdateDisableCount;
	UIPencilInteraction* _pencilInteraction;
	PUPhotoEditPerfHUD* _perfHUD;
	PUPhotoEditReframeHUD* _reframeHUD;
	CGImageRef _gainMapImage;
	PUPhotoSceneHUD* _sceneHUD;
	PXTimeInterval* _enterEditTimeInterval;
	PXTimeInterval* _resourceCheckingInterval;
	PXTimeInterval* _resourceDownloadInterval;
	PXTimeInterval* _resourceLoadingInterval;
	PXTimeInterval* _autoCalcInterval;
	PXTimeInterval* _filterInterval;
	PXTimeInterval* _exitEditTimeInterval;
	PUEnterEditPerformanceEventBuilder* _enterEditEventBuilder;
	PUExitEditPerformanceEventBuilder* _exitEditEventBuilder;
	/*^block*/id _ppt_afterRenderBlock;
	/*^block*/id _ppt_afterAutoenhanceBlock;
	/*^block*/id _ppt_willBeginPlaybackBlock;
	/*^block*/id _ppt_didEndPlaybackBlock;
	/*^block*/id _ppt_editIsReadyNotificationBlock;
	/*^block*/id _ppt_exitActionCompleteNotificationBlock;
	CGSize __layoutReferenceSize;
	CGSize __lastKnownPreviewImageSize;
	SCD_Struct_PH4 __initialSeekTime;
	SCD_Struct_PH4 __originalStillImageTime;

}

@property (nonatomic,retain) PXImageLayerModulator * imageLayerModulator;                                                                                //@synthesize imageLayerModulator=_imageLayerModulator - In the implementation block
@property (nonatomic,retain) PXLivePhotoViewModulator * livePhotoViewModulator;                                                                          //@synthesize livePhotoViewModulator=_livePhotoViewModulator - In the implementation block
@property (nonatomic,readonly) PXImageLayerModulator * placeholderImageLayerModulator;                                                                   //@synthesize placeholderImageLayerModulator=_placeholderImageLayerModulator - In the implementation block
@property (assign,setter=_setInitialSeekTime:,nonatomic) SCD_Struct_PH4 _initialSeekTime;                                                                //@synthesize _initialSeekTime=__initialSeekTime - In the implementation block
@property (assign,setter=_setLayoutOrientation:,nonatomic) long long layoutOrientation;                                                                  //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (setter=_setValuesCalculator:,nonatomic,retain) PUPhotoEditValuesCalculator * _valuesCalculator;                                               //@synthesize _valuesCalculator=__valuesCalculator - In the implementation block
@property (setter=_setMainRenderer:,nonatomic,retain) PLPhotoEditRenderer * _mainRenderer;                                                               //@synthesize _mainRenderer=__mainRenderer - In the implementation block
@property (setter=_setRedEyeController:,nonatomic,retain) PURedeyeToolController * _redEyeController;                                                    //@synthesize _redEyeController=__redEyeController - In the implementation block
@property (setter=_setAggregateSession:,nonatomic,retain) PUPhotoEditAggregateSession * _aggregateSession;                                               //@synthesize _aggregateSession=__aggregateSession - In the implementation block
@property (setter=_setResourceLoader:,nonatomic,retain) PUPhotoEditResourceLoader * _resourceLoader;                                                     //@synthesize _resourceLoader=__resourceLoader - In the implementation block
@property (assign,setter=_setWorkImageVersion:,nonatomic) long long _workImageVersion;                                                                   //@synthesize _workImageVersion=__workImageVersion - In the implementation block
@property (setter=_setCompositionController:,nonatomic,retain) PICompositionController * _compositionController;                                         //@synthesize _compositionController=__compositionController - In the implementation block
@property (setter=_setUneditedComposition:,nonatomic,copy) NUComposition * _uneditedComposition;                                                         //@synthesize _uneditedComposition=__uneditedComposition - In the implementation block
@property (setter=_setOriginalComposition:,nonatomic,copy) NUComposition * _originalComposition;                                                         //@synthesize _originalComposition=__originalComposition - In the implementation block
@property (setter=_setPhotoEditIrisModel:,nonatomic,retain) PUPhotoEditIrisModel * _photoEditIrisModel;                                                  //@synthesize _photoEditIrisModel=__photoEditIrisModel - In the implementation block
@property (nonatomic,readonly) BOOL isVideoOn; 
@property (nonatomic,readonly) BOOL isLoopingVideo; 
@property (setter=_setEditSource:,nonatomic,retain) PLEditSource * _editSource;                                                                          //@synthesize _editSource=__editSource - In the implementation block
@property (setter=_setOverCaptureEditSource:,nonatomic,retain) PLEditSource * overCaptureEditSource;                                                     //@synthesize overCaptureEditSource=_overCaptureEditSource - In the implementation block
@property (setter=_setOverCaptureEditSourceURL:,nonatomic,retain) NSURL * overCaptureEditSourceURL;                                                      //@synthesize overCaptureEditSourceURL=_overCaptureEditSourceURL - In the implementation block
@property (readonly) long long editSourceSelection;                                                                                                      //@synthesize editSourceSelection=_editSourceSelection - In the implementation block
@property (assign,nonatomic) long long overcaptureType;                                                                                                  //@synthesize overcaptureType=_overcaptureType - In the implementation block
@property (setter=_setEditSourceUTI:,nonatomic,retain) NSString * _editSourceUTI;                                                                        //@synthesize _editSourceUTI=__editSourceUTI - In the implementation block
@property (setter=_setEditSourceContentEditingInput:,nonatomic,retain) PHContentEditingInput * _editSourceContentEditingInput;                           //@synthesize _editSourceContentEditingInput=__editSourceContentEditingInput - In the implementation block
@property (assign,setter=_setHasLoadedRaw:,nonatomic) BOOL _hasLoadedRaw;                                                                                //@synthesize _hasLoadedRaw=__hasLoadedRaw - In the implementation block
@property (setter=_setOriginalImageEditSource:,nonatomic,retain) PLEditSource * _originalImageEditSource;                                                //@synthesize _originalImageEditSource=__originalImageEditSource - In the implementation block
@property (assign,nonatomic) unsigned long long originalReframeVariation;                                                                                //@synthesize originalReframeVariation=_originalReframeVariation - In the implementation block
@property (nonatomic,retain) PLEditSource * originalOvercaptureEditSource;                                                                               //@synthesize originalOvercaptureEditSource=_originalOvercaptureEditSource - In the implementation block
@property (assign,setter=_setOriginalImageExifOrientation:,nonatomic) long long _originalImageExifOrientation;                                           //@synthesize _originalImageExifOrientation=__originalImageExifOrientation - In the implementation block
@property (assign,setter=_setOriginalExifOrientation:,nonatomic) long long _originalExifOrientation;                                                     //@synthesize _originalExifOrientation=__originalExifOrientation - In the implementation block
@property (assign,setter=_setPenultimateAvailable:,getter=_isPenultimateAvailable,nonatomic) BOOL _penultimateAvailable;                                 //@synthesize _penultimateAvailable=__penultimateAvailable - In the implementation block
@property (assign,setter=_setOriginalStillImageTime:,nonatomic) SCD_Struct_PH4 _originalStillImageTime;                                                  //@synthesize _originalStillImageTime=__originalStillImageTime - In the implementation block
@property (assign,setter=_setIsCachingVideo:,nonatomic) BOOL _isCachingVideo; 
@property (assign,getter=isRunningAutoCalculators,nonatomic) BOOL runningAutoCalculators;                                                                //@synthesize runningAutoCalculators=_runningAutoCalculators - In the implementation block
@property (assign,nonatomic) BOOL isTransitioningFromDownloadingToRunningAutoCalculators;                                                                //@synthesize isTransitioningFromDownloadingToRunningAutoCalculators=_isTransitioningFromDownloadingToRunningAutoCalculators - In the implementation block
@property (assign,setter=_setRevertingToOriginal:,getter=_isRevertingToOriginal,nonatomic) BOOL _revertingToOriginal;                                    //@synthesize _revertingToOriginal=__revertingToOriginal - In the implementation block
@property (assign,setter=_setAssetChangeDismissalState:,nonatomic) long long _assetChangeDismissalState;                                                 //@synthesize _assetChangeDismissalState=__assetChangeDismissalState - In the implementation block
@property (assign,setter=_setSaveCompletionDismissalState:,nonatomic) long long _saveCompetionDismissalState;                                            //@synthesize _saveCompetionDismissalState=__saveCompetionDismissalState - In the implementation block
@property (nonatomic,retain) NSTimer * assetChangeTimeoutTimer;                                                                                          //@synthesize assetChangeTimeoutTimer=_assetChangeTimeoutTimer - In the implementation block
@property (assign,setter=_setPreviewRenderType:,nonatomic) long long _previewRenderType;                                                                 //@synthesize _previewRenderType=__previewRenderType - In the implementation block
@property (assign,setter=_setLayoutReferenceSize:,nonatomic) CGSize _layoutReferenceSize;                                                                //@synthesize _layoutReferenceSize=__layoutReferenceSize - In the implementation block
@property (assign,setter=_setShouldBePreviewingOriginal:,nonatomic) BOOL _shouldBePreviewingOriginal;                                                    //@synthesize _shouldBePreviewingOriginal=__shouldBePreviewingOriginal - In the implementation block
@property (setter=_setPreviewingOriginalRenderer:,nonatomic,retain) PLPhotoEditRenderer * _previewingOriginalRenderer;                                   //@synthesize _previewingOriginalRenderer=__previewingOriginalRenderer - In the implementation block
@property (assign,setter=_setCancelConfirmationAlert:,nonatomic,__weak) UIAlertController * _cancelConfirmationAlert;                                    //@synthesize _cancelConfirmationAlert=__cancelConfirmationAlert - In the implementation block
@property (assign,setter=_setRevertConfirmationAlert:,nonatomic,__weak) UIAlertController * _revertConfirmationAlert;                                    //@synthesize _revertConfirmationAlert=__revertConfirmationAlert - In the implementation block
@property (assign,setter=_setJpegPreviewForRawConfirmationAlert:,nonatomic,__weak) UIAlertController * _jpegPreviewForRawConfirmationAlert;              //@synthesize _jpegPreviewForRawConfirmationAlert=__jpegPreviewForRawConfirmationAlert - In the implementation block
@property (assign,setter=_setIrisRevertConfirmationAlert:,nonatomic,__weak) UIAlertController * _irisRevertConfirmationAlert;                            //@synthesize _irisRevertConfirmationAlert=__irisRevertConfirmationAlert - In the implementation block
@property (assign,setter=_setSaveTrimOptionsAlert:,nonatomic,__weak) UIAlertController * _saveTrimOptionsAlert;                                          //@synthesize _saveTrimOptionsAlert=__saveTrimOptionsAlert - In the implementation block
@property (assign,setter=_setLastKnownPreviewImageSize:,nonatomic) CGSize _lastKnownPreviewImageSize;                                                    //@synthesize _lastKnownPreviewImageSize=__lastKnownPreviewImageSize - In the implementation block
@property (assign,nonatomic) BOOL burningInTrim;                                                                                                         //@synthesize burningInTrim=_burningInTrim - In the implementation block
@property (nonatomic,readonly) UIMenu * askToSaveAsNewClipMenu; 
@property (assign,nonatomic) long long mediaViewEdgeInsetsUpdateDisableCount;                                                                            //@synthesize mediaViewEdgeInsetsUpdateDisableCount=_mediaViewEdgeInsetsUpdateDisableCount - In the implementation block
@property (nonatomic,retain) UIPencilInteraction * pencilInteraction;                                                                                    //@synthesize pencilInteraction=_pencilInteraction - In the implementation block
@property (nonatomic,retain) PUPhotoEditPerfHUD * perfHUD;                                                                                               //@synthesize perfHUD=_perfHUD - In the implementation block
@property (nonatomic,retain) PUPhotoEditReframeHUD * reframeHUD;                                                                                         //@synthesize reframeHUD=_reframeHUD - In the implementation block
@property (nonatomic,retain) CGImageRef gainMapImage;                                                                                                    //@synthesize gainMapImage=_gainMapImage - In the implementation block
@property (assign,nonatomic) float gainMapValue;                                                                                                         //@synthesize gainMapValue=_gainMapValue - In the implementation block
@property (nonatomic,retain) PUPhotoSceneHUD * sceneHUD;                                                                                                 //@synthesize sceneHUD=_sceneHUD - In the implementation block
@property (assign,getter=isFirstSinceBoot,nonatomic) BOOL firstSinceBoot;                                                                                //@synthesize firstSinceBoot=_firstSinceBoot - In the implementation block
@property (assign,getter=isFirstSinceLaunch,nonatomic) BOOL firstSinceLaunch;                                                                            //@synthesize firstSinceLaunch=_firstSinceLaunch - In the implementation block
@property (nonatomic,retain) PXTimeInterval * enterEditTimeInterval;                                                                                     //@synthesize enterEditTimeInterval=_enterEditTimeInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * resourceCheckingInterval;                                                                                  //@synthesize resourceCheckingInterval=_resourceCheckingInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * resourceDownloadInterval;                                                                                  //@synthesize resourceDownloadInterval=_resourceDownloadInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * resourceLoadingInterval;                                                                                   //@synthesize resourceLoadingInterval=_resourceLoadingInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * autoCalcInterval;                                                                                          //@synthesize autoCalcInterval=_autoCalcInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * filterInterval;                                                                                            //@synthesize filterInterval=_filterInterval - In the implementation block
@property (nonatomic,retain) PXTimeInterval * exitEditTimeInterval;                                                                                      //@synthesize exitEditTimeInterval=_exitEditTimeInterval - In the implementation block
@property (nonatomic,retain) PUEnterEditPerformanceEventBuilder * enterEditEventBuilder;                                                                 //@synthesize enterEditEventBuilder=_enterEditEventBuilder - In the implementation block
@property (nonatomic,retain) PUExitEditPerformanceEventBuilder * exitEditEventBuilder;                                                                   //@synthesize exitEditEventBuilder=_exitEditEventBuilder - In the implementation block
@property (copy) id ppt_afterRenderBlock;                                                                                                                //@synthesize ppt_afterRenderBlock=_ppt_afterRenderBlock - In the implementation block
@property (copy) id ppt_afterAutoenhanceBlock;                                                                                                           //@synthesize ppt_afterAutoenhanceBlock=_ppt_afterAutoenhanceBlock - In the implementation block
@property (copy) id ppt_willBeginPlaybackBlock;                                                                                                          //@synthesize ppt_willBeginPlaybackBlock=_ppt_willBeginPlaybackBlock - In the implementation block
@property (copy) id ppt_didEndPlaybackBlock;                                                                                                             //@synthesize ppt_didEndPlaybackBlock=_ppt_didEndPlaybackBlock - In the implementation block
@property (nonatomic,copy) id ppt_editIsReadyNotificationBlock;                                                                                          //@synthesize ppt_editIsReadyNotificationBlock=_ppt_editIsReadyNotificationBlock - In the implementation block
@property (nonatomic,copy) id ppt_exitActionCompleteNotificationBlock;                                                                                   //@synthesize ppt_exitActionCompleteNotificationBlock=_ppt_exitActionCompleteNotificationBlock - In the implementation block
@property (nonatomic,readonly) PUPhotoEditViewControllerSpec * photoEditSpec;                                                                            //@synthesize photoEditSpec=_photoEditSpec - In the implementation block
@property (nonatomic,readonly) NSObject*<PUEditableAsset> photo;                                                                                         //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;                                                                                  //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PUMediaDestination * mediaDestination;                                                                                    //@synthesize mediaDestination=_mediaDestination - In the implementation block
@property (nonatomic,readonly) CGRect previewViewFrame; 
@property (assign,nonatomic,__weak) id<PUPhotoEditViewControllerPresentationDelegate> presentationDelegate;                                              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditViewControllerSessionDelegate> sessionDelegate;                                                        //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)_defaultMediaViewRenderPipelineFilters;
+(id)_defaultLivePhotoRenderPipelineFilters;
+(void)preheatEditDependenciesIfNeeded;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(PXImageLayerModulator *)imageLayerModulator;
-(void)_updateBackgroundColor;
-(void)setGainMapImage:(CGImageRef)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(void)setImageLayerModulator:(PXImageLayerModulator *)arg1 ;
-(PUEditableMediaProvider *)mediaProvider;
-(void)viewWillLayoutSubviews;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(CGImageRef)gainMapImage;
-(float)gainMapValue;
-(long long)layoutOrientation;
-(NSObject*<PUEditableAsset>)photo;
-(double)px_imageModulationIntensity;
-(id)initWithPhoto:(id)arg1 mediaProvider:(id)arg2 mediaDestination:(id)arg3 ;
-(UIAlertController *)_irisRevertConfirmationAlert;
-(void)_setIrisRevertConfirmationAlert:(id)arg1 ;
-(void)_setSaveTrimOptionsAlert:(id)arg1 ;
-(CGSize)_lastKnownPreviewImageSize;
-(long long)mediaViewEdgeInsetsUpdateDisableCount;
-(void)setMediaViewEdgeInsetsUpdateDisableCount:(long long)arg1 ;
-(void)setReframeHUD:(PUPhotoEditReframeHUD *)arg1 ;
-(UIPencilInteraction *)pencilInteraction;
-(void)setPencilInteraction:(UIPencilInteraction *)arg1 ;
-(PUEnterEditPerformanceEventBuilder *)enterEditEventBuilder;
-(void)setEnterEditEventBuilder:(PUEnterEditPerformanceEventBuilder *)arg1 ;
-(PUExitEditPerformanceEventBuilder *)exitEditEventBuilder;
-(void)setExitEditEventBuilder:(PUExitEditPerformanceEventBuilder *)arg1 ;
-(id)ppt_afterRenderBlock;
-(void)setPpt_afterRenderBlock:(id)arg1 ;
-(id)ppt_afterAutoenhanceBlock;
-(void)setPpt_afterAutoenhanceBlock:(id)arg1 ;
-(id)ppt_willBeginPlaybackBlock;
-(void)setPpt_willBeginPlaybackBlock:(id)arg1 ;
-(id)ppt_didEndPlaybackBlock;
-(void)setPpt_didEndPlaybackBlock:(id)arg1 ;
-(id)ppt_editIsReadyNotificationBlock;
-(void)setPpt_editIsReadyNotificationBlock:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)ppt_exitActionCompleteNotificationBlock;
-(void)setPpt_exitActionCompleteNotificationBlock:(id)arg1 ;
-(id<PUPhotoEditViewControllerSessionDelegate>)sessionDelegate;
-(PUPhotoEditPerfHUD *)perfHUD;
-(PUPhotoEditValuesCalculator *)_valuesCalculator;
-(void)setSessionDelegate:(id<PUPhotoEditViewControllerSessionDelegate>)arg1 ;
-(id)_composition;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isVideoOn;
-(void)ppt_scrollSelectedSliderByDelta;
-(void)compositionControllerDidChangeForAdjustments:(id)arg1 ;
-(void)updateProgressIndicatorAnimated:(BOOL)arg1 ;
-(id)toolControllerMainRenderer:(id)arg1 ;
-(id)toolControllerUneditedCompositionController:(id)arg1 ;
-(unsigned long long)toolControllerSourceAssetType:(id)arg1 ;
-(id)toolControllerMainContainerView:(id)arg1 ;
-(PUPhotoEditViewControllerSpec *)photoEditSpec;
-(long long)_originalExifOrientation;
-(void)_handleDoneButton:(id)arg1 ;
-(void)_setLayoutReferenceSize:(CGSize)arg1 ;
-(void)photoEditResourceLoadRequestWillBeginDownload:(id)arg1 ;
-(void)photoEditResourceLoadRequestDidCompleteDownload:(id)arg1 ;
-(void)photoEditResourceLoadRequest:(id)arg1 downloadProgress:(double)arg2 ;
-(void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2 ;
-(void)photoEditResourceLoadRequestResourcesAvailabilityChanged:(id)arg1 previousAvailability:(long long)arg2 currentAvailability:(long long)arg3 ;
-(void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)_updateSubviewsOrdering;
-(BOOL)_hasUnsavedChanges;
-(void)toolController:(id)arg1 switchEditSource:(long long)arg2 ;
-(long long)overcaptureType;
-(CGSize)toolControllerOriginalOrientedImageSize:(id)arg1 ;
-(void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1 ;
-(BOOL)isStandardVideo;
-(BOOL)hasLoopingVideoAdjustment;
-(BOOL)isLoopingVideo;
-(id)toolControllerOriginalCompositionController:(id)arg1 ;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 ;
-(void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(BOOL)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(SCD_Struct_PU24)toolControllerImageModulationOptions:(id)arg1 ;
-(void)toolControllerRequestLivePhoto:(id)arg1 filters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)oneUpAssetTransitionWillBegin:(id)arg1 ;
-(void)oneUpAssetTransitionDidEnd:(id)arg1 ;
-(void)ppt_save;
-(id<PUPhotoEditViewControllerPresentationDelegate>)presentationDelegate;
-(void)toolControllerDidUpdateToolbar:(id)arg1 ;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsNavigationBarVisible;
-(PUPhotoSceneHUD *)sceneHUD;
-(PUPhotoEditResourceLoader *)_resourceLoader;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)_showProgressIndicator;
-(void)setGainMapValue:(float)arg1 ;
-(void)setEnterEditTimeInterval:(PXTimeInterval *)arg1 ;
-(void)setResourceCheckingInterval:(PXTimeInterval *)arg1 ;
-(void)setAutoCalcInterval:(PXTimeInterval *)arg1 ;
-(void)setResourceDownloadInterval:(PXTimeInterval *)arg1 ;
-(void)setResourceLoadingInterval:(PXTimeInterval *)arg1 ;
-(void)setFilterInterval:(PXTimeInterval *)arg1 ;
-(void)setExitEditTimeInterval:(PXTimeInterval *)arg1 ;
-(PXTimeInterval *)enterEditTimeInterval;
-(PXTimeInterval *)resourceCheckingInterval;
-(PXTimeInterval *)resourceDownloadInterval;
-(PXTimeInterval *)resourceLoadingInterval;
-(PXTimeInterval *)autoCalcInterval;
-(PXTimeInterval *)filterInterval;
-(PXTimeInterval *)exitEditTimeInterval;
-(void)photoLibraryChangesPausedDidChange;
-(id)_allTools;
-(void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned long long)arg2 ;
-(void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(/*^block*/id)arg2 ;
-(void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)editPluginSessionWillBegin:(id)arg1 ;
-(id)pluginActivitiesForEditPluginSession:(id)arg1 ;
-(void)editPluginSession:(id)arg1 loadThumbnailImageWithSize:(CGSize)arg2 loadHandler:(/*^block*/id)arg3 ;
-(void)editPluginSessionAvailabilityDidChange:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)_setCompositionController:(id)arg1 ;
-(SCD_Struct_PH4)_originalStillImageTime;
-(void)_handleCancelButton:(id)arg1 ;
-(void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(/*^block*/id)arg2 ;
-(void)editPluginSession:(id)arg1 loadDisplaySizeImageWithHandler:(/*^block*/id)arg2 ;
-(void)editPluginSession:(id)arg1 loadFullSizeImageWithHandler:(/*^block*/id)arg2 ;
-(void)editPluginSession:(id)arg1 loadVideoComplementURLWithHandler:(/*^block*/id)arg2 ;
-(void)mediaViewDidUpdateLivePhoto:(id)arg1 ;
-(void)mediaViewWillBeginZooming:(id)arg1 ;
-(void)mediaViewDidEndZooming:(id)arg1 ;
-(void)mediaViewIsReadyForVideoPlayback:(id)arg1 ;
-(void)mediaViewDidStartPreparingVideo:(id)arg1 ;
-(void)mediaViewDidFinishPreparingVideo:(id)arg1 ;
-(void)mediaViewWillBeginLivePhotoPlayback:(id)arg1 ;
-(void)mediaViewDidEndLivePhotoPlayback:(id)arg1 ;
-(void)toggleLivePhotoActive;
-(void)updateMutedState;
-(void)viewDidLoad;
-(NUComposition *)_originalComposition;
-(void)configureEnablenessOfControlButton:(id)arg1 animated:(BOOL)arg2 canVisuallyDisable:(BOOL)arg3 ;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)isHighframeRateVideo;
-(id)mainLivePhotoView;
-(void)dismissLivePhotoRevertConfirmationAlert;
-(id)fontForButtons;
-(long long)preferredUserInterfaceStyle;
-(id)toolControllerPlaceholderImage:(id)arg1 ;
-(void)_setOriginalComposition:(id)arg1 ;
-(CGSize)_layoutReferenceSize;
-(void)setPresentationDelegate:(id<PUPhotoEditViewControllerPresentationDelegate>)arg1 ;
-(long long)_workImageVersion;
-(long long)sourceSelection;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)_setLayoutOrientation:(long long)arg1 ;
-(void)_setWorkImageVersion:(long long)arg1 ;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)toolControllerHitEventForwardView:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(PUPhotoEditAggregateSession *)_aggregateSession;
-(void)_updateTraitCollectionAndLayoutReferenceSize:(CGSize)arg1 ;
-(void)setPerfHUD:(PUPhotoEditPerfHUD *)arg1 ;
-(void)_updateTraitCollectionAndLayoutReferenceSize;
-(void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1 ;
-(void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1 ;
-(double)px_HDRFocus;
-(void)dismissAccessibilityHUDForPhotoEditToolbar:(id)arg1 ;
-(void)photoEditToolbar:(id)arg1 showAccessibilityHUDForItem:(id)arg2 ;
-(id)photoEditToolbar:(id)arg1 accessibilityHUDItemForButton:(id)arg2 ;
-(void)setLivePhotoViewModulator:(PXLivePhotoViewModulator *)arg1 ;
-(BOOL)isFirstSinceBoot;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)ppt_revert;
-(void)setFirstSinceBoot:(BOOL)arg1 ;
-(BOOL)isFirstSinceLaunch;
-(void)setFirstSinceLaunch:(BOOL)arg1 ;
-(void)pencilInteractionDidTap:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(PXLivePhotoViewModulator *)livePhotoViewModulator;
-(void)ppt_setEditIsReadyNotificationBlock:(/*^block*/id)arg1 ;
-(void)ppt_applyAutoenhance:(/*^block*/id)arg1 ;
-(void)ppt_cancelEditsWithCompletion:(/*^block*/id)arg1 ;
-(void)ppt_saveWithCompletion:(/*^block*/id)arg1 ;
-(void)ppt_revertWithCompletion:(/*^block*/id)arg1 ;
-(void)trimToolPlayerWrapper:(id)arg1 requestPlayerItemWithFilters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)compositionController:(id)arg1 didAddAdjustment:(id)arg2 ;
-(BOOL)isImageZooming;
-(void)compositionController:(id)arg1 didRemoveAdjustment:(id)arg2 ;
-(void)compositionController:(id)arg1 didUpdateAdjustment:(id)arg2 ;
-(void)compositionController:(id)arg1 didUpdateAdjustments:(id)arg2 ;
-(id)toolControllerLivePhoto:(id)arg1 ;
-(void)mediaViewDidFinishRendering:(id)arg1 withStatistics:(id)arg2 ;
-(void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(/*^block*/id)arg2 ;
-(void)toolControllerDidFinishLoadingThumbnails:(id)arg1 ;
-(void)toolController:(id)arg1 updateModelDependentControlsAnimated:(BOOL)arg2 ;
-(id)toolControllerPreviewView:(id)arg1 ;
-(CGSize)toolControllerOriginalImageSize:(id)arg1 ;
-(void)toolControllerDidFinish:(id)arg1 ;
-(CGPoint)toolController:(id)arg1 originalPointFromViewPoint:(CGPoint)arg2 view:(id)arg3 ;
-(CGPoint)toolController:(id)arg1 viewPointFromOriginalPoint:(CGPoint)arg2 view:(id)arg3 ;
-(BOOL)isImageFrameReady;
-(CGRect)previewViewFrame;
-(BOOL)_isReadyToRender;
-(void)_updateProgressEventBlockingViewConstraints;
-(CGRect)_placeholderViewFrameForImageSize:(CGSize)arg1 ;
-(CGRect)_oneUpTransitionPlaceholderViewFrame;
-(void)_clearBadgeConstraints;
-(void)_setLastKnownPreviewImageSize:(CGSize)arg1 ;
-(void)_clearToolbars;
-(BOOL)currentAssetNeedsGainMap;
-(id)_currentViewContentsForDismissTransition;
-(void)_setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_updateRenderedPreviewForceRender:(BOOL)arg1 ;
-(void)_updateToolbarsAnimated:(BOOL)arg1 ;
-(void)_updateAlternateToolbarAnimated:(BOOL)arg1 ;
-(BOOL)_wantsTTRButton;
-(PUPhotoEditReframeHUD *)reframeHUD;
-(void)_updateToolbarsContentPadding;
-(void)_reloadToolbarButtonsIfNeeded;
-(void)_updateToolbarButtonPositions;
-(id)_newToolButtonForTool:(id)arg1 ;
-(void)_updateToolbarBackgroundAnimated:(BOOL)arg1 ;
-(void)_updateSpecDependentUIPieces;
-(BOOL)_hasAdjustedSlowMotion;
-(void)_updateModelDependentControlsAnimated:(BOOL)arg1 ;
-(BOOL)_canCompositionControllerBeReverted:(id)arg1 ;
-(void)_updateMainActionButtonAnimated:(BOOL)arg1 ;
-(void)_updateCancelButtonAnimated:(BOOL)arg1 ;
-(void)_updateAutoEnhanceButtonAnimated:(BOOL)arg1 ;
-(void)_updatePluginButtonAnimated:(BOOL)arg1 ;
-(BOOL)_shouldDisplayDepthButtonInToolbar;
-(BOOL)_shouldShowDepthControl;
-(void)_updateMediaViewLayoutWithCoordinator:(id)arg1 layoutOrientation:(long long)arg2 ;
-(void)_updateMediaViewEdgeInsets;
-(UIEdgeInsets)_currentToolPreviewInsets;
-(UIEdgeInsets)_mediaViewEdgeInsets;
-(void)_handleTTRButton:(id)arg1 ;
-(void)_hideProgressIndicatorImmediately:(BOOL)arg1 ;
-(void)_updateProgressIndicatorInteractionDisabledWithReason:(long long)arg1 showsIndicator:(BOOL)arg2 isSavingWithProgress:(BOOL)arg3 ;
-(void)_updatePlaceholderImage;
-(void)_updateLayoutOrientationWithViewSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(BOOL)_shouldDisplayRedEyeTool;
-(void)_updateLayerModulation;
-(void)_setShouldBePreviewingOriginal:(BOOL)arg1 ;
-(void)_setPreviewRenderType:(long long)arg1 ;
-(BOOL)_isPreviewingOriginal;
-(void)_updatePreviewingOriginal;
-(void)_updatePreviewingOriginalBadge;
-(void)_handleRunFinalizerGesture:(id)arg1 ;
-(void)_runFinalizerWithDebugMessages:(BOOL)arg1 ;
-(void)_handleToolbarToolButton:(id)arg1 ;
-(void)_showCancelAndRevertOptionsAllowResetTool:(BOOL)arg1 ;
-(void)_resignCurrentTool;
-(void)_showJpegPreviewForRawRevertAlert;
-(void)_handleMainActionButton:(id)arg1 ;
-(void)_handleSaveAction:(long long)arg1 ;
-(void)_saveTrimAsCopyForCompositionController:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)_handleRevertButton:(id)arg1 ;
-(int)_saveRevertedComposition:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(int)_revertToEmptyCompositionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performRevertAction;
-(void)switchEditSource:(long long)arg1 ;
-(void)resourcesForRevertAllowingDownload:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRevertResult:(id)arg1 error:(id)arg2 ;
-(void)_performDiscardAction;
-(void)_startWaitingForAssetChange:(id)arg1 ;
-(void)_startTimeoutTimerForAssetChange;
-(void)_timeoutWaitingForAssetChange;
-(NSString *)_editSourceUTI;
-(void)_stopWaitingForAssetChangeWithAsset:(id)arg1 success:(BOOL)arg2 ;
-(BOOL)_isWaitingForAssetChange;
-(void)_startWaitingForSaveRequestID:(int)arg1 ;
-(void)_stopWaitingForSaveRequestWithAsset:(id)arg1 ;
-(BOOL)_isWaitingForSaveCompletion;
-(void)_startMonitoringSaveProgressIfNeeded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_stopMonitoringSaveProgress;
-(void)_updateSaveProgress;
-(BOOL)_isSaveProgressAvailable;
-(void)_cancelInProgressSaveRequest;
-(void)_notifyDelegateSaveFinishedIfReadyWithAsset:(id)arg1 ;
-(void)_handlePluginButton:(id)arg1 ;
-(void)_handleAutoEnhanceButton:(id)arg1 ;
-(BOOL)_isCachingVideo;
-(void)_setPlaybackEnabled:(BOOL)arg1 ;
-(void)_handleLivePhotoTouchRecognizer:(id)arg1 ;
-(void)_presentWarningForIrisRemovesEditsWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateTrashedStateForOvercaptureResources;
-(void)reinstateTrashedStateForOvercaptureResources;
-(BOOL)burningInTrim;
-(void)_createPencilInteractionIfNeeded;
-(void)_startMarkupSession;
-(void)_updateTogglePreviewGestureRecognizer;
-(void)_handleTogglePreviewTapGesture:(id)arg1 ;
-(id)_livePhotoGestureRecognizer;
-(void)_updateLivePhotoPlaybackGestureRecognizer;
-(BOOL)_isLoopingVideo:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_loadPhotoEditResourcesIfNeeded;
-(void)_loadOriginalImageIfNeeded;
-(void)_handleDidLoadAdjustmentsAndBaseImageWithResult:(id)arg1 ;
-(void)_updateMediaViewPlaybackStyle;
-(void)_handleDidLoadOriginalWithResult:(id)arg1 ;
-(void)_handleResourceLoadChange;
-(void)_updateValuesCalculator;
-(void)_setUneditedComposition:(id)arg1 ;
-(void)_setOriginalURL:(id)arg1 originalEditSource:(id)arg2 originalOvercaptureSource:(id)arg3 ;
-(void)_setOriginalStillImageTime:(SCD_Struct_PH4)arg1 ;
-(id)_orientedCIImageFromUIImage:(id)arg1 ;
-(void)_updatePhotoEditIrisModel;
-(void)_didEndAutoCalc;
-(void)_resetModelAndBaseImagesToWorkImageVersion:(long long)arg1 ;
-(void)_captureSnapshotOfBasePhotoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_restoreSnapshot:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_requestLivePhotoAssetWithFilters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRunningAutoCalculators:(BOOL)arg1 ;
-(void)_setIsCachingVideo:(BOOL)arg1 ;
-(BOOL)_shouldRequestAsyncAdjustmentForAsset:(id)arg1 compositionController:(id)arg2 ;
-(id)_newOutputForContentEditingInput:(id)arg1 compositionController:(id)arg2 ;
-(void)_loadToolsIfNeeded;
-(void)_loadToolsIfNeeded:(BOOL)arg1 ;
-(void)_setupToolsIfNeeded;
-(PLPhotoEditRenderer *)_mainRenderer;
-(id)_defaultInitialEditingTool;
-(id)_defaultRenderPipelineFiltersForCurrentMode;
-(void)switchToEditingTool:(id)arg1 animated:(BOOL)arg2 ;
-(void)_chooseInitialEditingTool;
-(void)_transitionToEditingTool:(id)arg1 animated:(BOOL)arg2 ;
-(id)_createMediaView;
-(void)_updatePluginWorkImageVersion;
-(void)_transitionToNewToolViewController:(id)arg1 oldToolViewController:(id)arg2 animationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 animated:(BOOL)arg5 ;
-(long long)currentToolPickerLayoutDirection;
-(void)_handleMediaViewReady:(id)arg1 statistics:(id)arg2 ;
-(void)_removePlaceholderImageViewIfNeeded;
-(BOOL)_hasLoadedRaw;
-(PLEditSource *)_editSource;
-(PICompositionController *)_compositionController;
-(void)viewDidLayoutSubviews;
-(void)_editPluginSession:(id)arg1 checkVideoEnabled:(BOOL)arg2 loadVideoComplementURLWithHandler:(/*^block*/id)arg3 ;
-(void)_updatePluginSession;
-(void)_setupImagePluginSession;
-(void)_setupVideoPluginSession;
-(void)_updatePenultimateAvailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didEndEnterEdit;
-(void)didFinishWithAsset:(id)arg1 savedChanges:(BOOL)arg2 ;
-(void)didFinishWithChanges:(BOOL)arg1 ;
-(void)_hideEphemeralViews:(BOOL)arg1 ;
-(void)_didStartExitAction;
-(void)_didEndExitActionWithSessionKeys:(id)arg1 ;
-(void)_didStartEnterEdit;
-(void)_didStartResourceLoading;
-(void)_didEndResourceLoading;
-(void)setSceneHUD:(PUPhotoSceneHUD *)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)_didStartAutoCalc;
-(void)ppt_cancelEdits;
-(void)ppt_executeAfterRender:(/*^block*/id)arg1 ;
-(void)_ppt_conditionallyExecuteAfterRender;
-(void)ppt_selectFiltersController:(/*^block*/id)arg1 ;
-(void)ppt_selectAdjustmentsController:(/*^block*/id)arg1 ;
-(void)ppt_selectCropController:(/*^block*/id)arg1 ;
-(void)ppt_scrollLightSlider:(/*^block*/id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)ppt_selectPerspectiveController:(/*^block*/id)arg1 ;
-(void)ppt_scrollColorSlider:(/*^block*/id)arg1 ;
-(void)ppt_scrollBWSlider:(/*^block*/id)arg1 ;
-(void)ppt_configureSelectedSliderWithSteps:(long long)arg1 ;
-(void)ppt_selectNextLightingEffect:(/*^block*/id)arg1 ;
-(void)ppt_playLivePhotoWithWillBeginPlaybackBlock:(/*^block*/id)arg1 didEndPlaybackBlock:(/*^block*/id)arg2 ;
-(id)ppt_renderStatisticsDictionaryForTimeInterval:(double)arg1 ;
-(UIMenu *)askToSaveAsNewClipMenu;
-(void)updateMainButtonForSaveAsNewClipMenu;
-(PXImageLayerModulator *)placeholderImageLayerModulator;
-(SCD_Struct_PH4)_initialSeekTime;
-(void)_setInitialSeekTime:(SCD_Struct_PH4)arg1 ;
-(void)_setValuesCalculator:(id)arg1 ;
-(id)mediaView;
-(void)_setMainRenderer:(id)arg1 ;
-(PURedeyeToolController *)_redEyeController;
-(void)_setRedEyeController:(id)arg1 ;
-(void)_setAggregateSession:(id)arg1 ;
-(void)_setResourceLoader:(id)arg1 ;
-(NUComposition *)_uneditedComposition;
-(PUPhotoEditIrisModel *)_photoEditIrisModel;
-(void)_setPhotoEditIrisModel:(id)arg1 ;
-(void)_setEditSource:(id)arg1 ;
-(PLEditSource *)overCaptureEditSource;
-(void)_setOverCaptureEditSource:(id)arg1 ;
-(NSURL *)overCaptureEditSourceURL;
-(void)_setOverCaptureEditSourceURL:(id)arg1 ;
-(long long)editSourceSelection;
-(void)setOvercaptureType:(long long)arg1 ;
-(void)_setEditSourceUTI:(id)arg1 ;
-(PHContentEditingInput *)_editSourceContentEditingInput;
-(void)_setEditSourceContentEditingInput:(id)arg1 ;
-(id)adjustmentConstants;
-(void)viewControllerSpec:(id)arg1 didChange:(id)arg2 ;
-(void)_setHasLoadedRaw:(BOOL)arg1 ;
-(PLEditSource *)_originalImageEditSource;
-(void)_setOriginalImageEditSource:(id)arg1 ;
-(unsigned long long)originalReframeVariation;
-(void)setOriginalReframeVariation:(unsigned long long)arg1 ;
-(PLEditSource *)originalOvercaptureEditSource;
-(void)setOriginalOvercaptureEditSource:(PLEditSource *)arg1 ;
-(void)setBurningInTrim:(BOOL)arg1 ;
-(id)_preferredStatusBarHideAnimationParameters;
-(void)dealloc;
-(long long)_originalImageExifOrientation;
-(void)_setOriginalImageExifOrientation:(long long)arg1 ;
-(void)_setOriginalExifOrientation:(long long)arg1 ;
-(BOOL)_isPenultimateAvailable;
-(void)_setPenultimateAvailable:(BOOL)arg1 ;
-(BOOL)isRunningAutoCalculators;
-(BOOL)_isRevertingToOriginal;
-(long long)_previewRenderType;
-(PUMediaDestination *)mediaDestination;
-(id)imageProperties;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)isTransitioningFromDownloadingToRunningAutoCalculators;
-(void)setIsTransitioningFromDownloadingToRunningAutoCalculators:(BOOL)arg1 ;
-(void)_setRevertingToOriginal:(BOOL)arg1 ;
-(long long)_assetChangeDismissalState;
-(void)_setAssetChangeDismissalState:(long long)arg1 ;
-(long long)_saveCompetionDismissalState;
-(void)_setSaveCompletionDismissalState:(long long)arg1 ;
-(NSTimer *)assetChangeTimeoutTimer;
-(void)setAssetChangeTimeoutTimer:(NSTimer *)arg1 ;
-(BOOL)_shouldBePreviewingOriginal;
-(PLPhotoEditRenderer *)_previewingOriginalRenderer;
-(void)_setPreviewingOriginalRenderer:(id)arg1 ;
-(UIAlertController *)_cancelConfirmationAlert;
-(void)_setCancelConfirmationAlert:(id)arg1 ;
-(UIAlertController *)_revertConfirmationAlert;
-(void)_setRevertConfirmationAlert:(id)arg1 ;
-(UIAlertController *)_jpegPreviewForRawConfirmationAlert;
-(void)_setJpegPreviewForRawConfirmationAlert:(id)arg1 ;
-(UIAlertController *)_saveTrimOptionsAlert;
@end

