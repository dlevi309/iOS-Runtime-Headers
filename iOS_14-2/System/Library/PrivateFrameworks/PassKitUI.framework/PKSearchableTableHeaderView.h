/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextField *)searchField;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)searchFieldLabel;
-(void)setShowsSearchField:(BOOL)arg1 ;
-(double)searchFieldOffset;
-(BOOL)showsSearchField;
@end

