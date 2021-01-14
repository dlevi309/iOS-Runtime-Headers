/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUPhotoPicker, OS_dispatch_group;
@class PUPhotosGridDownloadHelper, PUPhotosGridViewController, PUUIAlbumListViewController, NSObject;

@interface PUUIImagePickerControllerHelper : NSObject {

	PUPhotosGridDownloadHelper* _downloadHelper;
	BOOL _didHandleSelectionOfAssets;
	PUPhotosGridViewController* _gridViewController;
	PUUIAlbumListViewController* _albumListViewController;
	id<PUPhotoPicker> _photoPicker;
	NSObject*<OS_dispatch_group> _multiSelectionGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> multiSelectionGroup;                            //@synthesize multiSelectionGroup=_multiSelectionGroup - In the implementation block
@property (assign,nonatomic) BOOL didHandleSelectionOfAssets;                                             //@synthesize didHandleSelectionOfAssets=_didHandleSelectionOfAssets - In the implementation block
@property (nonatomic,__weak,readonly) PUPhotosGridViewController * gridViewController;                    //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,__weak,readonly) PUUIAlbumListViewController * albumListViewController;              //@synthesize albumListViewController=_albumListViewController - In the implementation block
@property (nonatomic,__weak,readonly) id<PUPhotoPicker> photoPicker;                                      //@synthesize photoPicker=_photoPicker - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) BOOL requiresPickingConfirmation; 
@property (nonatomic,readonly) BOOL showsFileSizePicker; 
@property (getter=isAnyAssetDownloading,nonatomic,readonly) BOOL anyAssetDownloading; 
+(id)albumListViewControllerSpec;
+(id)assetsFilterPredicateForMediaTypes:(id)arg1 ;
+(unsigned long long)imagePickerTypesForMediaTypes:(id)arg1 ;
+(id)collectionsFilterPredicateForMediaTypes:(id)arg1 ;
+(int)albumFilterForMediaTypes:(id)arg1 ;
+(id)gridViewControllerSpec;
-(BOOL)allowsMultipleSelection;
-(BOOL)showsFileSizePicker;
-(BOOL)requiresPickingConfirmation;
-(BOOL)isAnyAssetDownloading;
-(BOOL)showsPrompt;
-(id<PUPhotoPicker>)photoPicker;
-(id)_mediaTypes;
-(id)initWithAlbumListViewController:(id)arg1 photoPickerServices:(id)arg2 ;
-(void)updateSessionInfo;
-(id)initWithGridViewController:(id)arg1 photoPickerServices:(id)arg2 ;
-(void)_selectAsset:(id)arg1 withHintCollection:(id)arg2 hintIndexPath:(id)arg3 ;
-(void)handleSelectionOfAssets:(id)arg1 resizeTaskDescriptor:(id)arg2 ;
-(void)handleSelectionOfAsset:(id)arg1 inCollection:(id)arg2 resizeTaskDescriptor:(id)arg3 ;
-(void)_handleSelectionOfDownloadedAssets:(id)arg1 resizeTaskDescriptor:(id)arg2 ;
-(void)_pushImageViewControllerForAsset:(id)arg1 allowEditing:(BOOL)arg2 expectsLivePhoto:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_group>)multiSelectionGroup;
-(void)_notifyImagePickerOfAssetAvailability:(id)arg1 resizeTaskDescriptor:(id)arg2 ;
-(id)_pickerProperties;
-(void)_showImageViewController:(id)arg1 ;
-(void)handleKeyboardAvoidanceIfNeeded:(id)arg1 ;
-(PUPhotosGridViewController *)gridViewController;
-(PUUIAlbumListViewController *)albumListViewController;
-(void)setMultiSelectionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(BOOL)didHandleSelectionOfAssets;
-(void)setDidHandleSelectionOfAssets:(BOOL)arg1 ;
-(void)handleToggleSelectionOfItemAtIndexPath:(id)arg1 ;
-(void)cancelPhotoPicker;
-(unsigned long long)multipleSelectionLimit;
-(id)_extraArgumentsForResizeTaskDescriptor:(id)arg1 ;
@end

