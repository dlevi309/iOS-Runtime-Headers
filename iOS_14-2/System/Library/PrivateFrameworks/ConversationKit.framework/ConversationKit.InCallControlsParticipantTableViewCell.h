/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)didTapRing:(id)arg1 ;
-(_TtC15ConversationKit19InCallControlButton *)ringButton;
@end

