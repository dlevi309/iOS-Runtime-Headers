/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <CoreFollowUpUI/FLExtensionViewController.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowHosting.h>

@class BFFNavigationController, FLFollowUpAction, NSMutableArray, NSMutableSet, UIViewController;

@interface BFFFinishSetupViewController : FLExtensionViewController <BFFFinishSetupFlowHosting> {

	BOOL _setupInProgress;
	BFFNavigationController* _navigationController;
	FLFollowUpAction* _followUpAction;
	NSMutableArray* _flowIdentifiers;
	NSMutableSet* _completedFlowIdentifiers;
	NSMutableSet* _skippedFlowIdentifiers;
	UIViewController* _newRootViewController;
	/*^block*/id _completion;
	/*^block*/id _overrideFlowControllerGenerator;

}
+(id)_keyValueDictionaryForURL:(id)arg1 ;
+(id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)arg1 ;
-(void)_complete;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)didSkipFlowInFinishSetup:(id)arg1 ;
-(BOOL)didCompleteFlowInFinishSetup:(id)arg1 ;
-(void)_startNextFlowIdentifier;
-(id)_flowControllerForNextFlowIdentifier;
-(BOOL)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)arg1 ;
-(void)_didSatisfyPreconditionsForFlowController:(id)arg1 ;
-(void)_flowDidFinishForIdentifiers:(id)arg1 result:(unsigned long long)arg2 ;
-(void)_performExtendedInitializationForFlowController:(id)arg1 ;
-(void)_didSatisfyInitializationForFlowController:(id)arg1 ;
-(void)_pushViewControllerOntoNavigationController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensureNavigationControllerWithViewController:(id)arg1 pushCompletion:(/*^block*/id)arg2 ;
-(id)_flowControllerForFlowIdentifier:(id)arg1 ;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOverrideFlowControllerGenerator:(/*^block*/id)arg1 ;
@end

