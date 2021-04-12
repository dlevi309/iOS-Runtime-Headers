/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)_switchToggled:(id)arg1 ;
-(void)setSwitchIsOn:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)canReload;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)_updateSubviews;
@end

