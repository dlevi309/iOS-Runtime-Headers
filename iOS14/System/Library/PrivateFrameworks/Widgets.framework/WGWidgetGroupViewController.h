/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetDebugging.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryObserving.h>
#import <libobjc.A.dylib/WGWidgetListViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/WGMajorListViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>
#import <libobjc.A.dylib/WGWidgetIconAnimationExtraViewsProviding.h>

@protocol WGWidgetGroupViewControllerDelegate;
@class WGWidgetDiscoveryController, WGCarouselListViewController, UILabel, UIControl, NSString, UIScrollView, UIViewController, NSArray;

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGMajorListViewControllerDelegate, WGWidgetExtensionVisibilityProviding, WGWidgetIconAnimationExtraViewsProviding> {

	WGWidgetDiscoveryController* _discoveryController;
	WGCarouselListViewController* _majorColumnListViewController;
	unsigned long long _lastWidgetCount;
	WGWidgetListSettings _listSettings;
	UILabel* _debugLabel;
	BOOL _shouldBlurContent;
	id<WGWidgetGroupViewControllerDelegate> _delegate;
	unsigned long long _location;
	UIControl* _editButton;
	UIEdgeInsets _contentOccludingInset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WGWidgetGroupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) UIScrollView * majorScrollView; 
@property (nonatomic,readonly) unsigned long long widgetCount; 
@property (assign,nonatomic) BOOL shouldBlurContent;                                               //@synthesize shouldBlurContent=_shouldBlurContent - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentOccludingInset;                                   //@synthesize contentOccludingInset=_contentOccludingInset - In the implementation block
@property (nonatomic,retain) UIViewController * headerContentViewController; 
@property (getter=isHeaderVisible,nonatomic,readonly) BOOL headerVisible; 
@property (assign,nonatomic) WGWidgetListSettings listSettings;                                    //@synthesize listSettings=_listSettings - In the implementation block
@property (nonatomic,retain) UIControl * editButton;                                               //@synthesize editButton=_editButton - In the implementation block
@property (assign,getter=isEditingIcons,nonatomic) BOOL editingIcons; 
@property (nonatomic,copy,readonly) NSArray * extraViewsContainers; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIControl *)editButton;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(WGWidgetListSettings)listSettings;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(id)initWithWidgetDiscoveryController:(id)arg1 listSettings:(WGWidgetListSettings)arg2 ;
-(BOOL)shouldBlurContent;
-(unsigned long long)widgetCount;
-(NSArray *)extraViewsContainers;
-(id<WGWidgetGroupViewControllerDelegate>)delegate;
-(void)setListSettings:(WGWidgetListSettings)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)location;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(long long)_layoutModeForSize:(CGSize)arg1 ;
-(void)_loadWidgetListViewController;
-(UIViewController *)headerContentViewController;
-(NSArray *)extraViews;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)editViewWillAppear:(id)arg1 ;
-(void)setHeaderContentViewController:(UIViewController *)arg1 ;
-(void)majorListViewControllerDidChangeHeaderVisibility:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(void)editViewDidAppear:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setEditButton:(UIControl *)arg1 ;
-(void)setDelegate:(id<WGWidgetGroupViewControllerDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(BOOL)isEditingIcons;
-(UIEdgeInsets)widgetListViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2 ;
-(BOOL)isHeaderVisible;
-(void)setEditingIcons:(BOOL)arg1 ;
-(CGSize)widgetListViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(BOOL)_canShowWhileLocked;
-(UIScrollView *)majorScrollView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)_scrollViewForListViewController:(id)arg1 ;
-(UIEdgeInsets)contentOccludingInset;
-(void)editViewDidDisappear:(id)arg1 ;
-(void)presentEditViewWithCompletion:(/*^block*/id)arg1 ;
-(void)setContentOccludingInset:(UIEdgeInsets)arg1 ;
-(long long)_activeLayoutMode;
-(void)editViewWillDisappear:(id)arg1 ;
@end

