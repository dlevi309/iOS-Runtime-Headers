/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKitCore/UITableViewCell.h>

@class _TtC15ConversationKit19InCallControlButton;

@interface ConversationKit.InCallControlsTitleCell : UITableViewCell {

	 subtitleLabel;
	 titleLabel;
	 messagesButton;
	 isAccessiblityConstraintsEnabled;
	 singleLabelTopConstraint;
	 singleLabelBottomConstraint;
	 dualLabelTopConstraint;
	 dualLabelBottomConstraint;
	 interLabelConstraint;
	 trailingTextLayoutGuide;
	 trailingTextShowingButtonLayoutConstraint;
	 trailingTextHidingButtonLayoutConstraint;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit19InCallControlButton * messagesButton; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)didTapMessagesButton:(id)arg1 ;
-(_TtC15ConversationKit19InCallControlButton *)messagesButton;
@end

