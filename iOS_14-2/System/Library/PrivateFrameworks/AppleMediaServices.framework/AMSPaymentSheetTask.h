/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerPrivateDelegate.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class NSDictionary, AMSPurchaseInfo, AMSPaymentSheetAssetCache, AKAppleIDAuthenticationContext, AMSPromise, NSObject, _PaymentSheetState, AMSPaymentSheetRequest, NSMutableArray, NSString;

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {

	id<AMSBagProtocol> _bag;
	NSDictionary* _metricsDictionary;
	AMSPurchaseInfo* _purchaseInfo;
	AMSPaymentSheetAssetCache* _assetCache;
	AKAppleIDAuthenticationContext* _authenticationContext;
	AMSPromise* _paymentSheetPromise;
	NSObject*<OS_dispatch_queue> _presentationQueue;
	_PaymentSheetState* _state;
	AMSPaymentSheetRequest* _request;
	NSMutableArray* _userActions;

}

@property (nonatomic,retain) AMSPaymentSheetAssetCache * assetCache;                              //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) AMSPromise * paymentSheetPromise;                                    //@synthesize paymentSheetPromise=_paymentSheetPromise - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> presentationQueue;                      //@synthesize presentationQueue=_presentationQueue - In the implementation block
@property (nonatomic,retain) _PaymentSheetState * state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AMSPaymentSheetRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableArray * userActions;                                        //@synthesize userActions=_userActions - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsDictionary;                                    //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (nonatomic,retain) AMSPurchaseInfo * purchaseInfo;                                      //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_authenticationContextForRequest:(id)arg1 ;
-(void)setRequest:(AMSPaymentSheetRequest *)arg1 ;
-(void)setMetricsDictionary:(NSDictionary *)arg1 ;
-(AMSPurchaseInfo *)purchaseInfo;
-(AMSPaymentSheetAssetCache *)assetCache;
-(id)initWithRequest:(id)arg1 bag:(id)arg2 ;
-(NSDictionary *)metricsDictionary;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(AMSPaymentSheetRequest *)request;
-(id)_paymentRequest;
-(void)setPaymentSheetPromise:(AMSPromise *)arg1 ;
-(BOOL)_presentPaymentSheetWithPaymentRequest:(id)arg1 error:(id*)arg2 ;
-(AMSPromise *)paymentSheetPromise;
-(NSObject*<OS_dispatch_queue>)presentationQueue;
-(float)_challengeSigningDelay;
-(void)setAssetCache:(AMSPaymentSheetAssetCache *)arg1 ;
-(void)setAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(void)setPresentationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AKAppleIDAuthenticationContext *)authenticationContext;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)setState:(_PaymentSheetState *)arg1 ;
-(_PaymentSheetState *)state;
-(void)setPurchaseInfo:(AMSPurchaseInfo *)arg1 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setUserActions:(NSMutableArray *)arg1 ;
-(id)_metricsEvent;
-(NSMutableArray *)userActions;
-(void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2 ;
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2 ;
@end

