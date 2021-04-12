/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKitCore/UITableViewCell.h>

@class _TtC15ConversationKit19InCallControlButton;

@interface ConversationKit.InCallControlsTitleCell : UITableViewCell {

	 summaryLabel;
	 titleLabel;
	 messagesButton;
	 isAccessiblityConstraintsEnabled;
	 subtitleLabelFirstBaselineLayoutConstraint;
	 titleLabelFirstBaselineLayoutConstraint;
	 titleLabelLastBaselineLayoutConstraint;
	 titleLabelFirstBaselineTopLayoutConstraint;
	 titleLabelLastBaselineBottomLayoutConstraint;
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

