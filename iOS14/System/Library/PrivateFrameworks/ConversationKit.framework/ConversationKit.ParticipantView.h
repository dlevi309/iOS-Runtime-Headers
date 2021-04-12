/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	 hideBottomBarTimer;
	 hideAlertViewTimer;
	 delegate;
	 isInRoster;
	 customCornerRadius;
	 isExpanded;

}

@property (readonly,nonatomic) _TtC15ConversationKit19ParticipantInfoView * bottomBar; 
@property (assign,nonatomic) BOOL isInRoster; 
@property (assign,nonatomic) BOOL isExpanded; 
-(BOOL)isExpanded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)layoutSubviews;
-(_TtC15ConversationKit19ParticipantInfoView *)bottomBar;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isInRoster;
-(void)setIsInRoster:(BOOL)arg1 ;
@end

