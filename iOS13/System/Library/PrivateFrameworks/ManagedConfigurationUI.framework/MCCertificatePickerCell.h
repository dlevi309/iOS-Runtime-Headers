/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface MCCertificatePickerCell : PSTableCell {

	UILabel* _issuedByLabel;
	UILabel* _issuerLabel;
	UILabel* _expiresByLabel;
	UILabel* _expiryDateLabel;

}
+(id)_dateFormatter;
+(float)defaultCellHeight;
+(id)_attributeFont;
+(float)_attributeLabelSpace;
-(void)setExpirationDate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(id)_labelColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)_checkmarkView;
-(void)setIssuer:(id)arg1 ;
-(id)_attributeLabelCopy;
@end

