/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@class GKLeaderboard, GKGameRecord, GKLeaderboardMetadataView, UIStackView, NSLayoutConstraint;

@interface GKLeaderboardSectionHeaderView : UICollectionReusableView {

	BOOL _dataUpdated;
	GKLeaderboard* _leaderboard;
	GKGameRecord* _gameRecord;
	GKLeaderboardMetadataView* _personalView;
	GKLeaderboardMetadataView* _socialView;
	UIStackView* _container;
	NSLayoutConstraint* _contentInsetTop;
	NSLayoutConstraint* _contentInsetBottom;
	NSLayoutConstraint* _contentInsetTrailing;
	NSLayoutConstraint* _contentInsetLeading;

}

@property (assign,nonatomic) BOOL dataUpdated;                                       //@synthesize dataUpdated=_dataUpdated - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                            //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKGameRecord * gameRecord;                              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) GKLeaderboardMetadataView * personalView;               //@synthesize personalView=_personalView - In the implementation block
@property (nonatomic,retain) GKLeaderboardMetadataView * socialView;                 //@synthesize socialView=_socialView - In the implementation block
@property (nonatomic,retain) UIStackView * container;                                //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetTop;                   //@synthesize contentInsetTop=_contentInsetTop - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetBottom;                //@synthesize contentInsetBottom=_contentInsetBottom - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetTrailing;              //@synthesize contentInsetTrailing=_contentInsetTrailing - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentInsetLeading;               //@synthesize contentInsetLeading=_contentInsetLeading - In the implementation block
-(void)updateLayout;
-(void)setContainer:(UIStackView *)arg1 ;
-(NSLayoutConstraint *)contentInsetBottom;
-(void)setContentInsetTop:(NSLayoutConstraint *)arg1 ;
-(void)setPersonalView:(GKLeaderboardMetadataView *)arg1 ;
-(void)setSocialView:(GKLeaderboardMetadataView *)arg1 ;
-(GKLeaderboardMetadataView *)personalView;
-(GKLeaderboardMetadataView *)socialView;
-(id)formattedNumber:(id)arg1 ;
-(BOOL)dataUpdated;
-(void)setDataUpdated:(BOOL)arg1 ;
-(GKGameRecord *)gameRecord;
-(id)attributedStringWithSymbol:(id)arg1 ;
-(void)updateHighlightsWithGameRecord:(id)arg1 leaderboardCount:(long long)arg2 setCount:(long long)arg3 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(NSLayoutConstraint *)contentInsetTrailing;
-(void)setContentInsetTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentInsetLeading;
-(void)setContentInsetLeading:(NSLayoutConstraint *)arg1 ;
-(void)awakeFromNib;
-(void)setContentInsetBottom:(NSLayoutConstraint *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)container;
-(NSLayoutConstraint *)contentInsetTop;
@end

