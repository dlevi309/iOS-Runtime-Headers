/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSArray;

@interface PSGFollowUpHeaderCell : PSTableCell {

	UILabel* _followTitle;
	UILabel* _followSubtitle;
	NSArray* _constraints;

}
+(long long)cellStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
@end

