/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>

@class NSString, PKLinkedApplication;

@interface PKBarcodePaymentPrivacyViewController : PKExplanationViewController <PKLinkedApplicationObserver> {

	unsigned long long _displayContext;
	NSString* _issuerName;
	PKLinkedApplication* _linkedApplication;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(void)_dismiss;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_openAppButtonPressed:(id)arg1 ;
-(void)_updateOpenApplicationButtonVisibility;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)initWithIssuerName:(id)arg1 linkedApplication:(id)arg2 displayContext:(unsigned long long)arg3 paymentSetupContext:(long long)arg4 ;
@end

