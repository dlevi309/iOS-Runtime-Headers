/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKAvatarContainerViewDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/GKNicknameControllerDelegate.h>

@class GKAvatarContainerView, UIView, UIVisualEffectView, UIStackView, UITextField, UIImageView, OBBoldTrayButton, NSLayoutConstraint, UILabel, UIActivityIndicatorView, GKReachability, GKNicknameController, NSString;

@interface GKDefaultNicknameViewController : UIViewController <GKAvatarContainerViewDelegate, CNPhotoPickerViewControllerDelegate, GKNicknameControllerDelegate> {

	GKAvatarContainerView* _editAvatarView;
	UIView* _avatarContainer;
	UIVisualEffectView* _visualEffectView;
	UIStackView* _mainStackView;
	UITextField* _nickname;
	UIView* _buttonContainer;
	UIImageView* _bubbleImageView;
	OBBoldTrayButton* _continueButton;
	NSLayoutConstraint* _mainStackViewTrailingConstraint;
	NSLayoutConstraint* _mainStackViewLeadingConstraint;
	NSLayoutConstraint* _continueButtonEqualMainStackViewWidthConstraint;
	NSLayoutConstraint* _continueButtonWidthConstraint;
	NSLayoutConstraint* _continueButtonBottomConstraint;
	NSLayoutConstraint* _topMargin;
	UIStackView* _middleStackView;
	UILabel* _message;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _mainTitle;
	NSLayoutConstraint* _avatarContainerLandscapeHeight;
	GKReachability* _reachability;
	GKNicknameController* _nicknameController;

}

@property (nonatomic,retain) GKAvatarContainerView * editAvatarView;                                            //@synthesize editAvatarView=_editAvatarView - In the implementation block
@property (nonatomic,retain) UIView * avatarContainer;                                                          //@synthesize avatarContainer=_avatarContainer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                                             //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIStackView * mainStackView;                                                       //@synthesize mainStackView=_mainStackView - In the implementation block
@property (nonatomic,retain) UITextField * nickname;                                                            //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) UIView * buttonContainer;                                                          //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) UIImageView * bubbleImageView;                                                     //@synthesize bubbleImageView=_bubbleImageView - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * continueButton;                                                 //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainStackViewTrailingConstraint;                              //@synthesize mainStackViewTrailingConstraint=_mainStackViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * mainStackViewLeadingConstraint;                               //@synthesize mainStackViewLeadingConstraint=_mainStackViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonEqualMainStackViewWidthConstraint;              //@synthesize continueButtonEqualMainStackViewWidthConstraint=_continueButtonEqualMainStackViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonWidthConstraint;                                //@synthesize continueButtonWidthConstraint=_continueButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonBottomConstraint;                               //@synthesize continueButtonBottomConstraint=_continueButtonBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMargin;                                                    //@synthesize topMargin=_topMargin - In the implementation block
@property (nonatomic,retain) UIStackView * middleStackView;                                                     //@synthesize middleStackView=_middleStackView - In the implementation block
@property (nonatomic,retain) UILabel * message;                                                                 //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                       //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * mainTitle;                                                               //@synthesize mainTitle=_mainTitle - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * avatarContainerLandscapeHeight;                               //@synthesize avatarContainerLandscapeHeight=_avatarContainerLandscapeHeight - In the implementation block
@property (nonatomic,retain) GKReachability * reachability;                                                     //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,readonly) BOOL isAvatarEditingSupported; 
@property (nonatomic,retain) GKNicknameController * nicknameController;                                         //@synthesize nicknameController=_nicknameController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessage:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)viewWillLayoutSubviews;
-(void)nicknameUpdateAvatarImage:(id)arg1 ;
-(UILabel *)message;
-(void)setupNavigationBar;
-(void)updateUIBasedOnTraitCollection;
-(NSLayoutConstraint *)mainStackViewLeadingConstraint;
-(NSLayoutConstraint *)mainStackViewTrailingConstraint;
-(NSLayoutConstraint *)continueButtonWidthConstraint;
-(NSLayoutConstraint *)continueButtonBottomConstraint;
-(UIView *)buttonContainer;
-(void)setMainStackViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMainStackViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContinueButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTopMargin:(NSLayoutConstraint *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setBubbleImageView:(UIImageView *)arg1 ;
-(UITextField *)nickname;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(GKReachability *)reachability;
-(UILabel *)mainTitle;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)setButtonContainer:(UIView *)arg1 ;
-(NSLayoutConstraint *)topMargin;
-(void)viewDidLoad;
-(void)setAvatarContainer:(UIView *)arg1 ;
-(UIView *)avatarContainer;
-(void)dismiss:(id)arg1 ;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3 ;
-(void)setNickname:(UITextField *)arg1 ;
-(GKNicknameController *)nicknameController;
-(void)setNicknameController:(GKNicknameController *)arg1 ;
-(void)addEditAvatarContainerView;
-(BOOL)isAvatarEditingSupported;
-(void)enableOrDisableNicknameEditing;
-(NSLayoutConstraint *)avatarContainerLandscapeHeight;
-(UIStackView *)mainStackView;
-(NSLayoutConstraint *)continueButtonEqualMainStackViewWidthConstraint;
-(void)cancelPressed:(id)arg1 ;
-(void)updateLeftBarButtonWithTitle:(id)arg1 ;
-(long long)getTopMargin;
-(GKAvatarContainerView *)editAvatarView;
-(void)fadeNonEssentialViews:(BOOL)arg1 ;
-(void)animateNicknameTextFieldIntoView:(id)arg1 ;
-(void)refreshAvatarImage;
-(void)setEditAvatarView:(GKAvatarContainerView *)arg1 ;
-(void)presentAvatarPicker;
-(void)presentDeleteAvatarImageAlert;
-(void)settingsPressed:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)avatarView:(id)arg1 didSelectImageWithEditingEnabled:(BOOL)arg2 ;
-(void)setMainStackView:(UIStackView *)arg1 ;
-(void)setContinueButtonEqualMainStackViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UIStackView *)middleStackView;
-(void)setMiddleStackView:(UIStackView *)arg1 ;
-(void)setAvatarContainerLandscapeHeight:(NSLayoutConstraint *)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(OBBoldTrayButton *)continueButton;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setContinueButton:(OBBoldTrayButton *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)bubbleImageView;
-(void)setReachability:(GKReachability *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)nicknameUpdateRequestCompletedWithStatus:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(BOOL)nicknameShouldBeginEditing;
-(void)nicknameTextDidChangeWithMessage:(id)arg1 ;
-(void)nicknameDidBecomeFirstResponder;
-(void)nicknameDidResignFirstResponder;
-(void)setMainTitle:(UILabel *)arg1 ;
@end

