/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>

@class CNAvatarView, CAShapeLayer;

@interface CNContactGridClippingView : UIView {

	CNAvatarView* _avatarView;
	CAShapeLayer* _actionsMaskLayer;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * actionsMaskLayer;               //@synthesize actionsMaskLayer=_actionsMaskLayer - In the implementation block
@property (assign,nonatomic) BOOL masksToAvatar; 
-(CNAvatarView *)avatarView;
-(void)layoutSubviews;
-(void)setMasksToAvatar:(BOOL)arg1 ;
-(BOOL)masksToAvatar;
-(CAShapeLayer *)actionsMaskLayer;
-(void)setActionsMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

