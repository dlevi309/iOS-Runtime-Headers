/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface CNFRegSettingsTemporaryPhoneCell : PSTableCell {

	UILabel* _phoneNumberLabel;
	UILabel* _expirationLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UILabel * phoneNumberLabel;              //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * expirationLabel;               //@synthesize expirationLabel=_expirationLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(void)setPhoneNumberLabel:(UILabel *)arg1 ;
-(UILabel *)phoneNumberLabel;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setExpirationLabel:(UILabel *)arg1 ;
-(UILabel *)expirationLabel;
-(unsigned long long)daysUntilExpiration:(id)arg1 ;
@end

