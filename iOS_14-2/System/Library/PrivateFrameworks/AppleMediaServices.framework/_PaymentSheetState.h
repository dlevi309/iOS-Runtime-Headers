/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSError, NSString, AMSBiometricsSignatureResult;

@interface _PaymentSheetState : NSObject {

	BOOL _didAuthorizePayment;
	BOOL _didBiometricsLockout;
	BOOL _didPresent;
	NSError* _error;
	unsigned long long _cancellationType;
	NSString* _passwordEquivalentToken;
	NSString* _paymentToken;
	AMSBiometricsSignatureResult* _signatureResult;

}

@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL didAuthorizePayment;                                    //@synthesize didAuthorizePayment=_didAuthorizePayment - In the implementation block
@property (assign,nonatomic) BOOL didBiometricsLockout;                                   //@synthesize didBiometricsLockout=_didBiometricsLockout - In the implementation block
@property (assign,nonatomic) unsigned long long cancellationType;                         //@synthesize cancellationType=_cancellationType - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                             //@synthesize didPresent=_didPresent - In the implementation block
@property (nonatomic,retain) NSString * passwordEquivalentToken;                          //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (nonatomic,retain) NSString * paymentToken;                                     //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) AMSBiometricsSignatureResult * signatureResult;              //@synthesize signatureResult=_signatureResult - In the implementation block
-(BOOL)didPresent;
-(NSString *)passwordEquivalentToken;
-(id)init;
-(AMSBiometricsSignatureResult *)signatureResult;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(NSString *)paymentToken;
-(void)setPaymentToken:(NSString *)arg1 ;
-(void)setSignatureResult:(AMSBiometricsSignatureResult *)arg1 ;
-(BOOL)didAuthorizePayment;
-(void)setDidAuthorizePayment:(BOOL)arg1 ;
-(unsigned long long)cancellationType;
-(void)setCancellationType:(unsigned long long)arg1 ;
-(void)setDidPresent:(BOOL)arg1 ;
-(BOOL)didBiometricsLockout;
-(void)setDidBiometricsLockout:(BOOL)arg1 ;
@end

