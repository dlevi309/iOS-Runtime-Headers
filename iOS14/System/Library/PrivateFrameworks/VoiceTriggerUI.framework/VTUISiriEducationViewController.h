/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <OnBoardingKit/OBWelcomeController.h>

@protocol VTUISiriEducationViewControllerDelegate;
@class VTUIStyle, AVPlayerViewController, AVPlayerLooper, AVPlayer;

@interface VTUISiriEducationViewController : OBWelcomeController {

	VTUIStyle* _style;
	id<VTUISiriEducationViewControllerDelegate> _delegate;
	AVPlayerViewController* _playerViewController;
	AVPlayerLooper* _playerLooper;
	AVPlayer* _player;

}
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 style:(id)arg3 delegate:(id)arg4 ;
-(void)_fadeInSubViews;
-(void)_setupImageContainerViewForTraitCollection:(id)arg1 ;
-(void)_setupContinueButton;
-(void)_continueButtonPressed;
@end

