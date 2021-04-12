/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TSSearchResultsProviderType.h>
#import <libobjc.A.dylib/TSSearchResultsPanable.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@interface NewsUI2.SearchViewController : UIViewController <UISearchBarDelegate, UISearchControllerDelegate, UICollectionViewDelegate, TSSearchResultsProviderType, TSSearchResultsPanable, TSTabBarSplitViewAutoObserver> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 toolbarManager;
	 parsecQueryID;
	 searchBar;
	 searchAction;
	 sharingActivityProviderFactory;

}

@property (readonly,nonatomic) BOOL isSearchResultsPane; 
-(void)viewWillLayoutSubviews;
-(void)cancelSearch;
-(void)didDismissSearchController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)isSearchResultsPane;
-(void)tabBarSplitViewWillObsureView;
-(void)tabBarSplitViewDidUnobsureView;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)performSearchForText:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

