/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, UILabel, UIButton, GKLeaderboard, GKScore;

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController {

	GKDashboardPlayerPhotoView* _playerView;
	UILabel* _nameLabel;
	UILabel* _descriptionLabel;
	UILabel* _earnedOnLabel;
	UILabel* _infoLabel;
	UIButton* _firstButton;
	UIButton* _secondButton;
	UIButton* _reportProblemButton;
	GKLeaderboard* _leaderboard;
	GKScore* _score;

}

@property (assign,nonatomic) GKDashboardPlayerPhotoView * playerView;              //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                           //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UILabel * earnedOnLabel;                              //@synthesize earnedOnLabel=_earnedOnLabel - In the implementation block
@property (assign,nonatomic) UILabel * infoLabel;                                  //@synthesize infoLabel=_infoLabel - In the implementation block
@property (assign,nonatomic) UIButton * firstButton;                               //@synthesize firstButton=_firstButton - In the implementation block
@property (assign,nonatomic) UIButton * secondButton;                              //@synthesize secondButton=_secondButton - In the implementation block
@property (assign,nonatomic) UIButton * reportProblemButton;                       //@synthesize reportProblemButton=_reportProblemButton - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                          //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKScore * score;                                      //@synthesize score=_score - In the implementation block
-(id)preferredFocusEnvironments;
-(GKScore *)score;
-(void)share:(id)arg1 ;
-(void)setScore:(GKScore *)arg1 ;
-(GKDashboardPlayerPhotoView *)playerView;
-(void)setPlayerView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)report:(id)arg1 ;
-(void)viewDidLoad;
-(UILabel *)earnedOnLabel;
-(void)configureForScore;
-(id)initWithScore:(id)arg1 leaderboard:(id)arg2 ;
-(void)setEarnedOnLabel:(UILabel *)arg1 ;
-(UIButton *)reportProblemButton;
-(UILabel *)infoLabel;
-(void)setReportProblemButton:(UIButton *)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)challenge:(id)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UIButton *)firstButton;
-(void)setFirstButton:(UIButton *)arg1 ;
-(UIButton *)secondButton;
-(void)setSecondButton:(UIButton *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)dealloc;
@end

