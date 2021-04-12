/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowHosting.h>

@class BFFNavigationController, FLFollowUpAction, NSMutableArray, NSMutableSet, UIViewController;

@interface BFFFinishSetupViewController : UIViewController <BFFFinishSetupFlowHosting> {

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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_complete;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
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
-(void)processURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOverrideFlowControllerGenerator:(/*^block*/id)arg1 ;
@end

