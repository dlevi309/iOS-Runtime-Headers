/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNAvatarView *)avatarView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithContact:(id)arg1 delegate:(id)arg2 style:(long long)arg3 reuseIdentifier:(id)arg4 ;
@end

