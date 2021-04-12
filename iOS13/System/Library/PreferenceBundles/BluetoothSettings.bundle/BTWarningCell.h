/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSArray;

@interface BTWarningCell : PSTableCell {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	NSArray* _constraints;

}
+(long long)cellStyle;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)updateConstraints;
-(BOOL)canBecomeFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

