/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemCollectionViewController.h>
#import <libobjc.A.dylib/HUQuickControlPresentationHost.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDragDelegate.h>
#import <UIKit/UICollectionViewDropDelegate.h>
#import <libobjc.A.dylib/HUQuickControlPresentationCoordinatorDelegate.h>

@protocol HULockAuthorizationDelegate, HUQuickControlPresentationDelegate, HUQuickControlPresentationHost, NSCopying;
@class HUQuickControlPresentationCoordinator, UIViewController, UILongPressGestureRecognizer, NSMutableDictionary, UIGestureRecognizer, HFItem, HFItemManager, NSString;

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController <HUQuickControlPresentationHost, UIGestureRecognizerDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, HUQuickControlPresentationCoordinatorDelegate> {

	BOOL _useCustomDragAndDrop;
	BOOL _viewAppeared;
	unsigned long long _contentColorStyle;
	id<HULockAuthorizationDelegate> _lockAuthorizationDelegate;
	id<HUQuickControlPresentationDelegate> _quickControlPresentationDelegate;
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
@property (nonatomic,retain) NSMutableDictionary * actionSetExecutionFuturesKeyedByIdentifier;                                                 //@synthesize actionSetExecutionFuturesKeyedByIdentifier=_actionSetExecutionFuturesKeyedByIdentifier - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * contextualTapGestureRecognizer;                                                             //@synthesize contextualTapGestureRecognizer=_contextualTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) HFItem*<NSCopying> selectedContextualMenuItem;                                                                    //@synthesize selectedContextualMenuItem=_selectedContextualMenuItem - In the implementation block
@property (nonatomic,readonly) unsigned long long contentColorStyle;                                                                           //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
@property (assign,nonatomic) BOOL useCustomDragAndDrop;                                                                                        //@synthesize useCustomDragAndDrop=_useCustomDragAndDrop - In the implementation block
@property (assign,nonatomic,__weak) id<HULockAuthorizationDelegate> lockAuthorizationDelegate;                                                 //@synthesize lockAuthorizationDelegate=_lockAuthorizationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlPresentationDelegate> quickControlPresentationDelegate;                                   //@synthesize quickControlPresentationDelegate=_quickControlPresentationDelegate - In the implementation block
@property (nonatomic,readonly) HFItemManager * itemManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)setUseCustomDragAndDrop:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)customContextualMenuItemsForItem:(id)arg1 ;
-(HFItem*<NSCopying>)selectedContextualMenuItem;
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(void)setLockAuthorizationDelegate:(id<HULockAuthorizationDelegate>)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(BOOL)requiresUnlockToPerformActionForItem:(id)arg1 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg1 ;
-(id)reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(id)traitCollectionForPresentationCoordinator:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(BOOL)useCustomDragAndDrop;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_performTapActionForItem:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)quickControlPresentationContextForUUID:(id)arg1 type:(unsigned long long)arg2 ;
-(HUQuickControlPresentationCoordinator *)quickControlPresentationCoordinator;
-(id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2 ;
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
-(id)_childItemsForItem:(id)arg1 ;
-(void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2 ;
-(id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2 ;
-(void)_logUserMetricsAfterTapOfItem:(id)arg1 ;
-(id<HULockAuthorizationDelegate>)lockAuthorizationDelegate;
-(void)_itemSetDidChange;
-(unsigned long long)contentColorStyle;
-(id)_itemForServiceControlPresentationAtPoint:(CGPoint)arg1 ;
-(BOOL)_hasTapActionForItem:(id)arg1 ;
-(BOOL)_isMultiServiceAccessory:(id)arg1 ;
-(void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2 ;
-(id<HUQuickControlPresentationDelegate>)quickControlPresentationDelegate;
-(void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2 ;
-(BOOL)viewAppeared;
-(id)_ancestorQuickControlPresentationHost;
-(void)setAncestorQuickControlHostAtPresentationTime:(UIViewController*<HUQuickControlPresentationHost>)arg1 ;
-(UIViewController*<HUQuickControlPresentationHost>)ancestorQuickControlHostAtPresentationTime;
-(void)_showQuickControlsForSelectedMenuItem;
-(void)_showSettingsForSelectedMenuItem;
-(void)setSelectedContextualMenuItem:(HFItem*<NSCopying>)arg1 ;
-(id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(CGPoint)arg2 ;
-(void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3 ;
-(void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 willEndPresentationWithContext:(id)arg2 ;
-(void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2 ;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
-(id)_visibleCellForItem:(id)arg1 ;
-(void)_handleContextualGesture:(id)arg1 ;
-(void)setQuickControlPresentationDelegate:(id<HUQuickControlPresentationDelegate>)arg1 ;
-(UIGestureRecognizer *)contextualTapGestureRecognizer;
-(void)setContextualTapGestureRecognizer:(UIGestureRecognizer *)arg1 ;
@end

