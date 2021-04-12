/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationServiceProtocol;
@class NSMutableSet, PKPaymentAuthorizationRemoteAlertViewController, NSString;

@interface PKPaymentAuthorizationRemoteAlertViewControllerExportedObject : NSObject <PKPaymentAuthorizationServiceProtocol> {

	BOOL _dismissed;
	NSMutableSet* _completionHandlers;
	id<PKPaymentAuthorizationServiceProtocol> _delegate;
	PKPaymentAuthorizationRemoteAlertViewController* _controller;

}

@property (nonatomic,retain) NSMutableSet * completionHandlers;                                                //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationServiceProtocol> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) PKPaymentAuthorizationRemoteAlertViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPaymentAuthorizationServiceProtocol>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(void)dismissed;
-(void)setController:(PKPaymentAuthorizationRemoteAlertViewController *)arg1 ;
-(PKPaymentAuthorizationRemoteAlertViewController *)controller;
-(NSMutableSet *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1 ;
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1 ;
-(void)_executeCompletionHandlers;
@end

