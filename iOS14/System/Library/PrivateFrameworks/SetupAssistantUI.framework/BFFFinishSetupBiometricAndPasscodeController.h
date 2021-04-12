/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/BFFPasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@class NSString;

@interface BFFFinishSetupBiometricAndPasscodeController : NSObject <UIPopoverPresentationControllerDelegate, BFFPasscodeViewControllerDelegate, BFFFinishSetupFlowControlling> {

	NSString* _flowSkipIdentifier;
	NSString* _passcode;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSString * passcode;                     //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(id)completion;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2 ;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1 ;
-(BOOL)passcodeViewControllerAllowSkip:(id)arg1 ;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)preconditionViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFlowSkipIdentifier:(id)arg1 ;
-(id)createViewControllerWithPasscode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_userDidTapPasscodeCancelButton:(id)arg1 ;
@end

