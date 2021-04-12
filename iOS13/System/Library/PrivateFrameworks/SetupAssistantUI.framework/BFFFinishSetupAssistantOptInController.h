/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <libobjc.A.dylib/VTUIEnrollTrainingViewControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@class VTUIEnrollTrainingViewController, NSString;

@interface BFFFinishSetupAssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFinishSetupFlowControlling> {

	BFFFinishSetupAssistantOptInController* _selfReference;
	VTUIEnrollTrainingViewController* _enrollmentController;
	BOOL _willOfferVoiceTrigger;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)finishSetupAssistantOptInController;
-(id)init;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(void)skipSetup;
-(void)continueSetup;
-(void)showLearnMore;
@end

