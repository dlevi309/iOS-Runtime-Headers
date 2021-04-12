/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetDebugging.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryObserving.h>
#import <libobjc.A.dylib/WGWidgetHostingViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetListItemViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>

@protocol WGWidgetListViewControllerDelegate;
@class WGWidgetDiscoveryController, MTMaterialView, NSMutableDictionary, UIScrollView, UIStackView, UIControl, NSArray, NSLayoutConstraint, NSString;

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate, WGWidgetExtensionVisibilityProviding> {

	WGWidgetDiscoveryController* _discoveryController;
	MTMaterialView* _captureOnlyMaterialView;
	NSMutableDictionary* _userInterfaceStylesToCaptureOnlyMaterialViews;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	NSMutableDictionary* _cancelTouchesAssertionsByWidgetID;
	NSMutableDictionary* _widgetIDsToItemVCs;
	CGSize _maxVisibleContentSize;
	BOOL _shouldBlurContent;
	BOOL _editingIcons;
	BOOL _shouldIncludeScrollView;
	id<WGWidgetListViewControllerDelegate> _delegate;
	UIControl* _editButton;
	NSArray* _previouslyVisibleWidgetIDs;
	NSLayoutConstraint* _stackViewBottomConstraint;
	NSMutableDictionary* _resizeContexts;

}

@property (assign,nonatomic,__weak) id<WGWidgetListViewControllerDelegatePrivate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_group,nonatomic,readonly) NSString * group; 
@property (setter=_setPreviouslyVisibleWidgetIDs:,getter=_previouslyVisibleWidgetIDs,nonatomic,retain) NSArray * previouslyVisibleWidgetIDs;              //@synthesize previouslyVisibleWidgetIDs=_previouslyVisibleWidgetIDs - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * stackViewBottomConstraint;                                                                            //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resizeContexts;                                                                                        //@synthesize resizeContexts=_resizeContexts - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListViewControllerDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * widgetListView; 
@property (nonatomic,readonly) unsigned long long widgetCount; 
@property (assign,nonatomic) BOOL shouldBlurContent;                                                                                                      //@synthesize shouldBlurContent=_shouldBlurContent - In the implementation block
@property (nonatomic,retain) UIControl * editButton;                                                                                                      //@synthesize editButton=_editButton - In the implementation block
@property (assign,getter=isEditingIcons,nonatomic) BOOL editingIcons;                                                                                     //@synthesize editingIcons=_editingIcons - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeScrollView;                                                                                                //@synthesize shouldIncludeScrollView=_shouldIncludeScrollView - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIEdgeInsets)layoutMarginForWidget:(id)arg1 ;
-(void)_cancelTouchesForHitWidgetIfNecessaryAndDisableTouchesOnAllWidgets;
-(UIScrollView *)widgetListView;
-(void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1 ;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(UIControl *)editButton;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)_resizeCell:(id)arg1 ;
-(void)_invokeBlockWithPlatterViewsVisibleInBounds:(/*^block*/id)arg1 ;
-(void)_adjustContentOffsetToInsideContent:(BOOL)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(id)_platterViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(void)_invalidateAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1 ;
-(void)_invokeBlockWithAllPlatterViews:(/*^block*/id)arg1 ;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(CGRect)visibleFrameForWidget:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 orderDidChangeForWidgetIdentifiers:(id)arg2 ;
-(BOOL)shouldBlurContent;
-(unsigned long long)widgetCount;
-(UIEdgeInsets)marginInsetsForWidget:(id)arg1 ;
-(void)updateWidgetViewState;
-(void)_updateBackgroundViewForPlatter:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<WGWidgetListViewControllerDelegatePrivate>)delegate;
-(id)_identifierForCell:(id)arg1 ;
-(/*^block*/id)_beginInsertion:(BOOL)arg1 ofListItem:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(BOOL)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)visibleWidgetIdentifiers;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_repopulateStackView;
-(void)_invalidateAllAlternateCaptureOnlyMaterialViews;
-(id)_wrapperViewForWidgetPlatterView:(id)arg1 ;
-(void)_enableTouchesOnAllWidgets;
-(void)registerWidgetForRefreshEvents:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(CGRect)_visibleContentFrameForBounds:(CGRect)arg1 withContentOccludingInsets:(UIEdgeInsets)arg2 ;
-(id)_newCaptureOnlyMaterialView;
-(void)remoteViewControllerDidDisconnectForWidget:(id)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(id)_platterViewAtLocation:(CGPoint)arg1 ;
-(/*^block*/id)_insert:(BOOL)arg1 listItem:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(BOOL)arg4 ;
-(void)_stackViewArrangedSubviewsTransformPresentationValueChanged;
-(void)setResizeContexts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)resizeContexts;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1 ;
-(CGSize)_maxVisibleContentSize;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(void)_disableTouchesOnAllWidgets;
-(void)_invokeBlock:(/*^block*/id)arg1 withPlatterViewsPassingTest:(/*^block*/id)arg2 ;
-(void)_configureCaptureOnlyMaterialView;
-(id)_animatablePropertiesForStackViewUpdate;
-(id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
-(void)unregisterWidgetForRefreshEvents:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)_scrollViewIfLoaded;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)widgetDiscoveryControllerSignificantWidgetsChange:(id)arg1 ;
-(void)brokenViewDidAppearForWidget:(id)arg1 ;
-(id)_listItemViewControllerForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)managingContainerIsVisibleForWidget:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)updatePreviouslyVisibleWidgetIDs;
-(void)_configureScrollView;
-(void)_pruneAlternateCaptureOnlyMaterialViews;
-(void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2 ;
-(BOOL)shouldIncludeScrollView;
-(void)_configureStackView;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setEditButton:(UIControl *)arg1 ;
-(void)setDelegate:(id<WGWidgetListViewControllerDelegatePrivate>)arg1 ;
-(id)_scrollViewLoadingIfNecessary:(BOOL)arg1 ;
-(void)_scrollViewDidStop;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_createPropertiesForStackViewUpdate;
-(void)_didUpdateStackViewArrangedSubviews;
-(void)_invokeBlockWithPlatterViewsVisibleInRect:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(void)remoteViewControllerViewDidHideForWidget:(id)arg1 ;
-(void)_invalidateAllCancelTouchesAssertions;
-(id)_previouslyVisibleWidgetIDs;
-(BOOL)isEditingIcons;
-(id)initWithWidgetDiscoveryController:(id)arg1 ;
-(void)setShouldIncludeScrollView:(BOOL)arg1 ;
-(CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2 ;
-(void)_presentEditViewController;
-(unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3 ;
-(void)_cancelTouchesForWidget:(id)arg1 ;
-(void)setEditingIcons:(BOOL)arg1 ;
-(id)widgetListItemViewController:(id)arg1 widgetHostWithIdentifier:(id)arg2 ;
-(void)_setPreviouslyVisibleWidgetIDs:(id)arg1 ;
-(id)_group;
-(void)_configureAlternateCaptureOnlyMaterialViewWithUserInterfaceStyle:(long long)arg1 ;
-(void)resizeWidgetWrapperView:(id)arg1 toSize:(CGSize)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

