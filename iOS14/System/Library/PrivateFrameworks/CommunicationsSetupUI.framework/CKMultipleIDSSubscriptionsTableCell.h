/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface CKMultipleIDSSubscriptionsTableCell : PSTableCell {

	UILabel* _nameLabel;
	UILabel* _numberLabel;
	UILabel* _centeredNameLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                    //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * centeredNameLabel;              //@synthesize centeredNameLabel=_centeredNameLabel - In the implementation block
+(long long)cellStyle;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(BOOL)canBeChecked;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)numberLabel;
-(UILabel *)centeredNameLabel;
-(void)setCenteredNameLabel:(UILabel *)arg1 ;
@end

