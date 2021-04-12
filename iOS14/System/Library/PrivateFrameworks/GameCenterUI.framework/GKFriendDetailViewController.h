/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, UILabel, GKPlayer;

@interface GKFriendDetailViewController : GKDetailViewController {

	GKDashboardPlayerPhotoView* _playerView;
	UILabel* _nicknameLabel;
	UILabel* _nameLabel;
	UILabel* _descriptionLabel;
	GKPlayer* _player;

}

@property (assign,nonatomic) GKDashboardPlayerPhotoView * playerView;              //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) UILabel * nicknameLabel;                              //@synthesize nicknameLabel=_nicknameLabel - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;                           //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                    //@synthesize player=_player - In the implementation block
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(GKDashboardPlayerPhotoView *)playerView;
-(void)setPlayerView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)report:(id)arg1 ;
-(void)viewDidLoad;
-(void)configureView;
-(UILabel *)nicknameLabel;
-(void)setNicknameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
@end

