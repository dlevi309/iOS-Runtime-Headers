/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemCollectionViewController.h>
#import <libobjc.A.dylib/HUQuickControlPresentationHost.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlPresentationCoordinatorDelegate.h>

@protocol HUQuickControlPresentationHost, NSCopying;
@class HUQuickControlPresentationCoordinator, UIViewController, UILongPressGestureRecognizer, NSMutableDictionary, UIGestureRecognizer, HFItem, NSString, HFItemManager;

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController <HUQuickControlPresentationHost, UIGestureRecognizerDelegate, HUQuickControlPresentationCoordinatorDelegate> {

	BOOL _viewAppeared;
	BOOL _suppressCollectionViewUpdatesForReorderCommit;
	unsigned long long _contentColorStyle;
	HUQuickControlPresentationCoordinator* _quickControlPresentationCoordinator;
	UIViewController*<HUQuickControlPresentationHost> _ancestorQuickControlHostAtPresentationTime;
	UILongPressGestureRecognizer* _reorderGestureRecognizer;
	NSMutableDictionary* _actionSetExecutionFuturesKeyedByIdentifier;
	UIGestureRecognizer* _contextualTapGestureRecognizer;
	HFItem*<NSCopying> _selectedContextualMenuItem;

}

@property (nonatomic,retain) HUQuickControlPresentationCoordinator * quickControlPresentationCoordinator;                                      //@synthesize quickControlPresentationCoordinator=_quickControlPresentationCoordinator - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<HUQuickControlPresentationHost> ancestorQuickControlHostAtPresentationTime;              //@synthesize ancestorQuickControlHostAtPresentationTime=_ancestorQuickControlHostAtPresentationTime - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayout*<HUControllableCollectionViewLayout> collectionViewLayout; 
@property (assign,nonatomic) BOOL viewAppeared;                                                                                                //@synthesize viewAppeared=_viewAppeared - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * reorderGestureRecognizer;                                                          //@synthesize reorderGestureRecognizer=_reorderGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL suppressCollectionViewUpdatesForReorderCommit;                                                               //@synthesize suppressCollectionViewUpdatesForReorderCommit=_suppressCollectionViewUpdatesForReorderCommit - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionSetExecutionFuturesKeyedByIdentifier;                                                 //@synthesize actionSetExecutionFuturesKeyedByIdentifier=_actionSetExecutionFuturesKeyedByIdentifier - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * contextualTapGestureRecognizer;                                                             //@synthesize contextualTapGestureRecognizer=_contextualTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) HFItem*<NSCopying> selectedContextualMenuItem;                                                                    //@synthesize selectedContextualMenuItem=_selectedContextualMenuItem - In the implementation block
@property (nonatomic,readonly) unsigned long long contentColorStyle;                                                                           //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFItemManager * itemManager; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(BOOL)viewAppeared;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(HUQuickControlPresentationCoordinator *)quickControlPresentationCoordinator;
-(id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(BOOL)allowsPresentationWithOnlySettings;
-(id)traitCollectionForPresentationCoordinator:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(void)setActionSetExecutionFuturesKeyedByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setQuickControlPresentationCoordinator:(HUQuickControlPresentationCoordinator *)arg1 ;
-(void)_updateReorderingGestureRecognizer;
-(void)_handleApplicationWillResignActiveNotification:(id)arg1 ;
-(void)setViewAppeared:(BOOL)arg1 ;
-(void)_updateEditingStateForCell:(id)arg1 ;
-(NSMutableDictionary *)actionSetExecutionFuturesKeyedByIdentifier;
-(BOOL)alwaysAllowReordering;
-(UILongPressGestureRecognizer *)reorderGestureRecognizer;
-(void)_handleReorderGesture:(id)arg1 ;
-(void)setReorderGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)_reorderGestureDidBegin:(id)arg1 ;
-(void)_reorderGestureDidChange:(id)arg1 ;
-(void)_reorderGestureDidEnd:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg1 ;
-(id)_childItemsForItem:(id)arg1 ;
-(void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2 ;
-(void)_logUserMetricsAfterTapOfItem:(id)arg1 ;
-(id)reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(void)setSuppressCollectionViewUpdatesForReorderCommit:(BOOL)arg1 ;
-(void)_itemSetDidChange;
-(BOOL)suppressCollectionViewUpdatesForReorderCommit;
-(unsigned long long)contentColorStyle;
-(id)_itemForServiceControlPresentationAtPoint:(CGPoint)arg1 ;
-(id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_hasTapActionForItem:(id)arg1 ;
-(BOOL)_isMultiServiceAccessory:(id)arg1 ;
-(id)_performTapActionForItem:(id)arg1 ;
-(void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2 ;
-(void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2 ;
-(id)_ancestorQuickControlPresentationHost;
-(void)setAncestorQuickControlHostAtPresentationTime:(UIViewController*<HUQuickControlPresentationHost>)arg1 ;
-(UIViewController*<HUQuickControlPresentationHost>)ancestorQuickControlHostAtPresentationTime;
-(id)customContextualMenuItemsForItem:(id)arg1 ;
-(void)_showQuickControlsForSelectedMenuItem;
-(void)_showSettingsForSelectedMenuItem;
-(void)setSelectedContextualMenuItem:(HFItem*<NSCopying>)arg1 ;
-(HFItem*<NSCopying>)selectedContextualMenuItem;
-(id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(CGPoint)arg2 ;
-(void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3 ;
-(void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2 ;
-(void)presentationCoordinatorWillBeginDismissalTransition:(id)arg1 ;
-(void)presentationCoordinatorDidCancelDismissalTransition:(id)arg1 ;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
-(id)_visibleCellForItem:(id)arg1 ;
-(void)_handleContextualGesture:(id)arg1 ;
-(UIGestureRecognizer *)contextualTapGestureRecognizer;
-(void)setContextualTapGestureRecognizer:(UIGestureRecognizer *)arg1 ;
@end

