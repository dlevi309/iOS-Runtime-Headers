/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class UILabel, STCandyBarView, NSLayoutConstraint;

@interface STUsageCell : STTableCell {

	UILabel* _itemNameLabel;
	STCandyBarView* _usageBarView;
	UILabel* _usageLabel;
	NSLayoutConstraint* _usageBarWidthConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * usageBarWidthConstraint;              //@synthesize usageBarWidthConstraint=_usageBarWidthConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * itemNameLabel;                                   //@synthesize itemNameLabel=_itemNameLabel - In the implementation block
@property (nonatomic,readonly) STCandyBarView * usageBarView;                             //@synthesize usageBarView=_usageBarView - In the implementation block
@property (nonatomic,readonly) UILabel * usageLabel;                                      //@synthesize usageLabel=_usageLabel - In the implementation block
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
-(UILabel *)usageLabel;
-(UILabel *)itemNameLabel;
-(STCandyBarView *)usageBarView;
-(NSLayoutConstraint *)usageBarWidthConstraint;
@end

