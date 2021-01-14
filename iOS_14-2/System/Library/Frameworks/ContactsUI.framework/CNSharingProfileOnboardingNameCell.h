/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImage, UITextField, UIView, UIImageView, NSString;

@interface CNSharingProfileOnboardingNameCell : UITableViewCell {

	long long _nameOrder;
	UIImage* _avatarImage;
	UITextField* _givenNameField;
	UITextField* _familyNameField;
	UIView* _fakeSeparator;
	UIImageView* _avatarImageView;

}

@property (nonatomic,retain) UITextField * givenNameField;               //@synthesize givenNameField=_givenNameField - In the implementation block
@property (nonatomic,retain) UITextField * familyNameField;              //@synthesize familyNameField=_familyNameField - In the implementation block
@property (nonatomic,retain) UIView * fakeSeparator;                     //@synthesize fakeSeparator=_fakeSeparator - In the implementation block
@property (nonatomic,retain) UIImageView * avatarImageView;              //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (assign,nonatomic) long long nameOrder;                        //@synthesize nameOrder=_nameOrder - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                      //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * familyName; 
+(id)cellIdentifier;
+(double)desiredMinimumCellHeight;
-(NSString *)familyName;
-(double)separatorHeight;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(long long)nameOrder;
-(id)textFieldForIndex:(long long)arg1 ;
-(void)setNameOrder:(long long)arg1 ;
-(UITextField *)givenNameField;
-(void)setGivenNameField:(UITextField *)arg1 ;
-(UITextField *)familyNameField;
-(void)setFamilyNameField:(UITextField *)arg1 ;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(void)setGivenNameField:(id)arg1 familyNameField:(id)arg2 ;
-(UIView *)fakeSeparator;
-(void)setFakeSeparator:(UIView *)arg1 ;
-(UIImageView *)avatarImageView;
-(void)setAvatarImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

