/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UISearchController.h>

@class UINavigationController, PKSearchResultsViewController;

@interface PKSearchResultsSearchController : UISearchController {

	UINavigationController* _navVC;
	PKSearchResultsViewController* _resultsVC;
	BOOL _searchBarWasFirstResponder;
	BOOL _showSearchBar;

}
-(void)viewWillLayoutSubviews;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)setSearchBarVisible:(BOOL)arg1 ;
-(void)_updateSearchBarFrame;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(long long)preferredStatusBarStyle;
-(id)initWithPaymentDataProvider:(id)arg1 transactionSource:(id)arg2 ;
@end

