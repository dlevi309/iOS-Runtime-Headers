/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableCell.h>

@class UILabel, STCandyBarView, UIImageView, NSLayoutConstraint;

@interface STUsageCell : STTableCell {

	UILabel* _itemNameLabel;
	STCandyBarView* _usageBarView;
	UILabel* _usageLabel;
	UIImageView* _trustWarningImageView;
	NSLayoutConstraint* _usageBarWidthConstraint;

}

@property (readonly) UIImageView * trustWarningImageView;                                 //@synthesize trustWarningImageView=_trustWarningImageView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * usageBarWidthConstraint;              //@synthesize usageBarWidthConstraint=_usageBarWidthConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * itemNameLabel;                                   //@synthesize itemNameLabel=_itemNameLabel - In the implementation block
@property (nonatomic,readonly) STCandyBarView * usageBarView;                             //@synthesize usageBarView=_usageBarView - In the implementation block
@property (nonatomic,readonly) UILabel * usageLabel;                                      //@synthesize usageLabel=_usageLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(UILabel *)usageLabel;
-(id)value;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
-(UILabel *)itemNameLabel;
-(STCandyBarView *)usageBarView;
-(NSLayoutConstraint *)usageBarWidthConstraint;
-(UIImageView *)trustWarningImageView;
@end

