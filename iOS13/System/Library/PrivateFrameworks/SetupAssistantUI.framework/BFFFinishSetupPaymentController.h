/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@protocol BFFFinishSetupFlowHosting;
@class NSObject, PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface BFFFinishSetupPaymentController : NSObject <PKPaymentSetupViewControllerDelegate, BFFFinishSetupFlowControlling> {

	NSObject*<BFFFinishSetupFlowHosting> _host;
	PKPaymentSetupAssistantRegistrationViewController* _registrationController;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)registrationViewControllerOutstandingRequirements;
+(BOOL)hasPrimaryiCloudAccount;
+(id)finishSetupPaymentControllerWithHost:(id)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)_completeWithResult:(unsigned long long)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(BOOL)controllerNeedsToRun;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)prerequisiteFlowIdentifier;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canCompleteExtendedInitializationQuickly;
@end

