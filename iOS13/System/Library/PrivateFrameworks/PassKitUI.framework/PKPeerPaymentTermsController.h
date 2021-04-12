/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPeerPaymentUpdatedTermsViewControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class NSURL, NSString, PKPeerPaymentWebService, RemoteUIController, UIViewController, UINavigationController;

@interface PKPeerPaymentTermsController : NSObject <PKPeerPaymentUpdatedTermsViewControllerDelegate, RemoteUIControllerDelegate> {

	/*^block*/id _completionHandler;
	NSURL* _termsURL;
	NSString* _termsIdentifier;
	NSString* _passUniqueID;
	PKPeerPaymentWebService* _webService;
	RemoteUIController* _remoteUIController;
	long long _paymentSetupContext;
	/*^block*/id _customPresentationHandler;
	UIViewController* _currentHostController;
	UINavigationController* _navigationController;

}

@property (assign,nonatomic,__weak) UIViewController * currentHostController;              //@synthesize currentHostController=_currentHostController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) NSURL * termsURL;                                           //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * termsIdentifier;                            //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * passUniqueID;                               //@synthesize passUniqueID=_passUniqueID - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentWebService * webService;                       //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) RemoteUIController * remoteUIController;                    //@synthesize remoteUIController=_remoteUIController - In the implementation block
@property (assign,nonatomic) long long paymentSetupContext;                                //@synthesize paymentSetupContext=_paymentSetupContext - In the implementation block
@property (nonatomic,copy) id customPresentationHandler;                                   //@synthesize customPresentationHandler=_customPresentationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(RemoteUIController *)remoteUIController;
-(NSString *)termsIdentifier;
-(PKPeerPaymentWebService *)webService;
-(NSURL *)termsURL;
-(NSString *)passUniqueID;
-(long long)paymentSetupContext;
-(id)initWithTermsURL:(id)arg1 termsIdentifier:(id)arg2 passUniqueID:(id)arg3 webService:(id)arg4 ;
-(void)setPaymentSetupContext:(long long)arg1 ;
-(void)presentTermsOverController:(id)arg1 showInterstitialViewController:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setCustomPresentationHandler:(id)arg1 ;
-(void)_presentRemoteUIController;
-(void)_presentRemoteUIControllerWithUpdatedTermsViewController:(id)arg1 ;
-(void)peerPaymentUpdatedTermsViewController:(id)arg1 didSelectContinue:(BOOL)arg2 ;
-(id)customPresentationHandler;
-(UIViewController *)currentHostController;
-(void)setCurrentHostController:(UIViewController *)arg1 ;
@end

