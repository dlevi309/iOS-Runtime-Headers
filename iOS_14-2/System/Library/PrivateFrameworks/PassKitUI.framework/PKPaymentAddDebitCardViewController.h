/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerDataSource.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPeerPaymentSetupFlowController, NSString;

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentSetupFlowControllerDataSource> {

	PKPeerPaymentSetupFlowController* _peerPaymentSetupFlowController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	BOOL _showDebitCardHeroView;
	NSString* _titleText;
	NSString* _bodyText;

}

@property (nonatomic,copy) NSString * titleText;                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * bodyText;                       //@synthesize bodyText=_bodyText - In the implementation block
@property (assign,nonatomic) BOOL showDebitCardHeroView;              //@synthesize showDebitCardHeroView=_showDebitCardHeroView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bodyText;
-(NSString *)titleText;
-(void)_handleNextStep;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(BOOL)shouldPushTerms;
-(void)viewDidLoad;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)setShowDebitCardHeroView:(BOOL)arg1 ;
-(void)_presentPaymentSetupController;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)_handleProvisioningError:(id)arg1 ;
-(void)_setupLater;
-(BOOL)showDebitCardHeroView;
@end

