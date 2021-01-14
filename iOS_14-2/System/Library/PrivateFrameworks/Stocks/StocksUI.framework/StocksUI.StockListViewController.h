/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <TeaUI/TUViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>

@class NSArray;

@interface StocksUI.StockListViewController : TUViewController <UITableViewDelegate, UISearchControllerDelegate> {

	 lazySearchController;
	 renderer;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 scrollTracker;
	 mastheadViewProvider;
	 bootstrapper;
	 backgroundView;
	 $__lazy_storage_$_exchangeStatusToolbarItem;
	 commands;
	 toolbarState;
	 keyboardInputMonitor;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * keyCommands; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)delete:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSArray *)keyCommands;
-(void)willPresentSearchController:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)deleteItem;
-(void)didTapYahooLogo;
-(void)didTapPlusButton;
-(id)initWithCoder:(id)arg1 ;
-(id)contentScrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

