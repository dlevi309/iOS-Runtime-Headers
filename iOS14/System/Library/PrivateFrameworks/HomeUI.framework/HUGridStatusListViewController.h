/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUBackgroundEffectViewGrouping.h>
#import <libobjc.A.dylib/HUHomeKitObjectPresenting.h>

@class HMRoom, HFHomeStatusItemManager, UIVisualEffectView, HUGridLayoutOptions, HUWallpaperView, HFWallpaperSlice, NSString, UIVisualEffect;

@interface HUGridStatusListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate, HUBackgroundEffectViewGrouping, HUHomeKitObjectPresenting> {

	HMRoom* _room;
	HFHomeStatusItemManager* _statusItemManager;
	UIVisualEffectView* _outlineStyleBlurGroupingEffectView;

}

@property (nonatomic,retain) HFHomeStatusItemManager * statusItemManager;                          //@synthesize statusItemManager=_statusItemManager - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * outlineStyleBlurGroupingEffectView;              //@synthesize outlineStyleBlurGroupingEffectView=_outlineStyleBlurGroupingEffectView - In the implementation block
@property (nonatomic,readonly) HMRoom * room;                                                      //@synthesize room=_room - In the implementation block
@property (nonatomic,copy) HUGridLayoutOptions * layoutOptions; 
@property (nonatomic,retain) HUWallpaperView * wallpaperView; 
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIVisualEffect * sharedEffect; 
+(unsigned long long)updateMode;
-(HMRoom *)room;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(id)hu_preloadContent;
-(id)presentHomeKitObject:(id)arg1 destination:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)presentStatusDetailsForStatusItemClass:(Class)arg1 animated:(BOOL)arg2 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)_internalSetLayoutOptions:(id)arg1 ;
-(id)initWithRoom:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(void)viewDidLoad;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(HUWallpaperView *)wallpaperView;
-(id)_performTapActionForItem:(id)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)backgroundEffectAddCaptureDependent:(id)arg1 ;
-(void)backgroundEffectRemoveCaptureDependent:(id)arg1 ;
-(UIVisualEffect *)sharedEffect;
-(id)collectionView:(id)arg1 gridLayout:(id)arg2 backgroundEffectGroupingAtIndexPath:(id)arg3 ;
-(HFHomeStatusItemManager *)statusItemManager;
-(void)setStatusItemManager:(HFHomeStatusItemManager *)arg1 ;
-(BOOL)_canSkipStatusDetailsForItem:(id)arg1 ;
-(id)_presentHomeKitObject:(id)arg1 fromStatusItem:(id)arg2 animated:(BOOL)arg3 ;
-(id)_presentDetailsForHomeKitObject:(id)arg1 fromStatusItem:(id)arg2 animated:(BOOL)arg3 ;
-(UIVisualEffectView *)outlineStyleBlurGroupingEffectView;
-(id)_dismissPresentedViewControllersAnimated:(BOOL)arg1 ;
-(BOOL)_statusItemRepresentsOnlyResidentIPads:(id)arg1 ;
-(void)setOutlineStyleBlurGroupingEffectView:(UIVisualEffectView *)arg1 ;
@end

