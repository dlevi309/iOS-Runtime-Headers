/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, UIImage, NSString;

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate> {

	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	UIImage* _passSnapShot;
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
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)viewDidLoad;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)_handleNextStep;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 passSnapshot:(id)arg4 ;
-(void)_terminateSetupFlow;
-(void)setShowDebitCardHeroView:(BOOL)arg1 ;
-(void)_presentPaymentSetupController;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)_handleProvisioningError:(id)arg1 ;
-(void)_setupLater;
-(BOOL)showDebitCardHeroView;
@end

