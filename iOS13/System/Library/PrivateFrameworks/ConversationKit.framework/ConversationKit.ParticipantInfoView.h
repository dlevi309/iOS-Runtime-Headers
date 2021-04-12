/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC15ConversationKit33ParticipantViewLabelContainerView;

@interface ConversationKit.ParticipantInfoView : UIView {

	 gradientView;
	 nameLabel;
	 shutterButton;
	 expandButton;
	 isSmall;
	 isExpanded;
	 customCornerRadius;
	 isMomentsAvailable;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit33ParticipantViewLabelContainerView * nameLabel; 
@property (assign,nonatomic) BOOL isMomentsAvailable; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_TtC15ConversationKit33ParticipantViewLabelContainerView *)nameLabel;
-(BOOL)isMomentsAvailable;
-(void)didTapShutterButton;
-(void)didTapExpandButton;
-(void)setIsMomentsAvailable:(BOOL)arg1 ;
@end

