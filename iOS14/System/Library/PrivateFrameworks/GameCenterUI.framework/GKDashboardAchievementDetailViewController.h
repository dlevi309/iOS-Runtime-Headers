/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDetailViewController.h>

@class GKAchievementIconView, UILabel, UIButton, GKAchievement;

@interface GKDashboardAchievementDetailViewController : GKDetailViewController {

	GKAchievementIconView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _progressLabel;
	UILabel* _disabledLabel;
	UIButton* _firstButton;
	UIButton* _secondButton;
	GKAchievement* _achievement;
	GKAchievement* _localAchievement;

}

@property (assign,nonatomic) GKAchievementIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                    //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UILabel * progressLabel;                       //@synthesize progressLabel=_progressLabel - In the implementation block
@property (assign,nonatomic) UILabel * disabledLabel;                       //@synthesize disabledLabel=_disabledLabel - In the implementation block
@property (assign,nonatomic) UIButton * firstButton;                        //@synthesize firstButton=_firstButton - In the implementation block
@property (assign,nonatomic) UIButton * secondButton;                       //@synthesize secondButton=_secondButton - In the implementation block
@property (nonatomic,retain) GKAchievement * achievement;                   //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;              //@synthesize localAchievement=_localAchievement - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(GKAchievement *)achievement;
-(id)preferredFocusEnvironments;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(void)share:(id)arg1 ;
-(GKAchievementIconView *)iconView;
-(void)setIconView:(GKAchievementIconView *)arg1 ;
-(void)viewDidLoad;
-(UILabel *)progressLabel;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(void)setLocalAchievement:(GKAchievement *)arg1 ;
-(void)configureForAchievements;
-(void)challenge:(id)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(id)initWithAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(UILabel *)disabledLabel;
-(void)setDisabledLabel:(UILabel *)arg1 ;
-(UIButton *)firstButton;
-(void)setFirstButton:(UIButton *)arg1 ;
-(UIButton *)secondButton;
-(void)setSecondButton:(UIButton *)arg1 ;
-(GKAchievement *)localAchievement;
-(UILabel *)descriptionLabel;
-(void)dealloc;
@end

