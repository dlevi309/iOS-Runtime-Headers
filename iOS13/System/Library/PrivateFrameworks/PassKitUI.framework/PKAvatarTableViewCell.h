/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class CNAvatarView, CNContact;

@interface PKAvatarTableViewCell : UITableViewCell {

	CNAvatarView* _avatarView;
	CNContact* _contact;

}

@property (nonatomic,readonly) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CNContact * contact;                      //@synthesize contact=_contact - In the implementation block
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CNAvatarView *)avatarView;
-(id)initWithContact:(id)arg1 delegate:(id)arg2 style:(long long)arg3 reuseIdentifier:(id)arg4 ;
@end

