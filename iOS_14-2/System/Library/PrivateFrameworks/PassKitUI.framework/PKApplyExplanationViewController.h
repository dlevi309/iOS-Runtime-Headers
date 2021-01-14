/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_done;
-(void)terminateSetupFlow;
-(void)handleNextStep;
-(void)_continue;
-(id)currentPage;
-(void)_performActionForBlock:(/*^block*/id)arg1 ;
-(void)_performLearnMoreAction;
-(void)_performDoneAction:(BOOL)arg1 ;
-(void)_bodyButtonAction;
-(id)continueAction;
-(id)auxiliaryAction;
-(void)setAuxiliaryAction:(id)arg1 ;
-(id)learnMoreAction;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setController:(PKApplyController *)arg1 ;
-(void)_cancel;
-(void)handleNextViewController:(id)arg1 displayableError:(id)arg2 ;
-(void)_auxiliary;
-(void)_featureApplicationUpdated;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)doneAction;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)setContinueAction:(id)arg1 ;
-(void)setLearnMoreAction:(id)arg1 ;
-(void)setDoneAction:(id)arg1 ;
-(PKApplyController *)controller;
-(void)_learnMore;
-(void)showNavigationBarSpinner:(BOOL)arg1 ;
@end

