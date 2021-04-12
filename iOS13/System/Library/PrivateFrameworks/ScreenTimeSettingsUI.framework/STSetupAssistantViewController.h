/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <OnBoardingKit/OBWelcomeController.h>

@protocol STSetupAssistantViewControllerDelegate;
@interface STSetupAssistantViewController : OBWelcomeController {

	BOOL _hasRestrictionsPasscode;
	id<STSetupAssistantViewControllerDelegate> _delegate;
	long long _state;

}

@property (readonly) long long state;                                                //@synthesize state=_state - In the implementation block
@property (readonly) BOOL hasRestrictionsPasscode;                                   //@synthesize hasRestrictionsPasscode=_hasRestrictionsPasscode - In the implementation block
@property (__weak) id<STSetupAssistantViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)new;
-(id)init;
-(id<STSetupAssistantViewControllerDelegate>)delegate;
-(void)setDelegate:(id<STSetupAssistantViewControllerDelegate>)arg1 ;
-(long long)state;
-(void)viewDidLoad;
-(BOOL)hasRestrictionsPasscode;
-(void)_continue:(id)arg1 ;
-(id)initWithScreenTimeState:(long long)arg1 passcode:(BOOL)arg2 ;
-(void)_setUpLater:(id)arg1 ;
@end

