/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKitCore/UITableViewCell.h>

@class _TtC15ConversationKit19InCallControlButton;

@interface ConversationKit.InCallControlsParticipantTableViewCell : UITableViewCell {

	 nameLabel;
	 subtitleLabel;
	 cameraIcon;
	 avatarView;
	 ringButton;
	 callDelegate;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit19InCallControlButton * ringButton; 
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)didTapRing:(id)arg1 ;
-(_TtC15ConversationKit19InCallControlButton *)ringButton;
@end

