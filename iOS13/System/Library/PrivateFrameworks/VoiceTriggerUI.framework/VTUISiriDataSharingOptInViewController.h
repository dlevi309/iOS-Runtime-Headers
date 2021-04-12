/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@protocol VTUISiriDataSharingOptInViewControllerDelegate;
@interface VTUISiriDataSharingOptInViewController : OBTextWelcomeController {

	id<VTUISiriDataSharingOptInViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTUISiriDataSharingOptInViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VTUISiriDataSharingOptInViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VTUISiriDataSharingOptInViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldInlineButtonTray;
-(id)initWithViewStyle:(long long)arg1 ;
@end

