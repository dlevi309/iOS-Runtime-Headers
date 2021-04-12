/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <UIKitCore/UITableViewController.h>

@class UILabel, NSArray, UIView;

@interface HLPHelpSearchResultTableViewController : UITableViewController {

	UILabel* _footerLabel;
	double _separatorValue;
	NSArray* _searchResults;
	UIView* _footerView;

}

@property (nonatomic,retain) UIView * footerView;                  //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSArray * searchResults;              //@synthesize searchResults=_searchResults - In the implementation block
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)preferSeparatorValue:(double)arg1 ;
-(void)updateWithSearchText:(id)arg1 searchResults:(id)arg2 ;
@end

