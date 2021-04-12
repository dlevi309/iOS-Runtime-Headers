/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKChallenge, UIView, UILabel, GKDashboardPlayerPhotoView, GKButton, UIStackView, NSLayoutConstraint;

@interface GKChallengeDetailViewController : GKDashboardCollectionViewController {

	BOOL _shouldShowPlay;
	id _delegate;
	GKChallenge* _challenge;
	UIView* _iconView;
	UILabel* _categoryLabel;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	GKDashboardPlayerPhotoView* _playerAvatarView;
	UILabel* _challengeByNameLabel;
	GKButton* _playNowButton;
	GKButton* _declineButton;
	UIStackView* _artworkStack;
	UIStackView* _challengerStack;
	UIStackView* _actionStack;
	NSLayoutConstraint* _artworkStackPortraitTopConstraint;
	NSLayoutConstraint* _artworkViewHeightConstraint;
	NSLayoutConstraint* _challengerStackLandscapeTopConstraint;
	NSLayoutConstraint* _challengerStackPortraitTopConstraint;
	NSLayoutConstraint* _actionStackPortraitTopConstraint;
	NSLayoutConstraint* _actionStackPortraitBottomConstraint;

}

@property (nonatomic,retain) GKChallenge * challenge;                                                 //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * categoryLabel;                                                 //@synthesize categoryLabel=_categoryLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) GKDashboardPlayerPhotoView * playerAvatarView;                           //@synthesize playerAvatarView=_playerAvatarView - In the implementation block
@property (nonatomic,retain) UILabel * challengeByNameLabel;                                          //@synthesize challengeByNameLabel=_challengeByNameLabel - In the implementation block
@property (nonatomic,retain) GKButton * playNowButton;                                                //@synthesize playNowButton=_playNowButton - In the implementation block
@property (nonatomic,retain) GKButton * declineButton;                                                //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) UIStackView * artworkStack;                                              //@synthesize artworkStack=_artworkStack - In the implementation block
@property (nonatomic,retain) UIStackView * challengerStack;                                           //@synthesize challengerStack=_challengerStack - In the implementation block
@property (nonatomic,retain) UIStackView * actionStack;                                               //@synthesize actionStack=_actionStack - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * artworkStackPortraitTopConstraint;                  //@synthesize artworkStackPortraitTopConstraint=_artworkStackPortraitTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * artworkViewHeightConstraint;                        //@synthesize artworkViewHeightConstraint=_artworkViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * challengerStackLandscapeTopConstraint;              //@synthesize challengerStackLandscapeTopConstraint=_challengerStackLandscapeTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * challengerStackPortraitTopConstraint;               //@synthesize challengerStackPortraitTopConstraint=_challengerStackPortraitTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * actionStackPortraitTopConstraint;                   //@synthesize actionStackPortraitTopConstraint=_actionStackPortraitTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * actionStackPortraitBottomConstraint;                //@synthesize actionStackPortraitBottomConstraint=_actionStackPortraitBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;                                                     //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)artworkViewHeightConstraint;
-(void)updateIconViewWithSubView:(id)arg1 ;
-(void)updateLeaderboardImage;
-(void)donePressed:(id)arg1 ;
-(BOOL)shouldShowPlay;
-(id)initWithChallenge:(id)arg1 ;
-(void)playNowPressed:(id)arg1 ;
-(void)declinePressed:(id)arg1 ;
-(void)challengeOK:(id)arg1 ;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(void)setCategoryLabel:(UILabel *)arg1 ;
-(void)setPlayerAvatarView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setChallengeByNameLabel:(UILabel *)arg1 ;
-(void)setPlayNowButton:(GKButton *)arg1 ;
-(void)setArtworkStack:(UIStackView *)arg1 ;
-(void)setChallengerStack:(UIStackView *)arg1 ;
-(void)setActionStack:(UIStackView *)arg1 ;
-(void)setArtworkStackPortraitTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setArtworkViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setChallengerStackLandscapeTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setChallengerStackPortraitTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setActionStackPortraitTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setActionStackPortraitBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(GKChallenge *)challenge;
-(GKButton *)declineButton;
-(void)setDeclineButton:(GKButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)descriptionLabel;
-(id)title;
-(GKDashboardPlayerPhotoView *)playerAvatarView;
-(void)configureForChallenge;
-(void)configureButtons;
-(void)adjustLabelFonts;
-(UIStackView *)artworkStack;
-(UIStackView *)challengerStack;
-(UIStackView *)actionStack;
-(NSLayoutConstraint *)artworkStackPortraitTopConstraint;
-(NSLayoutConstraint *)actionStackPortraitBottomConstraint;
-(UILabel *)categoryLabel;
-(void)adjustFontSizeForLabel:(id)arg1 ;
-(UILabel *)challengeByNameLabel;
-(GKButton *)playNowButton;
-(NSLayoutConstraint *)challengerStackLandscapeTopConstraint;
-(NSLayoutConstraint *)challengerStackPortraitTopConstraint;
-(NSLayoutConstraint *)actionStackPortraitTopConstraint;
@end

