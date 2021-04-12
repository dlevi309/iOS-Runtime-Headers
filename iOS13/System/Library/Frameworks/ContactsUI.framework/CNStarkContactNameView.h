/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithName:(id)arg1 ;
-(CNContact *)contact;
-(UILabel *)nameLabel;
-(void)setupConstraints;
-(CNAvatarViewController *)avatarViewController;
-(void)setupNameLabel;
-(void)setupAvatar;
@end

