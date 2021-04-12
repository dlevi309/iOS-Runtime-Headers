/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchBarDelegate_Private.h>

@interface VideosUI.SearchTemplateController : UIViewController <UISearchControllerDelegate, UISearchBarDelegate, UISearchBarDelegate_Private> {

	 maxSearchFieldWidth;
	 searchController;
	 recentlySearchedDataManager;
	 document;
	 currentSearchTextInputSource;
	 searchHintsServiceRequest;
	 searchTopResultsServiceRequest;
	 resultsServiceRequest;
	 landingPageViewController;
	 resultsViewController;
	 activeSearchState;

}
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(CGRect)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)handleWithKeyboardShowNotification:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

