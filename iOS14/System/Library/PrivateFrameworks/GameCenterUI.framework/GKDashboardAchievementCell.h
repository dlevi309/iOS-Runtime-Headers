/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKRectShadowCell.h>

@class GKAchievement, GKAchievementIconView, GKResizingLabel, UILabel, UIView;

@interface GKDashboardAchievementCell : GKRectShadowCell {

	GKAchievement* _achievement;
	GKAchievement* _localAchievement;
	GKAchievementIconView* _iconView;
	GKResizingLabel* _titleLabel;
	GKResizingLabel* _descriptionLabel;
	UILabel* _pointsLabel;
	UILabel* _pointsTextLabel;

}

@property (nonatomic,retain) GKAchievement * achievement;                     //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;                //@synthesize localAchievement=_localAchievement - In the implementation block
@property (assign,nonatomic) GKAchievementIconView * iconView;                //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) GKResizingLabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) GKResizingLabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic) UILabel * pointsLabel;                           //@synthesize pointsLabel=_pointsLabel - In the implementation block
@property (assign,nonatomic) UILabel * pointsTextLabel;                       //@synthesize pointsTextLabel=_pointsTextLabel - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
-(GKResizingLabel *)titleLabel;
-(UIView *)popoverSourceView;
-(void)setTitleLabel:(GKResizingLabel *)arg1 ;
-(GKAchievement *)achievement;
-(GKAchievementIconView *)iconView;
-(void)setIconView:(GKAchievementIconView *)arg1 ;
-(UILabel *)pointsLabel;
-(void)setPointsLabel:(UILabel *)arg1 ;
-(UILabel *)pointsTextLabel;
-(void)setPointsTextLabel:(UILabel *)arg1 ;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(void)setLocalAchievement:(GKAchievement *)arg1 ;
-(void)setupForAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(void)setDescriptionLabel:(GKResizingLabel *)arg1 ;
-(GKAchievement *)localAchievement;
-(GKResizingLabel *)descriptionLabel;
-(void)dealloc;
@end

