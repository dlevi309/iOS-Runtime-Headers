/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidLoad;
-(long long)state;
-(BOOL)hasRestrictionsPasscode;
-(void)_continue:(id)arg1 ;
-(id)initWithScreenTimeState:(long long)arg1 passcode:(BOOL)arg2 ;
-(void)_setUpLater:(id)arg1 ;
@end

