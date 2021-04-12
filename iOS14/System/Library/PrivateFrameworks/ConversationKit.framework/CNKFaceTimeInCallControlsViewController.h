/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKitCore/UIViewController.h>

@class UIView, NSString;

@interface CNKFaceTimeInCallControlsViewController : UIViewController {

	 groupName;
	 representedLegacyCallIdentifier;
	 controlsButtonRowCount;
	 tableViewSeparator;
	 participantsTableViewController;
	 viewContent;
	 mode;
	 topInset;
	 isExpanded;
	 audioIsEnabled;
	 videoIsEnabled;
	 effectsAreAvailable;
	 effectsAreEnabled;
	 shouldShowJoinButton;
	 delegate;
	 participantDelegate;
	 participantsViewControllerDelegate;

}

@property (assign,nonatomic) BOOL videoButtonIsEnabled; 
@property (assign,nonatomic) BOOL isExpanded; 
@property (assign,nonatomic) BOOL audioIsEnabled; 
@property (assign,nonatomic) BOOL videoIsEnabled; 
@property (assign,nonatomic) BOOL effectsAreAvailable; 
@property (assign,nonatomic) BOOL effectsAreEnabled; 
@property (assign,nonatomic) BOOL shouldShowJoinButton; 
@property (readonly,nonatomic) UIView * audioButton; 
@property (assign,__weak,nonatomic) id<CNKFaceTimeInCallControlsViewControllerDelegate> delegate; 
@property (readonly,nonatomic) NSString * description; 
-(void)handleLegacyCallStatusDidChangeNotification:(id)arg1 ;
-(BOOL)videoButtonIsEnabled;
-(void)setVideoButtonIsEnabled:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(BOOL)isExpanded;
-(id<CNKFaceTimeInCallControlsViewControllerDelegate>)delegate;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<CNKFaceTimeInCallControlsViewControllerDelegate>)arg1 ;
-(void)setIsExpanded:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(UIView *)audioButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didTapEffectsButton:(id)arg1 ;
-(void)didTapMuteButton:(id)arg1 ;
-(void)didTapFlipCameraButton:(id)arg1 ;
-(void)didTapJoinLeaveButton:(id)arg1 ;
-(void)didTapToggleCameraButton:(id)arg1 ;
-(BOOL)audioIsEnabled;
-(void)setAudioIsEnabled:(BOOL)arg1 ;
-(BOOL)videoIsEnabled;
-(void)setVideoIsEnabled:(BOOL)arg1 ;
-(BOOL)effectsAreAvailable;
-(void)setEffectsAreAvailable:(BOOL)arg1 ;
-(BOOL)effectsAreEnabled;
-(void)setEffectsAreEnabled:(BOOL)arg1 ;
-(BOOL)shouldShowJoinButton;
-(void)setShouldShowJoinButton:(BOOL)arg1 ;
-(id)initWithActiveCall:(id)arg1 ;
-(void)embedEffectsBrowserViewController:(id)arg1 ;
-(void)updateControlsVisibilityForExpandedState:(BOOL)arg1 ;
-(void)updateAudioRouteButtonFor:(id)arg1 ;
-(void)updateToRepresentLegacyCall:(id)arg1 ;
-(id)accessibilityHotdog;
-(id)accessibilityJoinLeaveButton;
-(id)accessibilityEffectsButton;
-(id)accessibilityEffectsLabel;
-(id)accessibilityCameraButton;
-(id)accessibilityCameraLabel;
-(id)accessibilityMuteAudioButton;
-(id)accessibilityMuteAudioLabel;
-(id)accessibilityRouteButton;
-(id)accessibilityRouteLabel;
-(id)accessibilityDisableVideoButton;
-(id)accessibilityDisableVideoLabel;
@end

