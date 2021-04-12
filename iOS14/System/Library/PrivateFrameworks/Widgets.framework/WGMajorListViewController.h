/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <Widgets/WGWidgetListViewController.h>
#import <libobjc.A.dylib/WGWidgetListFooterViewDelegate.h>
#import <libobjc.A.dylib/WGWidgetIconAnimationExtraViewsProviding.h>

@class NSArray, UIView, WGWidgetListFooterView, UIViewController, WGWidgetListHeaderView, NSString;

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
@property (nonatomic,readonly) BOOL hasWidget; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * extraViewsContainers; 
@property (nonatomic,copy,readonly) NSArray * extraViews; 
@property (nonatomic,readonly) BOOL shouldAnimateLastTwoViewsAsOne; 
@property (nonatomic,readonly) BOOL shouldAnimateFirstTwoViewsAsOne; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(WGWidgetListFooterView *)footerView;
-(void)_updateFooterVisibility;
-(void)editButtonTapped:(id)arg1 ;
-(BOOL)_isFooterVisible;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(NSArray *)extraViewsContainers;
-(void)_updateEditButtonVisibilityAnimated:(BOOL)arg1 ;
-(void)_setFooterVisible:(BOOL)arg1 ;
-(id)editingMaterialViewForWidgetListFooterView:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)hasWidget;
-(void)presentEditView:(id)arg1 ;
-(UIViewController *)headerContentViewController;
-(NSArray *)extraViews;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(void)setHeaderContentViewController:(UIViewController *)arg1 ;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(void)_configureStackView;
-(void)enumerateWidgetWrapperViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3 ;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(UIView *)containerView;
-(unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3 ;
-(BOOL)isHeaderVisible;
-(void)setEditingIcons:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateHeaderVisibility;
-(id)_group;
-(void)_insertHeaderView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateFooterViewShouldBlurContent;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setHeaderVisible:(BOOL)arg1 ;
-(WGWidgetListHeaderView *)headerView;
-(id)extraViewsContainer;
-(void)invalidateVisibleWidgets;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3 ;
@end

