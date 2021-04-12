/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSError, AMSPaymentSheetMetricsEvent, NSString, AMSBiometricsSignatureResult;

@interface _PaymentSheetState : NSObject {

	BOOL _didAuthorizePayment;
	BOOL _didBiometricLockout;
	BOOL _didPresent;
	NSError* _error;
	AMSPaymentSheetMetricsEvent* _event;
	NSString* _passwordEquivalentToken;
	NSString* _paymentToken;
	AMSBiometricsSignatureResult* _signatureResult;

}

@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL didAuthorizePayment;                                    //@synthesize didAuthorizePayment=_didAuthorizePayment - In the implementation block
@property (assign,nonatomic) BOOL didBiometricLockout;                                    //@synthesize didBiometricLockout=_didBiometricLockout - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                             //@synthesize didPresent=_didPresent - In the implementation block
@property (nonatomic,retain) AMSPaymentSheetMetricsEvent * event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSString * passwordEquivalentToken;                          //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (nonatomic,retain) NSString * paymentToken;                                     //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) AMSBiometricsSignatureResult * signatureResult;              //@synthesize signatureResult=_signatureResult - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)passwordEquivalentToken;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(AMSPaymentSheetMetricsEvent *)event;
-(void)setEvent:(AMSPaymentSheetMetricsEvent *)arg1 ;
-(AMSBiometricsSignatureResult *)signatureResult;
-(NSString *)paymentToken;
-(void)setPaymentToken:(NSString *)arg1 ;
-(void)setSignatureResult:(AMSBiometricsSignatureResult *)arg1 ;
-(BOOL)didAuthorizePayment;
-(void)setDidAuthorizePayment:(BOOL)arg1 ;
-(BOOL)didBiometricLockout;
-(void)setDidBiometricLockout:(BOOL)arg1 ;
-(BOOL)didPresent;
-(void)setDidPresent:(BOOL)arg1 ;
@end

