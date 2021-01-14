/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2 ;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_completeWithPasscode:(id)arg1 result:(unsigned long long)arg2 ;
@end

