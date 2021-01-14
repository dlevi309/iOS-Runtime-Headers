/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)footerView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)preferSeparatorValue:(double)arg1 ;
-(void)updateWithSearchText:(id)arg1 searchResults:(id)arg2 ;
@end

