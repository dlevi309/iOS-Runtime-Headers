/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSearchableViewController.h>

@protocol HUSearchBar;
@class UIView, UIScrollView, NSString;

@interface HUSearchableItemTableViewController : HUItemTableViewController <HUSearchableViewController> {

	UIView*<HUSearchBar> _searchBar;
	unsigned long long _searchBarPosition;
	UIScrollView* _searchBarWrapper;

}

@property (nonatomic,readonly) UIScrollView * searchBarWrapper;                   //@synthesize searchBarWrapper=_searchBarWrapper - In the implementation block
@property (nonatomic,readonly) UIView*<HUSearchBar> searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) unsigned long long searchBarPosition;              //@synthesize searchBarPosition=_searchBarPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView*<HUSearchBar>)searchBar;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setupSearchBar;
-(void)viewDidLoad;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 searchBar:(id)arg3 searchBarPosition:(unsigned long long)arg4 ;
-(void)updateForSearch;
-(unsigned long long)searchBarPosition;
-(UIScrollView *)searchBarWrapper;
@end

