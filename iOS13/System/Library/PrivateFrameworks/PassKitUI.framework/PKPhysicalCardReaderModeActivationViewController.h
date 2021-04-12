/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKNFCTagReaderSessionDelegate.h>

@class PKAccountService, PKAccount, PKPhysicalCard, PKPaymentPass, PKPhysicalCardActivationAnimationView, PKPaymentSessionHandle, PKNFCTagReaderSession, PKBusinessChatController, NSString;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate> {

	PKAccountService* _accountService;
	PKAccount* _account;
	PKPhysicalCard* _physicalCard;
	PKPaymentPass* _paymentPass;
	unsigned long long _feature;
	PKPhysicalCardActivationAnimationView* _animationView;
	BOOL _invalidated;
	BOOL _deviceSupportsReaderMode;
	PKPaymentSessionHandle* _sessionHandle;
	PKNFCTagReaderSession* _readerSession;
	PKBusinessChatController* _businessChatController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_invalidate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
-(void)_startTagReaderSession;
-(void)_stopTagReaderSession;
-(void)_presentActivationWithActivationCode:(id)arg1 ;
@end

