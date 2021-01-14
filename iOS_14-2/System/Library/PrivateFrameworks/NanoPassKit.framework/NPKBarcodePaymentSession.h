/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol NPKBarcodePaymentSessionDelegate, OS_dispatch_source, OS_dispatch_queue;
@class NPKPaymentBarcode, PKPaymentTransaction, PKPaymentPass, NSData, PKPaymentService, NSObject, PKAssertion, NSString;

@interface NPKBarcodePaymentSession : NSObject <PKPaymentServiceDelegate> {

	BOOL _sessionStarted;
	BOOL _submittingAuthenticationResult;
	id<NPKBarcodePaymentSessionDelegate> _delegate;
	NPKPaymentBarcode* _currentPaymentBarcode;
	unsigned long long _currentTransactionStatus;
	PKPaymentTransaction* _currentTransaction;
	PKPaymentPass* _paymentPass;
	NSData* _authorizationCredential;
	PKPaymentService* _paymentService;
	NSObject*<OS_dispatch_source> _sessionTimeoutTimer;
	PKAssertion* _notificationSuppressionAssertion;
	PKAssertion* _expressTransactionSuppressionAssertion;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NPKPaymentBarcode * currentPaymentBarcode;                         //@synthesize currentPaymentBarcode=_currentPaymentBarcode - In the implementation block
@property (assign,nonatomic) unsigned long long currentTransactionStatus;                       //@synthesize currentTransactionStatus=_currentTransactionStatus - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * currentTransaction;                         //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (assign,nonatomic) BOOL sessionStarted;                                               //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (assign,nonatomic) BOOL submittingAuthenticationResult;                               //@synthesize submittingAuthenticationResult=_submittingAuthenticationResult - In the implementation block
@property (nonatomic,retain) NSData * authorizationCredential;                                  //@synthesize authorizationCredential=_authorizationCredential - In the implementation block
@property (nonatomic,retain) PKPaymentService * paymentService;                                 //@synthesize paymentService=_paymentService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sessionTimeoutTimer;                 //@synthesize sessionTimeoutTimer=_sessionTimeoutTimer - In the implementation block
@property (nonatomic,retain) PKAssertion * notificationSuppressionAssertion;                    //@synthesize notificationSuppressionAssertion=_notificationSuppressionAssertion - In the implementation block
@property (nonatomic,retain) PKAssertion * expressTransactionSuppressionAssertion;              //@synthesize expressTransactionSuppressionAssertion=_expressTransactionSuppressionAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                          //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic,__weak) id<NPKBarcodePaymentSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                                     //@synthesize paymentPass=_paymentPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransaction *)currentTransaction;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)_insertPaymentTransactionForActiveBarcode;
-(id<NPKBarcodePaymentSessionDelegate>)delegate;
-(PKPaymentService *)paymentService;
-(void)setPaymentService:(PKPaymentService *)arg1 ;
-(void)startSession;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<NPKBarcodePaymentSessionDelegate>)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setSessionStarted:(BOOL)arg1 ;
-(void)invalidateSession;
-(void)setCurrentTransaction:(PKPaymentTransaction *)arg1 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(NSData *)authorizationCredential;
-(BOOL)sessionStarted;
-(id)initWithPaymentPass:(id)arg1 authorizationCredential:(id)arg2 ;
-(NPKPaymentBarcode *)currentPaymentBarcode;
-(void)retryFetchingBarcode;
-(void)submitUserIntentionConfirmation:(BOOL)arg1 ;
-(void)submitPinCode:(id)arg1 ;
-(void)_startSessionTimeoutTimer;
-(void)_updateCurrentPaymentBarcodeWithBarcodeIdentifier:(id)arg1 decryptedBarcodeCredential:(id)arg2 error:(id)arg3 ;
-(void)_fetchDecryptedBarcodeWithCredential:(id)arg1 ;
-(void)_acquireNotificationSuppressionAssertion;
-(void)_acquireExpressTransactionSuppressAssertion;
-(void)_extendSessionTimeoutTimer;
-(void)_stopSessionTimeoutTimer;
-(void)_releaseNotificationSuppressionAssertion;
-(void)_releaseExpressTransactionSuppressionAssertion;
-(void)setSubmittingAuthenticationResult:(BOOL)arg1 ;
-(void)_handleUpdatedPaymentTransaction:(id)arg1 ;
-(void)_completedAuthenticationForTransaction:(id)arg1 ;
-(void)_handleUpdatedTransactionStatus:(unsigned long long)arg1 ;
-(BOOL)submittingAuthenticationResult;
-(void)setCurrentPaymentBarcode:(NPKPaymentBarcode *)arg1 ;
-(void)_invokeExtensionToCollectPaymentInformation;
-(void)_processedAuthenticationMechanismForTransaction:(id)arg1 ;
-(void)_updateCurrentTransactionStatus:(unsigned long long)arg1 transaction:(id)arg2 ;
-(unsigned long long)currentTransactionStatus;
-(void)setCurrentTransactionStatus:(unsigned long long)arg1 ;
-(PKAssertion *)notificationSuppressionAssertion;
-(void)setNotificationSuppressionAssertion:(PKAssertion *)arg1 ;
-(PKAssertion *)expressTransactionSuppressionAssertion;
-(void)setExpressTransactionSuppressionAssertion:(PKAssertion *)arg1 ;
-(NSObject*<OS_dispatch_source>)sessionTimeoutTimer;
-(void)setSessionTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_handleSessionTimeout;
-(void)setAuthorizationCredential:(NSData *)arg1 ;
@end

