/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@class NSString;

@interface PKPeerPaymentRegistrationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_dismiss;
-(BOOL)shouldAutorotate;
-(long long)preferredStatusBarStyle;
-(void)handleButtonActions:(id)arg1 ;
-(void)configureWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_peerPaymentAccountFromData:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
@end

