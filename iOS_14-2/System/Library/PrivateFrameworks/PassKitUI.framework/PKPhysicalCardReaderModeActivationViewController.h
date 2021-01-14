/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_invalidate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_dismiss;
-(void)_startTagReaderSession;
-(void)_stopTagReaderSession;
-(void)_presentActivationWithActivationCode:(id)arg1 ;
-(void)viewDidLoad;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1 ;
-(void)dealloc;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
@end

