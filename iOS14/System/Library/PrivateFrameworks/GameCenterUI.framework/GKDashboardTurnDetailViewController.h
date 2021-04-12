/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDetailViewController.h>

@class GKTurnBasedMatch, UIView, UILabel, UIButton, NSLayoutConstraint;

@interface GKDashboardTurnDetailViewController : GKDetailViewController {

	BOOL _shouldShowPlay;
	BOOL _shouldShowQuit;
	GKTurnBasedMatch* _match;
	UIView* _contentVerticalCenteringView;
	UIView* _turnDetailContentView;
	UILabel* _playingWithLabel;
	UILabel* _createdLabel;
	UIButton* _firstButton;
	UIButton* _secondButton;
	NSLayoutConstraint* _secondButtonCenteringConstraint;

}

@property (assign,nonatomic) UIView * contentVerticalCenteringView;                             //@synthesize contentVerticalCenteringView=_contentVerticalCenteringView - In the implementation block
@property (assign,nonatomic) UIView * turnDetailContentView;                                    //@synthesize turnDetailContentView=_turnDetailContentView - In the implementation block
@property (assign,nonatomic) UILabel * playingWithLabel;                                        //@synthesize playingWithLabel=_playingWithLabel - In the implementation block
@property (assign,nonatomic) UILabel * createdLabel;                                            //@synthesize createdLabel=_createdLabel - In the implementation block
@property (assign,nonatomic) UIButton * firstButton;                                            //@synthesize firstButton=_firstButton - In the implementation block
@property (assign,nonatomic) UIButton * secondButton;                                           //@synthesize secondButton=_secondButton - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * secondButtonCenteringConstraint;              //@synthesize secondButtonCenteringConstraint=_secondButtonCenteringConstraint - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatch * match;                                          //@synthesize match=_match - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;                                               //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQuit;                                               //@synthesize shouldShowQuit=_shouldShowQuit - In the implementation block
-(BOOL)shouldShowPlay;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(GKTurnBasedMatch *)match;
-(void)chooseMatch:(id)arg1 ;
-(void)quitMatch:(id)arg1 ;
-(void)removeMatch:(id)arg1 ;
-(void)disableButtons;
-(void)refreshPresenter;
-(void)handleTurnBasedEvent:(id)arg1 ;
-(id)initWithTurnBasedMatch:(id)arg1 ;
-(BOOL)shouldShowQuit;
-(void)setShouldShowQuit:(BOOL)arg1 ;
-(UIView *)contentVerticalCenteringView;
-(UILabel *)playingWithLabel;
-(void)setContentVerticalCenteringView:(UIView *)arg1 ;
-(UIView *)turnDetailContentView;
-(void)setTurnDetailContentView:(UIView *)arg1 ;
-(void)setPlayingWithLabel:(UILabel *)arg1 ;
-(UILabel *)createdLabel;
-(void)setCreatedLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)secondButtonCenteringConstraint;
-(void)setSecondButtonCenteringConstraint:(NSLayoutConstraint *)arg1 ;
-(void)declineInvitation:(id)arg1 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)turnOK:(id)arg1 ;
-(void)viewDidLoad;
-(void)acceptInvitation:(id)arg1 ;
-(UIButton *)firstButton;
-(void)setFirstButton:(UIButton *)arg1 ;
-(UIButton *)secondButton;
-(void)setSecondButton:(UIButton *)arg1 ;
-(void)dealloc;
@end

