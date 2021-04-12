/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>

@class CNContact, UILabel, CNAvatarViewController;

@interface CNStarkContactNameView : UIView {

	CNContact* _contact;
	UILabel* _nameLabel;
	CNAvatarViewController* _avatarViewController;

}

@property (nonatomic,readonly) CNContact * contact;                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
-(CNContact *)contact;
-(CNAvatarViewController *)avatarViewController;
-(id)initWithName:(id)arg1 ;
-(void)setupAvatar;
-(void)setupNameLabel;
-(UILabel *)nameLabel;
-(void)setupConstraints;
@end

