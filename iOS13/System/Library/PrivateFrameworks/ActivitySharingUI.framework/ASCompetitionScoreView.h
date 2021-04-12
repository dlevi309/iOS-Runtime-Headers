/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
*/

#import <ActivitySharingUI/ActivitySharingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ASCompetitionScoreViewConfiguration, ASCompetitionParticipantScoreView, UIImageView, UILabel, NSNumber;

@interface ASCompetitionScoreView : UIView {

	ASCompetitionScoreViewConfiguration* _configuration;
	ASCompetitionParticipantScoreView* _myScoreView;
	ASCompetitionParticipantScoreView* _opponentScoreView;
	UIImageView* _achievementThumbnailView;
	UILabel* _scoreTypeHeaderLabel;
	NSNumber* _previousLayoutWidth;
	BOOL _isRTLLayout;

}

@property (nonatomic,readonly) double lastBaselineY; 
+(double)preferredHeightForConfiguration:(id)arg1 friend:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)layoutForWidth:(double)arg1 ;
-(double)lastBaselineY;
-(double)participantScoreViewWidthForParticipant:(long long)arg1 maximumWidth:(double)arg2 ;
-(void)setFriend:(id)arg1 competition:(id)arg2 ;
@end

