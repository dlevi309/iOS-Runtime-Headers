/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUAssetExplorerReviewScreenActionManagerDelegate.h>
#import <libobjc.A.dylib/PUReviewAssetProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PUAssetExplorerReviewScreenViewControllerDelegate, PUReviewAssetProvider;
@class NSIndexPath, NSSet, NSNumber, PUReviewScreenBarsModel, PUPhotoPickerResizeTaskDescriptorViewModel, PUAssetsDataSourceManager, PUAssetExplorerReviewScreenAssetsDataSourceManager, PUMediaProvider, PUJoiningMediaProvider, PUAssetExplorerReviewScreenActionManager, PUBrowsingSession, NSMutableDictionary, PUActivityProgressController, UIAlertController, PUReviewScreenSpec, NSString;

@interface PUAssetExplorerReviewScreenViewController : UIViewController <PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider, PXChangeObserver> {

	struct {
		BOOL respondsToDidPressCancel;
		BOOL respondsToDidPressRetake;
		BOOL respondsToDidPerformCompletionAction;
		BOOL respondsToCanPerformActionType;
		BOOL respondsToShouldEnableActionType;
		BOOL respondsToWillTransitionToSize;
		BOOL respondsToFileSizeMenu;
	}  _delegateFlags;
	BOOL __lowMemoryMode;
	id<PUAssetExplorerReviewScreenViewControllerDelegate> _delegate;
	NSIndexPath* _initialIndexPath;
	NSSet* _initialSelectedAssetUUIDs;
	NSSet* _initialDisabledLivePhotoAssetUUIDs;
	NSNumber* _selectionCountLimit;
	PUReviewScreenBarsModel* _reviewBarsModel;
	PUPhotoPickerResizeTaskDescriptorViewModel* _resizeTaskDescriptorViewModel;
	unsigned long long _sourceType;
	PUAssetsDataSourceManager* __clientDataSourceManager;
	PUAssetExplorerReviewScreenAssetsDataSourceManager* __reviewDataSourceManager;
	PUMediaProvider* __clientMediaProvider;
	PUJoiningMediaProvider* __reviewMediaProvider;
	id<PUReviewAssetProvider> __reviewAssetProvider;
	PUAssetExplorerReviewScreenActionManager* __actionManager;
	PUBrowsingSession* __browsingSession;
	NSMutableDictionary* __reviewAssetRequestsByUUID;
	NSMutableDictionary* __substituteAssetsByUUID;
	PUActivityProgressController* __requestProgressController;
	UIAlertController* __failedReviewAssetRequestAlertController;
	unsigned long long __options;
	PUReviewScreenSpec* __spec;

}

@property (nonatomic,readonly) PUAssetsDataSourceManager * _clientDataSourceManager;                                                                        //@synthesize _clientDataSourceManager=__clientDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUAssetExplorerReviewScreenAssetsDataSourceManager * _reviewDataSourceManager;                                               //@synthesize _reviewDataSourceManager=__reviewDataSourceManager - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * _clientMediaProvider;                                                                                      //@synthesize _clientMediaProvider=__clientMediaProvider - In the implementation block
@property (nonatomic,readonly) PUJoiningMediaProvider * _reviewMediaProvider;                                                                               //@synthesize _reviewMediaProvider=__reviewMediaProvider - In the implementation block
@property (nonatomic,readonly) id<PUReviewAssetProvider> _reviewAssetProvider;                                                                              //@synthesize _reviewAssetProvider=__reviewAssetProvider - In the implementation block
@property (nonatomic,readonly) PUAssetExplorerReviewScreenActionManager * _actionManager;                                                                   //@synthesize _actionManager=__actionManager - In the implementation block
@property (nonatomic,readonly) PUBrowsingSession * _browsingSession;                                                                                        //@synthesize _browsingSession=__browsingSession - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _reviewAssetRequestsByUUID;                                                                            //@synthesize _reviewAssetRequestsByUUID=__reviewAssetRequestsByUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _substituteAssetsByUUID;                                                                               //@synthesize _substituteAssetsByUUID=__substituteAssetsByUUID - In the implementation block
@property (setter=_setRequestProgressController:,nonatomic,retain) PUActivityProgressController * _requestProgressController;                               //@synthesize _requestProgressController=__requestProgressController - In the implementation block
@property (setter=_setFailedReviewAssetRequestAlertController:,nonatomic,retain) UIAlertController * _failedReviewAssetRequestAlertController;              //@synthesize _failedReviewAssetRequestAlertController=__failedReviewAssetRequestAlertController - In the implementation block
@property (nonatomic,readonly) unsigned long long _options;                                                                                                 //@synthesize _options=__options - In the implementation block
@property (nonatomic,readonly) PUReviewScreenSpec * _spec;                                                                                                  //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) BOOL _lowMemoryMode;                                                                                                         //@synthesize _lowMemoryMode=__lowMemoryMode - In the implementation block
@property (assign,nonatomic,__weak) id<PUAssetExplorerReviewScreenViewControllerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PUAssetsDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) PUMediaProvider * mediaProvider; 
@property (nonatomic,copy,readonly) NSIndexPath * initialIndexPath;                                                                                         //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,copy,readonly) NSSet * initialSelectedAssetUUIDs;                                                                                      //@synthesize initialSelectedAssetUUIDs=_initialSelectedAssetUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * initialDisabledLivePhotoAssetUUIDs;                                                                             //@synthesize initialDisabledLivePhotoAssetUUIDs=_initialDisabledLivePhotoAssetUUIDs - In the implementation block
@property (nonatomic,readonly) NSNumber * selectionCountLimit;                                                                                              //@synthesize selectionCountLimit=_selectionCountLimit - In the implementation block
@property (nonatomic,readonly) PUReviewScreenBarsModel * reviewBarsModel;                                                                                   //@synthesize reviewBarsModel=_reviewBarsModel - In the implementation block
@property (nonatomic,readonly) PUPhotoPickerResizeTaskDescriptorViewModel * resizeTaskDescriptorViewModel;                                                  //@synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                                                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PUReviewScreenSpec *)_spec;
-(PUMediaProvider *)mediaProvider;
-(unsigned long long)sourceType;
-(void)_performCancelAction;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 selectionCountLimit:(id)arg7 sourceType:(unsigned long long)arg8 lowMemoryMode:(BOOL)arg9 reviewBarsModel:(id)arg10 resizeTaskDescriptorViewModel:(id)arg11 options:(unsigned long long)arg12 ;
-(PUReviewScreenBarsModel *)reviewBarsModel;
-(void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3 ;
-(void)_deleteAllLinkedFiles;
-(unsigned long long)_options;
-(void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2 ;
-(void)photoEditController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(BOOL)arg3 ;
-(id)_reviewAssetRequestForAssetUUID:(id)arg1 ;
-(id)_createReviewAssetRequestForAsset:(id)arg1 ;
-(void)_cancelReviewAssetRequests;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7 reviewBarsModel:(id)arg8 options:(unsigned long long)arg9 ;
-(id)_remainingReviewAssetRequests;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7 ;
-(id)_createBrowsingSessionIfNecessary;
-(void)_setSubstituteAsset:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 selectionCountLimit:(id)arg7 sourceType:(unsigned long long)arg8 lowMemoryMode:(BOOL)arg9 options:(unsigned long long)arg10 ;
-(void)_updateForCompletedReviewAssetRequest:(id)arg1 ;
-(void)_cancelReviewAssetRequestForAssetUUID:(id)arg1 ;
-(void)_requestReviewAssetForAsset:(id)arg1 ;
-(void)_handleReviewAssetRequest:(id)arg1 completedWithSuccess:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4 reviewAsset:(id)arg5 ;
-(void)_handleSelectionChanged;
-(void)_handleFailedReviewAssetRequestAlertControllerDismissal;
-(id)_createProgressControllerForRemainingRequests:(id)arg1 ;
-(void)_tearDownProgressController;
-(id)_substituteAssetForUUID:(id)arg1 ;
-(void)_updateWithSubstituteAsset:(id)arg1 shouldSelect:(BOOL)arg2 ;
-(id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
-(id)_titleForSelectionCount:(long long)arg1 ;
-(id)_fileSizeMenuForSelectedUUIDs:(id)arg1 ;
-(void)_handleCompletionAction:(unsigned long long)arg1 ;
-(void)_performRetakeAction;
-(void)_performCompletionAction:(unsigned long long)arg1 ;
-(BOOL)_lowMemoryMode;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didPressFunEffectsForAsset:(id)arg2 ;
-(void)_performCompletionActionSteps:(unsigned long long)arg1 ;
-(void)_presentConfidentialityAlertWithConfirmAction:(/*^block*/id)arg1 abortAction:(/*^block*/id)arg2 ;
-(NSSet *)initialSelectedAssetUUIDs;
-(NSNumber *)selectionCountLimit;
-(NSSet *)initialDisabledLivePhotoAssetUUIDs;
-(PUAssetsDataSourceManager *)_clientDataSourceManager;
-(PUAssetExplorerReviewScreenAssetsDataSourceManager *)_reviewDataSourceManager;
-(PUMediaProvider *)_clientMediaProvider;
-(PUJoiningMediaProvider *)_reviewMediaProvider;
-(NSMutableDictionary *)_reviewAssetRequestsByUUID;
-(NSMutableDictionary *)_substituteAssetsByUUID;
-(UIAlertController *)_failedReviewAssetRequestAlertController;
-(void)_setFailedReviewAssetRequestAlertController:(id)arg1 ;
-(id<PUAssetExplorerReviewScreenViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PUAssetExplorerReviewScreenViewControllerDelegate>)arg1 ;
-(PUAssetsDataSourceManager *)dataSourceManager;
-(NSIndexPath *)initialIndexPath;
-(PUBrowsingSession *)_browsingSession;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(PUPhotoPickerResizeTaskDescriptorViewModel *)resizeTaskDescriptorViewModel;
-(PUAssetExplorerReviewScreenActionManager *)_actionManager;
-(id<PUReviewAssetProvider>)_reviewAssetProvider;
-(void)assetExplorerReviewScreenActionManagerDidPressDeselectAll:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManagerDidPressSelectAll:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManagerDidPressSend:(id)arg1 ;
-(id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didToggleLivePhoto:(id)arg2 ;
-(void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg1 ;
-(void)assetExplorerReviewScreenActionManager:(id)arg1 didPressSelectForAsset:(id)arg2 ;
-(BOOL)assetExplorerReviewScreenActionManager:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(BOOL)assetExplorerReviewScreenActionManager:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(PUActivityProgressController *)_requestProgressController;
-(void)_handleProgressControllerCanceled:(id)arg1 ;
-(void)_showFailedReviewAssetRequestAlert;
-(void)_setRequestProgressController:(id)arg1 ;
-(id)reviewAssetProviderRequestForDisplayAsset:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

