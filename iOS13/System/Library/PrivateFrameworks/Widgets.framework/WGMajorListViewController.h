/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <Widgets/WGWidgetListViewController.h>
#import <libobjc.A.dylib/WGWidgetListFooterViewDelegate.h>
#import <libobjc.A.dylib/WGWidgetIconAnimationExtraViewsProviding.h>

@class UIView, NSArray, WGWidgetListFooterView, UIViewController, WGWidgetListHeaderView, NSString;

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate, WGWidgetIconAnimationExtraViewsProviding> {

	BOOL _footerVisible;
	BOOL _headerVisible;
	UIView* _containerView;
	WGWidgetListFooterView* _footerView;
	UIViewController* _headerContentViewController;
	WGWidgetListHeaderView* _headerView;

}

@property (assign,setter=_setFooterVisible:,getter=_isFooterVisible,nonatomic) BOOL _footerVisible;              //@synthesize footerVisible=_footerVisible - In the implementation block
@property (assign,nonatomic,__weak) id<WGMajorListViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) UIView * containerView;                                                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) WGWidgetListFooterView * footerView;                                              //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIViewController * headerContentViewController;                                     //@synthesize headerContentViewController=_headerContentViewController - In the implementation block
@property (nonatomic,readonly) WGWidgetListHeaderView * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
@property (assign,getter=isHeaderVisible,nonatomic) BOOL headerVisible;                                          //@synthesize headerVisible=_headerVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * extraViewsContainer; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
-(id)_group;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(WGWidgetListHeaderView *)headerView;
-(UIViewController *)headerContentViewController;
-(WGWidgetListFooterView *)footerView;
-(BOOL)_isFooterVisible;
-(UIView *)extraViewsContainer;
-(NSArray *)extraViews;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(void)setEditingIcons:(BOOL)arg1 ;
-(void)setHeaderContentViewController:(UIViewController *)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3 ;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3 ;
-(void)setHeaderVisible:(BOOL)arg1 ;
-(void)_configureStackView;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1 ;
-(void)_updateHeaderVisibility;
-(void)_updateFooterVisibility;
-(void)_updateEditButtonVisibilityAnimated:(BOOL)arg1 ;
-(void)_insertHeaderView;
-(BOOL)isHeaderVisible;
-(void)presentEditView:(id)arg1 ;
-(void)_updateFooterViewShouldBlurContent;
-(void)_setFooterVisible:(BOOL)arg1 ;
@end

