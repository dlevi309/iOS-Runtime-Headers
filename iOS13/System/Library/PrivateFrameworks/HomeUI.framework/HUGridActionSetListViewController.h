/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@protocol HUGridActionSetListViewControllerItemUpdateDelegate;
@class UILabel, HUGridActionSetItemManager, HUWallpaperView, HFWallpaperSlice, HUGridLayoutOptions, NSString;

@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate> {

	id<HUGridActionSetListViewControllerItemUpdateDelegate> _itemUpdateDelegate;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) HUGridActionSetItemManager * actionSetItemManager; 
@property (nonatomic,retain) HUWallpaperView * wallpaperView; 
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice; 
@property (nonatomic,copy) HUGridLayoutOptions * layoutOptions; 
@property (assign,nonatomic,__weak) id<HUGridActionSetListViewControllerItemUpdateDelegate> itemUpdateDelegate;              //@synthesize itemUpdateDelegate=_itemUpdateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)updateMode;
+(double)requiredHeightWithLayoutOptions:(id)arg1 numberOfItems:(unsigned long long)arg2 ;
-(id)init;
-(HUGridLayoutOptions *)layoutOptions;
-(UILabel *)titleLabel;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(HUWallpaperView *)wallpaperView;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg1 ;
-(id)reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(id)initWithRoom:(id)arg1 onlyShowFavorites:(BOOL)arg2 ;
-(long long)_scrollDirectionForLayoutOptions:(id)arg1 ;
-(void)_internalSetLayoutOptions:(id)arg1 ;
-(id<HUGridActionSetListViewControllerItemUpdateDelegate>)itemUpdateDelegate;
-(void)_updateLayoutScrollDirectionIfNeeded;
-(id)_detailsViewControllerForActionSetItem:(id)arg1 ;
-(HUGridActionSetItemManager *)actionSetItemManager;
-(void)setItemUpdateDelegate:(id<HUGridActionSetListViewControllerItemUpdateDelegate>)arg1 ;
@end

