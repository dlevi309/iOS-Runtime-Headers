/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSArray;

@interface FLHeaderCell : PSTableCell {

	UILabel* _followTitle;
	UILabel* _followSubtitle;
	NSArray* _constraints;

}
+(long long)cellStyle;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

