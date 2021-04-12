/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface PSUICellularPlanOptionTableCell : PSTableCell {

	UILabel* _nameLabel;
	UILabel* _numberLabel;
	UILabel* _centeredNameLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                    //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * centeredNameLabel;              //@synthesize centeredNameLabel=_centeredNameLabel - In the implementation block
+(long long)cellStyle;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(id)detailTextLabel;
-(BOOL)canReload;
-(UILabel *)nameLabel;
-(id)textLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(BOOL)canBeChecked;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)numberLabel;
-(void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2 ;
-(void)_setCenteredText:(id)arg1 ;
-(UILabel *)centeredNameLabel;
-(void)setCenteredNameLabel:(UILabel *)arg1 ;
@end

