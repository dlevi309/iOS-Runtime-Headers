/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <HomeControlCenterModule/HomeControlCenterModule-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <libobjc.A.dylib/HUPrototypeLayoutOptionsEditorViewControllerDelegate.h>

@protocol HUCCGridViewControllerDelegate, HUOpenURLHandling;
@class HUGridFlowLayout, HUGridLayoutOptions, HUCCGridItemManager, NSString;

@interface HUCCGridViewController : HUControllableItemCollectionViewController <HUPrototypeLayoutOptionsEditorViewControllerDelegate> {

	BOOL _viewVisible;
	BOOL _needsLayoutOptionsUpdate;
	unsigned long long _sizeSubclass;
	unsigned long long _itemType;
	id<HUCCGridViewControllerDelegate> _delegate;
	id<HUOpenURLHandling> _URLHandler;

}

@property (nonatomic,readonly) HUGridFlowLayout * collectionViewLayout; 
@property (nonatomic,readonly) HUGridLayoutOptions * layoutOptions; 
@property (assign,getter=isViewVisible,nonatomic) BOOL viewVisible;                           //@synthesize viewVisible=_viewVisible - In the implementation block
@property (assign,nonatomic) BOOL needsLayoutOptionsUpdate;                                   //@synthesize needsLayoutOptionsUpdate=_needsLayoutOptionsUpdate - In the implementation block
@property (nonatomic,readonly) HUCCGridItemManager * itemManager; 
@property (assign,nonatomic) unsigned long long sizeSubclass;                                 //@synthesize sizeSubclass=_sizeSubclass - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType;                                   //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<HUOpenURLHandling> URLHandler;                                //@synthesize URLHandler=_URLHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<HUCCGridViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUCCGridViewControllerDelegate>)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(unsigned long long)itemType;
-(SCD_Struct_HU0)_gridLayout;
-(unsigned long long)sizeSubclass;
-(id<HUOpenURLHandling>)URLHandler;
-(void)setViewVisible:(BOOL)arg1 ;
-(BOOL)isViewVisible;
-(id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)setURLHandler:(id<HUOpenURLHandling>)arg1 ;
-(id)initWithItemType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(id)preloadItemsForPossiblePresentation;
-(void)setSizeSubclass:(unsigned long long)arg1 ;
-(id)dismissQuickControlAnimated:(BOOL)arg1 wasDismissed:(BOOL*)arg2 ;
-(BOOL)canDismissQuickControl;
-(void)_updateMaximumNumberOfItems;
-(void)_enqueueLayoutOptionsUpdate;
-(BOOL)needsLayoutOptionsUpdate;
-(void)_updateLayoutOptions;
-(void)setNeedsLayoutOptionsUpdate:(BOOL)arg1 ;
-(id)_cellLayoutOptionsForItem:(id)arg1 ;
-(BOOL)_requiresUnlockToPerformActionForItem:(id)arg1 ;
-(id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2 ;
-(void)_checkForCollectionViewAssertions:(id)arg1 ;
-(void)_performItemConsistencyCheckForIndexPaths:(id)arg1 withUpdateRequest:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(BOOL)_actuallyInDarkMode;
-(void)layoutOptionsEditor:(id)arg1 didUpdateLayoutOptions:(id)arg2 ;
-(void)layoutOptionsEditorDidFinish:(id)arg1 ;
-(BOOL)allowsPresentationWithOnlySettings;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(long long)preferredModalPresentationStyleForPresentationCoordinator:(id)arg1 ;
-(id)traitCollectionForPresentationCoordinator:(id)arg1 ;
-(BOOL)shouldOverrideTraitCollectionForPresentationCoordinator:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailViewURLHandlerForPresentationCoordinator:(id)arg1 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(BOOL)presentationCoordinatorShouldDisablePullToUnlockSettings:(id)arg1 ;
@end

