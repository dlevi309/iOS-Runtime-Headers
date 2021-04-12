/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	 recordingLocalVideo;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit33ParticipantViewLabelContainerView * nameLabel; 
@property (assign,nonatomic) BOOL isMomentsAvailable; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isMomentsAvailable;
-(_TtC15ConversationKit33ParticipantViewLabelContainerView *)nameLabel;
-(void)didTapShutterButton;
-(void)didTapExpandButton;
-(void)setIsMomentsAvailable:(BOOL)arg1 ;
@end

