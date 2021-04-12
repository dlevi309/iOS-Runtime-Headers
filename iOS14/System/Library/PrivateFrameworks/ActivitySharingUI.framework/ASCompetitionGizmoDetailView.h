/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutForWidth:(double)arg1 ;
-(BOOL)isInteractionEnabled;
-(void)setFriend:(id)arg1 competition:(id)arg2 ;
-(id)initWithDetailViewType:(long long)arg1 ;
-(BOOL)supportsSmackTalkReply;
-(void)setIsInteractionEnabled:(BOOL)arg1 ;
@end

