/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class IMNickname, CKAvatarView, UILabel;

@interface CKNicknameAlertHeaderView : UIView {

	IMNickname* _nickname;
	CKAvatarView* _avatarView;
	UILabel* _nameLabel;
	UILabel* _handleLabel;

}

@property (nonatomic,retain) IMNickname * nickname;                  //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * handleLabel;                  //@synthesize handleLabel=_handleLabel - In the implementation block
-(id)nameText;
-(id)initWithFrame:(CGRect)arg1 nickname:(id)arg2 ;
-(IMNickname *)nickname;
-(CKAvatarView *)avatarView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateAvatarView;
-(UILabel *)handleLabel;
-(void)setNickname:(IMNickname *)arg1 ;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)setHandleLabel:(UILabel *)arg1 ;
-(void)setupViews;
-(UILabel *)nameLabel;
-(id)handleText;
-(void)setNameLabel:(UILabel *)arg1 ;
@end

