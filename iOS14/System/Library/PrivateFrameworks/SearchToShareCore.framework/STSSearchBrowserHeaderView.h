/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UISearchBar;

@interface STSSearchBrowserHeaderView : UIView {

	NSLayoutConstraint* _searchBarHeight;
	UISearchBar* _searchBar;

}

@property (nonatomic,readonly) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
-(UISearchBar *)searchBar;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)updateConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

