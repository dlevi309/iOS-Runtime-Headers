/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableArray *)constraints;
-(NSAttributedString *)message;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)accounts;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateConstraints;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)_setupViews;
-(void)setAccounts:(NSArray *)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(double)avatarDiameter;
-(void)setAvatarDiameter:(double)arg1 ;
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

