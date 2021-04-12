/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <TeaUI/TUViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray;

@interface StocksUI.StockListViewController : TUViewController <UISearchControllerDelegate, UITableViewDelegate> {

	 renderer;
	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 scrollTracker;
	 mastheadViewProvider;
	 lazySearchController;
	 bootstrapper;
	 backgroundView;
	 exchangeStatusToolbarItem;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSArray *)keyCommands;
-(void)delete:(id)arg1 ;
-(void)deleteItem;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)didTapYahooLogo;
-(void)didTapPlusButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)contentScrollView;
@end

