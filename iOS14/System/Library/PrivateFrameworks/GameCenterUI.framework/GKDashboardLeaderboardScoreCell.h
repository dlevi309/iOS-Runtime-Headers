/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKRectShadowCell.h>

@class GKScore, GKDashboardPlayerPhotoView, NSLayoutConstraint, UILabel, UIView;

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell {

	GKScore* _score;
	GKDashboardPlayerPhotoView* _playerView;
	NSLayoutConstraint* _playerViewHeightConstraint;
	UILabel* _rankLabel;
	UILabel* _nameLabel;
	UILabel* _scoreLabel;
	UIView* _topLine;
	UIView* _bottomLine;
	UIView* _monogramColorView;

}

@property (assign,nonatomic) GKDashboardPlayerPhotoView * playerView;                      //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerViewHeightConstraint;              //@synthesize playerViewHeightConstraint=_playerViewHeightConstraint - In the implementation block
@property (assign,nonatomic) UILabel * rankLabel;                                          //@synthesize rankLabel=_rankLabel - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * scoreLabel;                                         //@synthesize scoreLabel=_scoreLabel - In the implementation block
@property (assign,nonatomic) UIView * topLine;                                             //@synthesize topLine=_topLine - In the implementation block
@property (assign,nonatomic) UIView * bottomLine;                                          //@synthesize bottomLine=_bottomLine - In the implementation block
@property (assign,nonatomic) UIView * monogramColorView;                                   //@synthesize monogramColorView=_monogramColorView - In the implementation block
@property (nonatomic,retain) GKScore * score;                                              //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL linesVisible; 
@property (nonatomic,readonly) UIView * popoverSourceView; 
+(id)lowRankNib;
+(id)highRankNib;
+(CGSize)defaultSize;
-(UIView *)popoverSourceView;
-(GKScore *)score;
-(UILabel *)scoreLabel;
-(UILabel *)rankLabel;
-(UIView *)monogramColorView;
-(NSLayoutConstraint *)playerViewHeightConstraint;
-(void)setPlayerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRankLabel:(UILabel *)arg1 ;
-(void)setScoreLabel:(UILabel *)arg1 ;
-(void)setTopLine:(UIView *)arg1 ;
-(void)setMonogramColorView:(UIView *)arg1 ;
-(UIView *)topLine;
-(BOOL)linesVisible;
-(void)setScore:(GKScore *)arg1 ;
-(GKDashboardPlayerPhotoView *)playerView;
-(void)setPlayerView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setupForScore:(id)arg1 ;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(void)setLinesVisible:(BOOL)arg1 ;
-(void)awakeFromNib;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

