/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIView, UIButton, NSLayoutConstraint;

@interface GKDefaultPrivacyViewController : UIViewController {

	int _profilePrivacyVisibility;
	UILabel* _publicTitle;
	UILabel* _publicSubTitle;
	UILabel* _friendsOnlyTitle;
	UILabel* _friendsOnlySubtitle;
	UILabel* _meOnlyTitle;
	UILabel* _meOnlySubtitle;
	UIView* _publicDivider;
	UIView* _publicContainer;
	UIButton* _publicButton;
	UIButton* _friendsOnlyButton;
	UIButton* _meOnlyButton;
	NSLayoutConstraint* _topMargin;
	UIView* _buttonContainer;
	NSLayoutConstraint* _mainStackViewTrailingConstraint;
	NSLayoutConstraint* _mainStackViewLeadingConstraint;
	NSLayoutConstraint* _continueButtonEqualMainTitleWidthConstraint;
	NSLayoutConstraint* _continueButtonWidthConstraint;
	NSLayoutConstraint* _continueButtonBottomConstraint;
	UILabel* _underageHintLabel;
	UIButton* _nextButton;
	UILabel* _mainTitle;
	long long _numberOfClicksOnPrivacySelection;

}

@property (nonatomic,retain) UILabel * publicTitle;                                                         //@synthesize publicTitle=_publicTitle - In the implementation block
@property (nonatomic,retain) UILabel * publicSubTitle;                                                      //@synthesize publicSubTitle=_publicSubTitle - In the implementation block
@property (nonatomic,retain) UILabel * friendsOnlyTitle;                                                    //@synthesize friendsOnlyTitle=_friendsOnlyTitle - In the implementation block
@property (nonatomic,retain) UILabel * friendsOnlySubtitle;                                                 //@synthesize friendsOnlySubtitle=_friendsOnlySubtitle - In the implementation block
@property (nonatomic,retain) UILabel * meOnlyTitle;                                                         //@synthesize meOnlyTitle=_meOnlyTitle - In the implementation block
@property (nonatomic,retain) UILabel * meOnlySubtitle;                                                      //@synthesize meOnlySubtitle=_meOnlySubtitle - In the implementation block
@property (nonatomic,retain) UIView * publicDivider;                                                        //@synthesize publicDivider=_publicDivider - In the implementation block
@property (nonatomic,retain) UIView * publicContainer;                                                      //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,retain) UIButton * publicButton;                                                       //@synthesize publicButton=_publicButton - In the implementation block
@property (nonatomic,retain) UIButton * friendsOnlyButton;                                                  //@synthesize friendsOnlyButton=_friendsOnlyButton - In the implementation block
@property (nonatomic,retain) UIButton * meOnlyButton;                                                       //@synthesize meOnlyButton=_meOnlyButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMargin;                                                //@synthesize topMargin=_topMargin - In the implementation block
@property (nonatomic,retain) UIView * buttonContainer;                                                      //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainStackViewTrailingConstraint;                          //@synthesize mainStackViewTrailingConstraint=_mainStackViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainStackViewLeadingConstraint;                           //@synthesize mainStackViewLeadingConstraint=_mainStackViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonEqualMainTitleWidthConstraint;              //@synthesize continueButtonEqualMainTitleWidthConstraint=_continueButtonEqualMainTitleWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonWidthConstraint;                            //@synthesize continueButtonWidthConstraint=_continueButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonBottomConstraint;                           //@synthesize continueButtonBottomConstraint=_continueButtonBottomConstraint - In the implementation block
@property (nonatomic,retain) UILabel * underageHintLabel;                                                   //@synthesize underageHintLabel=_underageHintLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                                         //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UILabel * mainTitle;                                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) int profilePrivacyVisibility;                                                  //@synthesize profilePrivacyVisibility=_profilePrivacyVisibility - In the implementation block
@property (assign) long long numberOfClicksOnPrivacySelection;                                              //@synthesize numberOfClicksOnPrivacySelection=_numberOfClicksOnPrivacySelection - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setProfilePrivacyVisibility:(int)arg1 ;
-(void)setNumberOfClicksOnPrivacySelection:(long long)arg1 ;
-(UIButton *)friendsOnlyButton;
-(UIButton *)meOnlyButton;
-(UILabel *)publicTitle;
-(UILabel *)friendsOnlyTitle;
-(UILabel *)meOnlyTitle;
-(UILabel *)publicSubTitle;
-(UILabel *)friendsOnlySubtitle;
-(UILabel *)meOnlySubtitle;
-(UIView *)publicDivider;
-(UILabel *)underageHintLabel;
-(void)notNowButtonPressed:(id)arg1 ;
-(NSLayoutConstraint *)mainStackViewLeadingConstraint;
-(NSLayoutConstraint *)mainStackViewTrailingConstraint;
-(NSLayoutConstraint *)continueButtonEqualMainTitleWidthConstraint;
-(NSLayoutConstraint *)continueButtonWidthConstraint;
-(NSLayoutConstraint *)continueButtonBottomConstraint;
-(UIView *)buttonContainer;
-(int)profilePrivacyVisibility;
-(long long)numberOfClicksOnPrivacySelection;
-(void)reportPrivacySelectionClickAnalytics;
-(void)button1Pressed:(id)arg1 ;
-(void)button2Pressed:(id)arg1 ;
-(void)button3Pressed:(id)arg1 ;
-(void)setPublicTitle:(UILabel *)arg1 ;
-(void)setPublicSubTitle:(UILabel *)arg1 ;
-(void)setFriendsOnlyTitle:(UILabel *)arg1 ;
-(void)setFriendsOnlySubtitle:(UILabel *)arg1 ;
-(void)setMeOnlyTitle:(UILabel *)arg1 ;
-(void)setMeOnlySubtitle:(UILabel *)arg1 ;
-(void)setPublicDivider:(UIView *)arg1 ;
-(void)setPublicButton:(UIButton *)arg1 ;
-(UIButton *)nextButton;
-(void)setFriendsOnlyButton:(UIButton *)arg1 ;
-(void)setMeOnlyButton:(UIButton *)arg1 ;
-(void)setMainStackViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMainStackViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonEqualMainTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUnderageHintLabel:(UILabel *)arg1 ;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTopMargin:(NSLayoutConstraint *)arg1 ;
-(UILabel *)mainTitle;
-(void)updateUI;
-(void)setButtonContainer:(UIView *)arg1 ;
-(void)setPublicContainer:(UIView *)arg1 ;
-(NSLayoutConstraint *)topMargin;
-(void)viewDidLoad;
-(UIView *)publicContainer;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)nextPressed:(id)arg1 ;
-(UIButton *)publicButton;
-(void)setMainTitle:(UILabel *)arg1 ;
@end

