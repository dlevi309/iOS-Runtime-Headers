/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSearchResultsController:(UIViewController*<PSKeyboardNavigationSearchResultsController>)arg1 ;
-(void)_escapeKeyPressed;
-(void)_upArrowKeyPressed;
-(void)_downArrowKeyPressed;
-(id)initWithSearchResultsController:(id)arg1 ;
@end

