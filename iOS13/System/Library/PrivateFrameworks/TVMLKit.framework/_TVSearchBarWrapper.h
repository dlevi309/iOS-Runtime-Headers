/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIView.h>

@class UISearchBar;

@interface _TVSearchBarWrapper : UIView {

	UISearchBar* _searchBar;
	BOOL _enabled;

}

@property (nonatomic,retain) UISearchBar * searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)canBecomeFocused;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
@end

