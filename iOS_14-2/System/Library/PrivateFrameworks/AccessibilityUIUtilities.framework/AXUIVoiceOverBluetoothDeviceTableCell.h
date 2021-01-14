/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface AXUIVoiceOverBluetoothDeviceTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	int _state;

}
+(id)checkedImage;
+(id)selectedCheckedImage;
+(id)spacerImage;
+(id)textForBTPairedState:(int)arg1 ;
-(id)accessibilityTableViewCellText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateCheckMarkIcon;
-(void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setDeviceState:(int)arg1 ;
-(void)dealloc;
@end

