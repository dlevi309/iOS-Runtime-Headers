/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationControllerPrivateDelegate.h>

@class NSString, AMSMetricsEvent, NSDictionary, AMSBinaryPromise, PKPayment, NSMutableArray;

@interface AMSCardAuthorizationTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {

	BOOL _didBiometricsLockout;
	BOOL _didCancelHomeButton;
	long long _confirmationStyle;
	NSString* _countryCode;
	NSString* _currencyCode;
	AMSMetricsEvent* _metricsEvent;
	NSString* _passSerialNumber;
	NSString* _passTypeIdentifier;
	NSDictionary* _paymentSession;
	AMSBinaryPromise* _authorizationPromise;
	PKPayment* _payment;
	NSMutableArray* _userActions;

}

@property (nonatomic,retain) AMSBinaryPromise * authorizationPromise;              //@synthesize authorizationPromise=_authorizationPromise - In the implementation block
@property (nonatomic,retain) PKPayment * payment;                                  //@synthesize payment=_payment - In the implementation block
@property (assign,nonatomic) BOOL didBiometricsLockout;                            //@synthesize didBiometricsLockout=_didBiometricsLockout - In the implementation block
@property (assign,nonatomic) BOOL didCancelHomeButton;                             //@synthesize didCancelHomeButton=_didCancelHomeButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * userActions;                         //@synthesize userActions=_userActions - In the implementation block
@property (assign,nonatomic) long long confirmationStyle;                          //@synthesize confirmationStyle=_confirmationStyle - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) AMSMetricsEvent * metricsEvent;                         //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSString * passSerialNumber;                          //@synthesize passSerialNumber=_passSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * passTypeIdentifier;                        //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * paymentSession;                      //@synthesize paymentSession=_paymentSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)countryCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg1 ;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2 ;
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2 ;
-(NSDictionary *)paymentSession;
-(long long)confirmationStyle;
-(void)setConfirmationStyle:(long long)arg1 ;
-(NSString *)passSerialNumber;
-(void)setPassSerialNumber:(NSString *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(id)_presentPaymentRequest:(id)arg1 ;
-(void)_metricsPost;
-(void)setAuthorizationPromise:(AMSBinaryPromise *)arg1 ;
-(AMSBinaryPromise *)authorizationPromise;
-(PKPayment *)payment;
-(AMSMetricsEvent *)metricsEvent;
-(id)_metricsTimestamp;
-(BOOL)didBiometricsLockout;
-(void)setPayment:(PKPayment *)arg1 ;
-(id)_metricsUserActionDictionary;
-(void)setDidBiometricsLockout:(BOOL)arg1 ;
-(void)setDidCancelHomeButton:(BOOL)arg1 ;
-(id)initWithPaymentSession:(id)arg1 ;
-(id)performCardAuthorization;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(BOOL)didCancelHomeButton;
-(NSMutableArray *)userActions;
-(void)setUserActions:(NSMutableArray *)arg1 ;
@end

