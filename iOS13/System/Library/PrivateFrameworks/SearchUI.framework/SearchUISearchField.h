/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UISearchTextField.h>

@class SearchUIResultsViewController;

@interface SearchUISearchField : UISearchTextField {

	SearchUIResultsViewController* _resultsViewController;

}

@property (__weak) SearchUIResultsViewController * resultsViewController;              //@synthesize resultsViewController=_resultsViewController - In the implementation block
-(id)nextResponder;
-(SearchUIResultsViewController *)resultsViewController;
-(void)setResultsViewController:(SearchUIResultsViewController *)arg1 ;
@end

