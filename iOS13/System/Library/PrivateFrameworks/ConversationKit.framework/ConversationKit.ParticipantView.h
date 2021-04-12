/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC15ConversationKit19ParticipantInfoView;

@interface ConversationKit.ParticipantView : UIView {

	 backgroundEffectsView;
	 contentView;
	 monogramView;
	 videoView;
	 alertView;
	 videoOverlayView;
	 bottomBar;
	 debugLabel;
	 mostRecentViewModelHash;
	??? loggingIdentifier;
	 hideBottomBarTimer;
	 hideAlertViewTimer;
	??? participantIdentifier;
	 delegate;
	 isInRoster;
	 customCornerRadius;
	 isExpanded;

}

@property (readonly,nonatomic) _TtC15ConversationKit19ParticipantInfoView * bottomBar; 
@property (assign,nonatomic) BOOL isInRoster; 
@property (assign,nonatomic) BOOL isExpanded; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(_TtC15ConversationKit19ParticipantInfoView *)bottomBar;
-(BOOL)isInRoster;
-(void)setIsInRoster:(BOOL)arg1 ;
@end

