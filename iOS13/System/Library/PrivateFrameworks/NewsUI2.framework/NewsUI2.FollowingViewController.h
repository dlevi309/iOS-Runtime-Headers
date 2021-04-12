/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <TeaUI/TUViewController.h>
#import <libobjc.A.dylib/TSViewControllerTabbable.h>
#import <libobjc.A.dylib/TSFollowingViewControllerType.h>

@class UIView;

@interface NewsUI2.FollowingViewController : TUViewController <TSViewControllerTabbable, TSFollowingViewControllerType> {

	 searchProvider;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 purchaseController;
	 bundleSubscriptionManager;
	 alertPresenter;
	??? previousSelectedIndexPath;

}

@property (readonly,nonatomic) UIView * contentView; 
-(void)tabBarControllerDidDoubleTapBarButtonItem:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)contentScrollView;
-(void)editButtonTapped;
-(UIView *)contentView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)delete:(id)arg1 ;
@end

