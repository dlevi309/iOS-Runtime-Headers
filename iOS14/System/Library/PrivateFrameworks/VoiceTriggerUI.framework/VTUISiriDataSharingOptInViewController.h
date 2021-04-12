/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithViewStyle:(long long)arg1 ;
@end

