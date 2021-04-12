/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(IMNickname *)nickname;
-(void)setNickname:(IMNickname *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setupViews;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)_updateAvatarView;
-(UILabel *)handleLabel;
-(id)nameText;
-(id)handleText;
-(id)initWithFrame:(CGRect)arg1 nickname:(id)arg2 ;
-(void)setHandleLabel:(UILabel *)arg1 ;
@end

