/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/

#import <ActivitySharingUI/ActivitySharingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ASCompetitionScoreView, ASCompetitionGraphView, ASCompetitionTimeRemainingLabel, ASCompetitionMessageBubbleView, UIView, NSNumber;

@interface ASCompetitionGizmoDetailView : UIView {

	ASCompetitionScoreView* _totalScoreView;
	ASCompetitionScoreView* _totalWinsScoreView;
	ASCompetitionGraphView* _graphView;
	ASCompetitionTimeRemainingLabel* _timeRemainingLabel;
	ASCompetitionMessageBubbleView* _messageBubbleView;
	UIView* _timeRemainingSeparator;
	UIView* _totalWinsSeparator;
	NSNumber* _previousLayoutWidth;
	long long _modules;
	long long _type;
	BOOL _isInteractionEnabled;

}

@property (assign,nonatomic) BOOL isInteractionEnabled;              //@synthesize isInteractionEnabled=_isInteractionEnabled - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)layoutForWidth:(double)arg1 ;
-(BOOL)isInteractionEnabled;
-(void)setFriend:(id)arg1 competition:(id)arg2 ;
-(id)initWithDetailViewType:(long long)arg1 ;
-(BOOL)supportsSmackTalkReply;
-(void)setIsInteractionEnabled:(BOOL)arg1 ;
@end

