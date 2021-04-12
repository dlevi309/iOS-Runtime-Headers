/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <PassKit/PKExtensionBaseContext.h>
#import <libobjc.A.dylib/PKExtensionHostContextProtocol.h>

@protocol PKPaymentAuthorizationHostProtocol, OS_dispatch_group;
@class NSObject, NSString;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol> {

	id<PKPaymentAuthorizationHostProtocol> _delegate;
	NSObject*<OS_dispatch_group> _delayCallbacksGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> delayCallbacksGroup;                    //@synthesize delayCallbacksGroup=_delayCallbacksGroup - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationHostProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidRequestMerchantSession;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidAuthorizePurchase:(id)arg1 ;
-(void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1 ;
-(void)authorizationDidAuthorizeDisbursement:(id)arg1 ;
-(void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1 ;
-(void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidPresent;
-(void)didEncounterAuthorizationEvent:(unsigned long long)arg1 ;
-(id)vendorContext;
-(void)beginDelayingCallbacks;
-(void)endDelayingCallbacks;
-(NSObject*<OS_dispatch_group>)delayCallbacksGroup;
-(void)setDelayCallbacksGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

