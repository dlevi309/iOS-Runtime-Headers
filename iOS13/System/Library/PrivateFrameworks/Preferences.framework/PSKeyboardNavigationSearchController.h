/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UISearchController.h>

@protocol PSKeyboardNavigationSearchResultsController;
@class UIViewController, PSKeyboardNavigationSearchBar;

@interface PSKeyboardNavigationSearchController : UISearchController {

	UIViewController*<PSKeyboardNavigationSearchResultsController> searchResultsController;
	PSKeyboardNavigationSearchBar* searchBar;

}

@property (nonatomic,retain) PSKeyboardNavigationSearchBar * searchBar; 
@property (nonatomic,retain) UIViewController*<PSKeyboardNavigationSearchResultsController> searchResultsController; 
-(PSKeyboardNavigationSearchBar *)searchBar;
-(void)setSearchBar:(PSKeyboardNavigationSearchBar *)arg1 ;
-(UIViewController*<PSKeyboardNavigationSearchResultsController>)searchResultsController;
-(id)initWithSearchResultsController:(id)arg1 ;
-(void)_escapeKeyPressed;
-(void)_downArrowKeyPressed;
-(void)_upArrowKeyPressed;
-(void)setSearchResultsController:(UIViewController*<PSKeyboardNavigationSearchResultsController>)arg1 ;
@end

