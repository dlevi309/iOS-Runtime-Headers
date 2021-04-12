/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<PKPaymentAuthorizationServiceProtocol>)delegate;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
-(void)handleHostApplicationDidCancel;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1 ;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidAuthorizeContextCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursementWithResult:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2 ;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1 ;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1 ;
-(void)setController:(PKPaymentAuthorizationRemoteAlertViewController *)arg1 ;
-(void)setDelegate:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(NSMutableSet *)completionHandlers;
-(id)initWithController:(id)arg1 ;
-(void)_executeCompletionHandlers;
-(PKPaymentAuthorizationRemoteAlertViewController *)controller;
-(void)dismissed;
-(void)dealloc;
@end

