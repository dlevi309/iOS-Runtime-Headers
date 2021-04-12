/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTitleValueCell.h>

@protocol CNAvatarViewController;
@class HFUserHandle, UIView;

@interface HUUserTitleValueCell : HUTitleValueCell {

	HFUserHandle* _userHandle;
	id<CNAvatarViewController> _avatarViewController;
	UIView* _avatarView;

}

@property (nonatomic,readonly) id<CNAvatarViewController> avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,readonly) UIView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) HFUserHandle * userHandle;                                      //@synthesize userHandle=_userHandle - In the implementation block
-(void)_setupConstraints;
-(id<CNAvatarViewController>)avatarViewController;
-(void)prepareForReuse;
-(UIView *)avatarView;
-(HFUserHandle *)userHandle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setUserHandle:(HFUserHandle *)arg1 ;
@end

