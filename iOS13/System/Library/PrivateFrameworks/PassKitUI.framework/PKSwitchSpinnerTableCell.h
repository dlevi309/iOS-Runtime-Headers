/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <Preferences/PSTableCell.h>

@protocol PKSwitchSpinnerTableCellDelegate;
@class UIActivityIndicatorView, UISwitch;

@interface PKSwitchSpinnerTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	UISwitch* _switch;
	BOOL _showSpinner;
	id<PKSwitchSpinnerTableCellDelegate> _delegate;

}
-(void)layoutSubviews;
-(void)_updateSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)_switchToggled:(id)arg1 ;
-(void)setSwitchIsOn:(BOOL)arg1 ;
@end

