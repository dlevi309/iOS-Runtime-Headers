/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<CNAvatarViewController>)avatarViewController;
-(UIView *)avatarView;
-(void)_setupConstraints;
-(HFUserHandle *)userHandle;
-(void)setUserHandle:(HFUserHandle *)arg1 ;
@end

