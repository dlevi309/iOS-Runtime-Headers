/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <TeaUI/TUViewController.h>
#import <libobjc.A.dylib/TSFollowingViewControllerType.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/TSViewControllerTabbable.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@class UIView;

@interface NewsUI2.FollowingViewController : TUViewController <TSFollowingViewControllerType, UISearchBarDelegate, TSViewControllerTabbable, TSTabBarSplitViewAutoObserver> {

	 searchProvider;
	 lazySearchViewController;
	 lazySearchResultsViewController;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 purchaseController;
	 bundleSubscriptionManager;
	 alertPresenter;
	 featureAvailability;
	 commands;
	 newsActivityManager;

}

@property (readonly,nonatomic) UIView * contentView; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(void)tabBarControllerDidDoubleTapBarButtonItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)contentScrollView;
-(UIView *)contentView;
-(void)editButtonTapped;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

