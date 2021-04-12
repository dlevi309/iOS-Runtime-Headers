/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <libobjc.A.dylib/HUCameraPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUHomeKitObjectPresenting.h>

@class HFWallpaperSlice, HUGridCameraItemManager, HUGridLayoutOptions, HUWallpaperView, NSString;

@interface HUGridCameraListViewController : HUControllableItemCollectionViewController <HUCameraPlayerViewControllerDelegate, HUHomeKitObjectPresenting> {

	BOOL _useCustomDragAndDrop;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;

}

@property (nonatomic,readonly) HUGridCameraItemManager * cameraItemManager; 
@property (nonatomic,copy) HUGridLayoutOptions * layoutOptions; 
@property (nonatomic,retain) HUWallpaperView * wallpaperView; 
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;              //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)updateMode;
+(double)requiredHeightWithLayoutOptions:(id)arg1 numberOfItems:(unsigned long long)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setUseCustomDragAndDrop:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_detailsViewControllerForCameraItem:(id)arg1 ;
-(id)presentCameraItem:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 animated:(BOOL)arg4 ;
-(id)_sourceViewForPresentingCameraItem:(id)arg1 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 animated:(BOOL)arg4 ;
-(id)_presentCameraItem:(id)arg1 forFuture:(id)arg2 animated:(BOOL)arg3 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg1 forCameraClip:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentCameraItem:(id)arg1 forCameraClip:(id)arg2 animated:(BOOL)arg3 ;
-(id)_presentDetailsViewControllerForCameraItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg1 withConfiguration:(id)arg2 ;
-(HUGridCameraItemManager *)cameraItemManager;
-(id)customContextualMenuItemsForItem:(id)arg1 ;
-(void)_showCameraViewerForSelectedMenuItem;
-(id)detailsViewControllerForCameraPlayerViewController:(id)arg1 ;
-(id)targetViewForDismissingCameraPlayerViewController:(id)arg1 ;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(id)hu_preloadContent;
-(id)presentHomeKitObject:(id)arg1 destination:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)presentCameraProfile:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 animated:(BOOL)arg4 ;
-(id)presentCameraProfile:(id)arg1 forCameraClip:(id)arg2 animated:(BOOL)arg3 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(id)initWithRoom:(id)arg1 onlyShowFavorites:(BOOL)arg2 ;
-(void)_setCamerasEnabled:(BOOL)arg1 forCells:(id)arg2 ;
-(CGSize)preferredContentSizeForCollectionViewContentSize:(CGSize)arg1 ;
-(void)_updateLayoutScrollDirectionIfNeeded;
-(long long)_scrollDirectionForLayoutOptions:(id)arg1 ;
-(void)_internalSetLayoutOptions:(id)arg1 ;
-(void)_logInteractionEventOfType:(unsigned long long)arg1 withItem:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg1 ;
-(id)reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(BOOL)useCustomDragAndDrop;
-(void)viewDidLoad;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(HUWallpaperView *)wallpaperView;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
@end

