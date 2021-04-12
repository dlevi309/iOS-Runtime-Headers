/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKDynamicProvisioningPageViewController.h>
#import <libobjc.A.dylib/PKApplyFlowControllerProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKApplyController, NSString;

@interface PKApplyExplanationViewController : PKDynamicProvisioningPageViewController <PKApplyFlowControllerProtocol> {

	BOOL _isLoading;
	PKApplyController* _controller;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	/*^block*/id _continueAction;
	/*^block*/id _auxiliaryAction;
	/*^block*/id _learnMoreAction;
	/*^block*/id _doneAction;

}

@property (assign,nonatomic,__weak) PKApplyController * controller;                                      //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,copy) id continueAction;                                                            //@synthesize continueAction=_continueAction - In the implementation block
@property (nonatomic,copy) id auxiliaryAction;                                                           //@synthesize auxiliaryAction=_auxiliaryAction - In the implementation block
@property (nonatomic,copy) id learnMoreAction;                                                           //@synthesize learnMoreAction=_learnMoreAction - In the implementation block
@property (nonatomic,copy) id doneAction;                                                                //@synthesize doneAction=_doneAction - In the implementation block
@property (nonatomic,copy) id primaryButtonAction; 
@property (nonatomic,copy) id secondaryButtonAction; 
@property (nonatomic,copy) id bodyButtonAction; 
@property (nonatomic,copy) id cancelButtonAction; 
@property (nonatomic,copy) id doneButtonAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_done;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setController:(PKApplyController *)arg1 ;
-(PKApplyController *)controller;
-(id)currentPage;
-(void)_cancel;
-(void)_learnMore;
-(void)_auxiliary;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)showNavigationBarSpinner:(BOOL)arg1 ;
-(void)handleNextViewController:(id)arg1 displayableError:(id)arg2 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)terminateSetupFlow;
-(void)_featureApplicationUpdated;
-(void)handleNextStep;
-(void)setContinueAction:(id)arg1 ;
-(void)setLearnMoreAction:(id)arg1 ;
-(void)setDoneAction:(id)arg1 ;
-(void)_continue;
-(void)_performActionForBlock:(/*^block*/id)arg1 ;
-(void)_performLearnMoreAction;
-(void)_performDoneAction:(BOOL)arg1 ;
-(void)_bodyButtonAction;
-(id)continueAction;
-(id)auxiliaryAction;
-(void)setAuxiliaryAction:(id)arg1 ;
-(id)learnMoreAction;
-(id)doneAction;
@end

