/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperDelegate.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperAssetDisplayDelegate.h>
#import <libobjc.A.dylib/PLCameraPreviewWellImageChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol CAMCameraRollControllerSessionDelegate, CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerPresentationDelegate, OS_dispatch_source, OS_dispatch_queue;
@class UIGestureRecognizer, PUOneUpPresentationHelper, CAMTransientDataSource, CAMTransientImageManager, PUPhotoKitDataSourceManager, NSMutableSet, NSMutableDictionary, PXPhotosDataSource, NSObject, NSString;

@interface CAMCameraRollController : NSObject <PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, PHPhotoLibraryChangeObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIInteractionProgressObserver> {

	struct {
		BOOL respondsToSourceAssetRect;
		BOOL respondsToShouldHideSourceAsset;
		BOOL respondsToPreviewGestureDidBecomeAvailable;
		BOOL respondsToPreviewSourceRect;
		BOOL respondsToImageForReveal;
		BOOL respondsToRevealWillBegin;
		BOOL respondsToRevealDidEnd;
		BOOL respondsToWillPresentCameraRoll;
		BOOL respondsToPrefersPresentingStatusbarHiddenDidChange;
		BOOL respondsToPreferredPresentationOrientation;
	}  _presentationDelegateFlags;
	BOOL _prefersPresentingStatusbarHidden;
	BOOL __allowUpdating;
	BOOL __updateIsScheduled;
	BOOL __transientAssetsAreValid;
	BOOL __oneUpVisible;
	BOOL __oneUpFullyPresented;
	BOOL __didSetupMechanismsForStoppingCaptureSession;
	BOOL __didStopCaptureSession;
	BOOL __deferringStagedMediaLoading;
	BOOL __shouldSkipPhotosFrameworkPreheat;
	unsigned short _sessionIdentifier;
	id<CAMCameraRollControllerSessionDelegate> _sessionDelegate;
	id<CAMCameraRollControllerImageWellDelegate> _imageWellDelegate;
	id<CAMCameraRollControllerPresentationDelegate> _presentationDelegate;
	UIGestureRecognizer* _previewGestureRecognizer;
	PUOneUpPresentationHelper* __oneUpPresentationHelper;
	CAMTransientDataSource* __transientDataSource;
	CAMTransientImageManager* __transientImageManager;
	PUPhotoKitDataSourceManager* __photoKitDataSourceManager;
	NSMutableSet* __sessionAssetUUIDs;
	NSMutableSet* __ignoredEV0UUIDs;
	NSMutableDictionary* __HDRUUIDToIgnoredEV0UUIDs;
	PXPhotosDataSource* __photosDataSource;
	PXPhotosDataSource* __stagedDataSource;
	NSObject*<OS_dispatch_source> __memoryWarningSource;
	NSObject*<OS_dispatch_queue> __photosFrameworksPreheatQueue;

}

@property (assign,setter=_setSessionIdentifier:,nonatomic) unsigned short sessionIdentifier;                                                               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) PUOneUpPresentationHelper * _oneUpPresentationHelper;                                                                       //@synthesize _oneUpPresentationHelper=__oneUpPresentationHelper - In the implementation block
@property (nonatomic,readonly) CAMTransientDataSource * _transientDataSource;                                                                              //@synthesize _transientDataSource=__transientDataSource - In the implementation block
@property (nonatomic,readonly) CAMTransientImageManager * _transientImageManager;                                                                          //@synthesize _transientImageManager=__transientImageManager - In the implementation block
@property (nonatomic,readonly) PUPhotoKitDataSourceManager * _photoKitDataSourceManager;                                                                   //@synthesize _photoKitDataSourceManager=__photoKitDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _sessionAssetUUIDs;                                                                                          //@synthesize _sessionAssetUUIDs=__sessionAssetUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _ignoredEV0UUIDs;                                                                                            //@synthesize _ignoredEV0UUIDs=__ignoredEV0UUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _HDRUUIDToIgnoredEV0UUIDs;                                                                            //@synthesize _HDRUUIDToIgnoredEV0UUIDs=__HDRUUIDToIgnoredEV0UUIDs - In the implementation block
@property (setter=_setPhotosDataSource:,nonatomic,retain) PXPhotosDataSource * _photosDataSource;                                                          //@synthesize _photosDataSource=__photosDataSource - In the implementation block
@property (setter=_setStagedDataSource:,nonatomic,retain) PXPhotosDataSource * _stagedDataSource;                                                          //@synthesize _stagedDataSource=__stagedDataSource - In the implementation block
@property (setter=_setPreviewGestureRecognizer:,nonatomic,retain) UIGestureRecognizer * previewGestureRecognizer;                                          //@synthesize previewGestureRecognizer=_previewGestureRecognizer - In the implementation block
@property (assign,setter=_setAllowUpdating:,nonatomic) BOOL _allowUpdating;                                                                                //@synthesize _allowUpdating=__allowUpdating - In the implementation block
@property (assign,setter=_setUpdateIsScheduled:,nonatomic) BOOL _updateIsScheduled;                                                                        //@synthesize _updateIsScheduled=__updateIsScheduled - In the implementation block
@property (assign,setter=_setTransientAssetsAreValid:,nonatomic) BOOL _transientAssetsAreValid;                                                            //@synthesize _transientAssetsAreValid=__transientAssetsAreValid - In the implementation block
@property (assign,setter=_setOneUpVisible:,getter=_isOneUpVisible,nonatomic) BOOL _oneUpVisible;                                                           //@synthesize _oneUpVisible=__oneUpVisible - In the implementation block
@property (assign,setter=_setOneUpFullyPresented:,getter=_isOneUpFullyPresented,nonatomic) BOOL _oneUpFullyPresented;                                      //@synthesize _oneUpFullyPresented=__oneUpFullyPresented - In the implementation block
@property (assign,setter=_setDidSetupMechanismsForStoppingCaptureSession:,nonatomic) BOOL _didSetupMechanismsForStoppingCaptureSession;                    //@synthesize _didSetupMechanismsForStoppingCaptureSession=__didSetupMechanismsForStoppingCaptureSession - In the implementation block
@property (assign,setter=_setDidStopCaptureSession:,nonatomic) BOOL _didStopCaptureSession;                                                                //@synthesize _didStopCaptureSession=__didStopCaptureSession - In the implementation block
@property (assign,setter=_setPrefersPresentingStatusbarHidden:,nonatomic) BOOL prefersPresentingStatusbarHidden;                                           //@synthesize prefersPresentingStatusbarHidden=_prefersPresentingStatusbarHidden - In the implementation block
@property (assign,setter=_setDeferringStagedMediaLoading:,getter=_isDeferringStagedMediaLoading,nonatomic) BOOL _deferringStagedMediaLoading;              //@synthesize _deferringStagedMediaLoading=__deferringStagedMediaLoading - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _memoryWarningSource;                                                                         //@synthesize _memoryWarningSource=__memoryWarningSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _photosFrameworksPreheatQueue;                                                                 //@synthesize _photosFrameworksPreheatQueue=__photosFrameworksPreheatQueue - In the implementation block
@property (assign,setter=_setShouldSkipPhotosFrameworkPreheat:,nonatomic) BOOL _shouldSkipPhotosFrameworkPreheat;                                          //@synthesize _shouldSkipPhotosFrameworkPreheat=__shouldSkipPhotosFrameworkPreheat - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerSessionDelegate> sessionDelegate;                                                            //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerImageWellDelegate> imageWellDelegate;                                                        //@synthesize imageWellDelegate=_imageWellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerPresentationDelegate> presentationDelegate;                                                  //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL canPresentCameraRollViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
-(void)_setOneUpVisible:(BOOL)arg1 ;
-(BOOL)isCameraRollViewControllerPresented;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)_scheduleUpdateIfOneUpIsActive;
-(void)clearIgnoredImageWellUUIDs;
-(void)cameraPreviewWellImageDidChange:(id)arg1 ;
-(id<CAMCameraRollControllerSessionDelegate>)sessionDelegate;
-(id)init;
-(void)_scheduleStopCaptureSessionAfterDelay:(double)arg1 ;
-(void)_setSessionIdentifier:(unsigned short)arg1 ;
-(void)setSessionDelegate:(id<CAMCameraRollControllerSessionDelegate>)arg1 ;
-(void)setImageWellDelegate:(id<CAMCameraRollControllerImageWellDelegate>)arg1 ;
-(NSMutableSet *)_ignoredEV0UUIDs;
-(BOOL)_shouldSkipPhotosFrameworkPreheat;
-(void)_setShouldSkipPhotosFrameworkPreheat:(BOOL)arg1 ;
-(void)_ensureCameraRollViewController;
-(PUOneUpPresentationHelper *)_oneUpPresentationHelper;
-(void)ignoreImageWellChangeNotificationForEV0UUID:(id)arg1 withHDRUUID:(id)arg2 ;
-(void)willPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2 ;
-(void)_stopCaptureSessionIfNecessaryFromTimeout;
-(void)processTransientPairedVideoUpdate:(id)arg1 filterType:(long long)arg2 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1 ;
-(void)_teardownMechanismsForStoppingCaptureSession;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(void)_unregisterBrowsingViewModelChangeObserver;
-(void)_setOneUpFullyPresented:(BOOL)arg1 ;
-(NSMutableDictionary *)_HDRUUIDToIgnoredEV0UUIDs;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)_invalidateTransientAssets;
-(void)applicationResumed:(id)arg1 ;
-(void)preload;
-(id<CAMCameraRollControllerPresentationDelegate>)presentationDelegate;
-(void)_tearDownMemoryWarningNotifications;
-(BOOL)_transientAssetsAreValid;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(long long)oneUpPresentationHelperPreferredPresentationOrientation:(id)arg1 ;
-(void)beginAllowingStagedMediaLoading;
-(void)_setAllowUpdating:(BOOL)arg1 ;
-(void)_updateTransientDataSourceIfNeeded;
-(UIGestureRecognizer *)previewGestureRecognizer;
-(void)_setUpdateIsScheduled:(BOOL)arg1 ;
-(BOOL)_allowUpdating;
-(unsigned short)sessionIdentifier;
-(BOOL)isCaptureSessionCurrent:(unsigned short)arg1 ;
-(void)_stopCaptureSessionIfNecessary;
-(id<CAMCameraRollControllerImageWellDelegate>)imageWellDelegate;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)_startNewSession;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)_registerBrowsingViewModelChangeObserver;
-(void)_setTransientAssetsAreValid:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)_photosFrameworksPreheatQueue;
-(CAMTransientImageManager *)_transientImageManager;
-(BOOL)_updateIsScheduled;
-(void)processPendingBursts;
-(CAMTransientDataSource *)_transientDataSource;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(PXPhotosDataSource *)_photosDataSource;
-(BOOL)_isPasscodeLocked;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg1 ;
-(void)_setupMemoryWarningNotificationsIfNecessary;
-(id)persistedThumbnailImage;
-(PUPhotoKitDataSourceManager *)_photoKitDataSourceManager;
-(long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1 ;
-(void)presentCameraRollViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2 deferringStagedMediaLoading:(BOOL)arg3 ;
-(BOOL)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg1 ;
-(BOOL)prefersPresentingStatusbarHidden;
-(void)_setStagedDataSource:(id)arg1 ;
-(void)setPresentationDelegate:(id<CAMCameraRollControllerPresentationDelegate>)arg1 ;
-(NSObject*<OS_dispatch_source>)_memoryWarningSource;
-(NSMutableSet *)_sessionAssetUUIDs;
-(void)_setDidSetupMechanismsForStoppingCaptureSession:(BOOL)arg1 ;
-(BOOL)_isOneUpFullyPresented;
-(id)oneUpPresentationHelperViewController:(id)arg1 ;
-(void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(BOOL)arg2 ;
-(void)_setDeferringStagedMediaLoading:(BOOL)arg1 ;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
-(void)_setPrefersPresentingStatusbarHidden:(BOOL)arg1 ;
-(void)_update;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg1 ;
-(BOOL)_didSetupMechanismsForStoppingCaptureSession;
-(BOOL)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(id)arg1 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg1 ;
-(void)handlePresentingPanGestureRecognizer:(id)arg1 ;
-(BOOL)_didStopCaptureSession;
-(BOOL)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg1 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg1 ;
-(void)_cancelDelayedStopCaptureSession;
-(BOOL)dismissCameraRollViewControllerForced:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)resetNavigation;
-(void)_setDidStopCaptureSession:(BOOL)arg1 ;
-(void)ppt_awaitPreload:(/*^block*/id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2 ;
-(void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg1 didChange:(id)arg2 ;
-(CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(id)_cameraRollCollectionListFetchResult;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)_isDeferringStagedMediaLoading;
-(void)_setPhotosDataSource:(id)arg1 ;
-(BOOL)canPresentCameraRollViewController;
-(void)didPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2 ;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2 ;
-(void)_setPreviewGestureRecognizer:(id)arg1 ;
-(void)dealloc;
-(BOOL)_isOneUpVisible;
-(PXPhotosDataSource *)_stagedDataSource;
@end

