/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class _HKEmergencyContact, UILabel;

@interface _HKEmergencyCardContactCell : UITableViewCell {

	_HKEmergencyContact* _contact;
	UILabel* _relationshipLabel;
	UILabel* _nameLabel;
	UILabel* _phoneNumberLabel;

}

@property (nonatomic,retain) UILabel * relationshipLabel;                //@synthesize relationshipLabel=_relationshipLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * phoneNumberLabel;                 //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)dealloc;
-(_HKEmergencyContact *)contact;
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setupConstraints;
-(void)setPhoneNumberLabel:(UILabel *)arg1 ;
-(UILabel *)phoneNumberLabel;
-(void)_setupIndividualViews;
-(void)setupViewHeirarchy;
-(UILabel *)relationshipLabel;
-(void)setContact:(id)arg1 showRelationship:(BOOL)arg2 showPhoneIcon:(BOOL)arg3 ;
-(void)setRelationshipLabel:(UILabel *)arg1 ;
@end

