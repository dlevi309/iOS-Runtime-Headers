/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>

@class UISplitViewController;

@interface StocksUI.StockSearchViewController : UIViewController <UITableViewDelegate, UISearchBarDelegate, UISearchControllerDelegate> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 searchAction;
	 userActivityManager;
	 alertPresenter;
	 editable;
	 allowsSelection;
	 searchBar;

}

@property (readonly,nonatomic) UISplitViewController * splitViewController; 
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)didPresentSearchController:(id)arg1 ;
-(UISplitViewController *)splitViewController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

