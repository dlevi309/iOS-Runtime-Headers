/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableHeaderView.h>

@class UITextField, UILabel;

@interface PKSearchableTableHeaderView : PKTableHeaderView {

	UITextField* _searchField;
	UILabel* _searchFieldLabel;
	BOOL _showsSearchField;

}

@property (nonatomic,readonly) UILabel * searchFieldLabel; 
@property (nonatomic,readonly) UITextField * searchField; 
@property (assign,nonatomic) BOOL showsSearchField;                     //@synthesize showsSearchField=_showsSearchField - In the implementation block
@property (nonatomic,readonly) double searchFieldOffset; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(UITextField *)searchField;
-(UILabel *)searchFieldLabel;
-(void)setShowsSearchField:(BOOL)arg1 ;
-(double)searchFieldOffset;
-(BOOL)showsSearchField;
@end

