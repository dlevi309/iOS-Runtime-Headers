/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUAssetPickerContainerControllerActionHandler.h>
#import <libobjc.A.dylib/PUAssetPickerViewControllerActionHandler.h>
#import <libobjc.A.dylib/PUAssetExplorerReviewScreenViewControllerDelegate.h>
#import <libobjc.A.dylib/PUPhotosGridDownloadUpdateHandler.h>
#import <libobjc.A.dylib/PXSelectionCoordinatorDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/PUPhotoPickerResizeTaskDescriptorViewModelDelegate.h>
#import <libobjc.A.dylib/PUUIImageViewControllerFileResizingDelegate.h>
#import <libobjc.A.dylib/PUPhotoPickerServicesConsumer.h>

@protocol PUPhotoPicker, PUAssetPickerCoordinatorActionHandler, OS_dispatch_group;
@class PUPickerConfiguration, UINavigationController, PUAssetPickerContainerController, PUAssetPickerFilterOptions, NSMutableOrderedSet, PXSelectionCoordinator, PUPhotosGridDownloadHelper, NSMutableDictionary, NSObject, PXLoadingStatusManager, PUAssetPickerActivityProgressController, NSDictionary, NSProgress, PUPhotoPickerResizeTaskDescriptorViewModel, PHAsset, NSString;

@interface PUAssetPickerCoordinator : NSObject <PUAssetPickerContainerControllerActionHandler, PUAssetPickerViewControllerActionHandler, PUAssetExplorerReviewScreenViewControllerDelegate, PUPhotosGridDownloadUpdateHandler, PXSelectionCoordinatorDelegate, UINavigationControllerDelegate, PUPhotoPickerResizeTaskDescriptorViewModelDelegate, PUUIImageViewControllerFileResizingDelegate, PUPhotoPickerServicesConsumer> {

	id<PUPhotoPicker> _photoPicker;
	PUPickerConfiguration* _configuration;
	UINavigationController* _navigationController;
	PUAssetPickerContainerController* _rootViewController;
	PUAssetPickerFilterOptions* _filterOptions;
	id<PUAssetPickerCoordinatorActionHandler> _coordinatorActionHandler;
	NSMutableOrderedSet* _selectedAssets;
	PXSelectionCoordinator* _selectionCoordinator;
	PUPhotosGridDownloadHelper* _downloadHelper;
	NSMutableDictionary* _downloadProgress;
	NSObject*<OS_dispatch_group> _multipleAssetAvailabilityGroup;
	PXLoadingStatusManager* _loadingStatusManager;
	NSMutableDictionary* _assetIdentifierByLoadOperationID;
	PUAssetPickerActivityProgressController* _progressController;
	NSDictionary* _downloadAssetsProgressMap;
	NSProgress* _downloadProgressViewProgress;
	PUPhotoPickerResizeTaskDescriptorViewModel* _resizeTaskDescriptorViewModel;
	PHAsset* _selectedAssetToResize;

}

@property (nonatomic,retain) PUAssetPickerFilterOptions * filterOptions;                                               //@synthesize filterOptions=_filterOptions - In the implementation block
@property (nonatomic,__weak,readonly) id<PUAssetPickerCoordinatorActionHandler> coordinatorActionHandler;              //@synthesize coordinatorActionHandler=_coordinatorActionHandler - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * selectedAssets;                                                     //@synthesize selectedAssets=_selectedAssets - In the implementation block
@property (nonatomic,readonly) PXSelectionCoordinator * selectionCoordinator;                                          //@synthesize selectionCoordinator=_selectionCoordinator - In the implementation block
@property (nonatomic,readonly) PUPhotosGridDownloadHelper * downloadHelper;                                            //@synthesize downloadHelper=_downloadHelper - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadProgress;                                                   //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> multipleAssetAvailabilityGroup;                              //@synthesize multipleAssetAvailabilityGroup=_multipleAssetAvailabilityGroup - In the implementation block
@property (nonatomic,readonly) PXLoadingStatusManager * loadingStatusManager;                                          //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetIdentifierByLoadOperationID;                                 //@synthesize assetIdentifierByLoadOperationID=_assetIdentifierByLoadOperationID - In the implementation block
@property (nonatomic,retain) PUAssetPickerActivityProgressController * progressController;                             //@synthesize progressController=_progressController - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadAssetsProgressMap;                                                   //@synthesize downloadAssetsProgressMap=_downloadAssetsProgressMap - In the implementation block
@property (nonatomic,retain) NSProgress * downloadProgressViewProgress;                                                //@synthesize downloadProgressViewProgress=_downloadProgressViewProgress - In the implementation block
@property (nonatomic,retain) PUPhotoPickerResizeTaskDescriptorViewModel * resizeTaskDescriptorViewModel;               //@synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel - In the implementation block
@property (nonatomic,retain) PHAsset * selectedAssetToResize;                                                          //@synthesize selectedAssetToResize=_selectedAssetToResize - In the implementation block
@property (nonatomic,readonly) PUPickerConfiguration * configuration;                                                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController;                                          //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) PUAssetPickerContainerController * rootViewController;                                  //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PUPhotoPicker> photoPicker;                                                     //@synthesize photoPicker=_photoPicker - In the implementation block
+(BOOL)pu_legacy_shouldDownloadVideoComplement:(id)arg1 filterOptions:(id)arg2 ;
+(BOOL)_assetCanPlay:(id)arg1 ;
+(BOOL)_editingEnabled:(id)arg1 ;
+(BOOL)_viewImageBeforeSelectingEnabled:(id)arg1 ;
+(BOOL)_skipSelectionConfirmation:(id)arg1 ;
+(BOOL)_shouldTreatAssetAsLivePhoto:(id)arg1 photoPicker:(id)arg2 filterOptions:(id)arg3 ;
+(id)_extraArgumentsForResizeTaskDescriptor:(id)arg1 ;
-(PXLoadingStatusManager *)loadingStatusManager;
-(id)init;
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1 ;
-(id)assetExplorerReviewScreenViewController:(id)arg1 fileSizeMenuForSelectedUUIDs:(id)arg2 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setFilterOptions:(PUAssetPickerFilterOptions *)arg1 ;
-(PUAssetPickerFilterOptions *)filterOptions;
-(NSMutableDictionary *)downloadProgress;
-(PUPickerConfiguration *)configuration;
-(void)presentAlertController:(id)arg1 ;
-(PUAssetPickerContainerController *)rootViewController;
-(id<PUPhotoPicker>)photoPicker;
-(id)initWithConfiguration:(id)arg1 coordinatorActionHandler:(id)arg2 ;
-(void)setPhotoPicker:(id<PUPhotoPicker>)arg1 ;
-(void)setDownloadProgress:(NSMutableDictionary *)arg1 ;
-(PUPhotoPickerResizeTaskDescriptorViewModel *)resizeTaskDescriptorViewModel;
-(NSMutableOrderedSet *)selectedAssets;
-(PUPhotosGridDownloadHelper *)downloadHelper;
-(void)setPhotoPickerMediaTypes:(id)arg1 ;
-(id)imageViewControllerFileSizeMenuActions:(id)arg1 ;
-(id)assetsForResizing;
-(void)imageViewControllerDidConfirmSelection:(id)arg1 ;
-(void)selectionCoordinator:(id)arg1 willUpdateSelectedObjectsForSnapshot:(id)arg2 withRemovedIndexes:(id)arg3 insertedIndexes:(id)arg4 ;
-(id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2 ;
-(void)endShowingProgressWithIdentifier:(id)arg1 ;
-(void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2 ;
-(BOOL)viewController:(id)arg1 didSelectAsset:(id)arg2 ;
-(void)viewController:(id)arg1 didSelectAssetCollection:(id)arg2 ;
-(void)containerController:(id)arg1 didTapCancelButton:(id)arg2 ;
-(void)containerController:(id)arg1 didTapAddButton:(id)arg2 ;
-(void)setSelectedAssets:(NSMutableOrderedSet *)arg1 ;
-(void)containerController:(id)arg1 didTapSelectedItemsButton:(id)arg2 ;
-(void)containerControllerDidAppear:(id)arg1 ;
-(id)initWithPhotoPicker:(id)arg1 mediaTypes:(id)arg2 ;
-(BOOL)toggleSelectionForAsset:(id)arg1 ;
-(id)_fileSizeActionsForAssets:(id)arg1 ;
-(void)downloadProgressDidFinishForAsset:(id)arg1 success:(BOOL)arg2 ;
-(id)initWithConfiguration:(id)arg1 filterOptions:(id)arg2 navigationControllerClass:(Class)arg3 selectedAssets:(id)arg4 coordinatorActionHandler:(id)arg5 ;
-(id)_setupProgressController;
-(void)_handleProgressControllerCancellation;
-(void)_updateProgressViewProgress:(id)arg1 ;
-(void)_dismissDownloadProgressViewWithSuccess:(BOOL)arg1 ;
-(id<PUAssetPickerCoordinatorActionHandler>)coordinatorActionHandler;
-(PXSelectionCoordinator *)selectionCoordinator;
-(NSObject*<OS_dispatch_group>)multipleAssetAvailabilityGroup;
-(void)setMultipleAssetAvailabilityGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSMutableDictionary *)assetIdentifierByLoadOperationID;
-(PHAsset *)selectedAssetToResize;
-(NSDictionary *)downloadAssetsProgressMap;
-(void)setDownloadAssetsProgressMap:(NSDictionary *)arg1 ;
-(NSProgress *)downloadProgressViewProgress;
-(void)setDownloadProgressViewProgress:(NSProgress *)arg1 ;
-(void)setSelectedAssetToResize:(PHAsset *)arg1 ;
-(void)pu_legacy_selectAssetWithFileResizing:(id)arg1 ;
-(void)pu_legacy_selectMultipleAssets:(id)arg1 ;
-(void)pu_legacy_showProgressView;
-(void)pu_legacy_selectSingleAsset:(id)arg1 ;
-(void)pu_legacy_cancelPicker;
-(void)pu_legacy_didDisplayPicker;
-(UINavigationController *)navigationController;
-(PUAssetPickerActivityProgressController *)progressController;
-(void)setResizeTaskDescriptorViewModel:(PUPhotoPickerResizeTaskDescriptorViewModel *)arg1 ;
-(void)setProgressController:(PUAssetPickerActivityProgressController *)arg1 ;
@end

