/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <libobjc.A.dylib/BFFPasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@class BFFPasscodeViewController;

@interface BFFFinishSetupPasscodeController : NSObject <BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling> {

	BFFFinishSetupPasscodeController* _selfReference;
	BFFPasscodeViewController* _passcodeViewController;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
+(id)finishSetupPasscodeController;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2 ;
-(void)_completeWithPasscode:(id)arg1 result:(unsigned long long)arg2 ;
@end

