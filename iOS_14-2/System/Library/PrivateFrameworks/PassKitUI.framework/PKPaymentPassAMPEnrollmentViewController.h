/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPaymentPass, RemoteUIController, NSString;

@interface PKPaymentPassAMPEnrollmentViewController : PKExplanationViewController <RemoteUIControllerDelegate, UITextViewDelegate> {

	PKPaymentProvisioningController* _provisioningController;
	PKPaymentPass* _pass;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	RemoteUIController* _termsController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)shouldOfferAMPEnrollmentForPass:(id)arg1 provisioningController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)_done;
-(id)_createBodyImage;
-(void)_performAMPEnrollmentWithPass:(id)arg1 asDefault:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_displayTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTerms;
-(void)_showAddToWatchOfferWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 delegate:(id)arg4 ;
-(CGSize)_snapshotSize;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)proceedToNextScreen;
-(void)_performAddToWatchFlowWithCompletionHandler:(/*^block*/id)arg1 ;
@end

