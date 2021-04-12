/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@class UISplitViewController;

@interface StocksUI.StockSearchViewController : UIViewController <UISearchControllerDelegate, UISearchBarDelegate, UITableViewDelegate> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 searchAction;
	 userActivityManager;
	 searchBar;

}

@property (readonly,nonatomic) UISplitViewController * splitViewController; 
-(void)viewWillLayoutSubviews;
-(UISplitViewController *)splitViewController;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

