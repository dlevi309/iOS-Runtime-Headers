/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate, PKPassLibraryDataProvider;
@class PKPeerPaymentWebService, PKPeerPaymentAccount, NSString;

@interface PKPeerPaymentGraduationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {

	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentAccount* _peerPaymentAccount;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	BOOL _allowsManualEntry;

}

@property (assign,nonatomic) BOOL allowsManualEntry;                //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)allowsManualEntry;
-(void)viewDidLoad;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(id)initWithPeerPaymentWebService:(id)arg1 peerPaymentAccount:(id)arg2 passLibraryDataProvider:(id)arg3 setupDelegate:(id)arg4 context:(long long)arg5 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)_presentIdentityVerificationFlowWithGraduationPrerequisiteIdentifier:(BOOL)arg1 ;
-(void)_presentTermsWithTermsResponse:(id)arg1 ;
-(void)_presentGenericError;
-(void)_showSpinner:(BOOL)arg1 ;
@end

