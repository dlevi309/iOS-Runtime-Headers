/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutForWidth:(double)arg1 ;
-(double)lastBaselineY;
-(double)participantScoreViewWidthForParticipant:(long long)arg1 maximumWidth:(double)arg2 ;
-(void)setFriend:(id)arg1 competition:(id)arg2 ;
@end

