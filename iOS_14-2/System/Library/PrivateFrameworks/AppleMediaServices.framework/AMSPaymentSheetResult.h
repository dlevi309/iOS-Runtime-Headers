/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, AMSBiometricsSignatureResult;

@interface AMSPaymentSheetResult : NSObject {

	NSString* _passwordEquivalentToken;
	NSString* _paymentToken;
	AMSBiometricsSignatureResult* _signatureResult;

}

@property (nonatomic,retain) NSString * passwordEquivalentToken;                          //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (nonatomic,retain) NSString * paymentToken;                                     //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) AMSBiometricsSignatureResult * signatureResult;              //@synthesize signatureResult=_signatureResult - In the implementation block
-(NSString *)passwordEquivalentToken;
-(AMSBiometricsSignatureResult *)signatureResult;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(NSString *)paymentToken;
-(void)setPaymentToken:(NSString *)arg1 ;
-(void)setSignatureResult:(AMSBiometricsSignatureResult *)arg1 ;
@end

