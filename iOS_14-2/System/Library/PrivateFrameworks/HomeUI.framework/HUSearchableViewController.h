/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUSearchableViewController <UITextFieldDelegate>
@property (nonatomic,readonly) UIView*<HUSearchBar> searchBar; 
@property (nonatomic,readonly) unsigned long long searchBarPosition; 
@required
-(UIView*<HUSearchBar>)searchBar;
-(void)updateForSearch;
-(unsigned long long)searchBarPosition;

@end

