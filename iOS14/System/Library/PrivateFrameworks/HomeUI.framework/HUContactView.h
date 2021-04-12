/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CNContact, NSArray, NSString, CNAvatarView, NSMutableArray, UILabel, NSAttributedString;

@interface HUContactView : UIView {

	double _avatarDiameter;
	CNContact* _contact;
	long long _contactNameFormatStyle;
	unsigned long long _numberOfLinesForMessage;
	NSArray* _accounts;
	NSString* _contactNameFontTextStyle;
	CNAvatarView* _avatarView;
	NSMutableArray* _constraints;
	UILabel* _nameLabel;
	UILabel* _messageLabel;
	UILabel* _appleIDAccountLabel;
	UILabel* _appleMusicAccountLabel;

}

@property (nonatomic,retain) CNAvatarView * avatarView;                               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) NSMutableArray * constraints;                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                     //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * appleIDAccountLabel;                           //@synthesize appleIDAccountLabel=_appleIDAccountLabel - In the implementation block
@property (nonatomic,retain) UILabel * appleMusicAccountLabel;                        //@synthesize appleMusicAccountLabel=_appleMusicAccountLabel - In the implementation block
@property (assign,nonatomic) double avatarDiameter;                                   //@synthesize avatarDiameter=_avatarDiameter - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                     //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) long long contactNameFormatStyle;                        //@synthesize contactNameFormatStyle=_contactNameFormatStyle - In the implementation block
@property (nonatomic,retain) NSAttributedString * message; 
@property (assign,nonatomic) unsigned long long numberOfLinesForMessage;              //@synthesize numberOfLinesForMessage=_numberOfLinesForMessage - In the implementation block
@property (nonatomic,retain) NSArray * accounts;                                      //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSString * contactNameFontTextStyle;                     //@synthesize contactNameFontTextStyle=_contactNameFontTextStyle - In the implementation block
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(NSMutableArray *)constraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(CNContact *)contact;
-(NSAttributedString *)message;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateConstraints;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(CNAvatarView *)avatarView;
-(UILabel *)messageLabel;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)_setupViews;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setAvatarDiameter:(double)arg1 ;
-(double)avatarDiameter;
-(void)setContactNameFormatStyle:(long long)arg1 ;
-(void)setContactNameFontTextStyle:(NSString *)arg1 ;
-(long long)contactNameFormatStyle;
-(unsigned long long)numberOfLinesForMessage;
-(UILabel *)appleIDAccountLabel;
-(void)setAppleIDAccountLabel:(UILabel *)arg1 ;
-(UILabel *)appleMusicAccountLabel;
-(void)setAppleMusicAccountLabel:(UILabel *)arg1 ;
-(BOOL)_isPhoneNumberOnlyAccount;
-(void)_updateNameLabelFont;
-(NSString *)contactNameFontTextStyle;
-(void)setNumberOfLinesForMessage:(unsigned long long)arg1 ;
@end

