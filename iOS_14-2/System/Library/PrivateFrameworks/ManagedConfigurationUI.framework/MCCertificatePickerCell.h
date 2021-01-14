/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_checkmarkView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(void)setIssuer:(id)arg1 ;
-(id)_labelColor;
-(void)setChecked:(BOOL)arg1 ;
-(id)_attributeLabelCopy;
@end

