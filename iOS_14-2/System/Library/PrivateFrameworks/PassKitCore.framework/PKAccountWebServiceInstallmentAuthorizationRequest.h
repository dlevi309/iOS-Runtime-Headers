/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/PKAccountWebServiceApplePayTrustProtocol.h>

@class NSURL, PKApplePayTrustHashResponse, NSData, NSString, NSDecimalNumber, CNPostalAddress;

@interface PKAccountWebServiceInstallmentAuthorizationRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol> {

	NSURL* baseURL;
	PKApplePayTrustHashResponse* hashResponse;
	NSData* _publicKeyHash;
	NSString* _accountIdentifier;
	NSString* _bindToken;
	NSDecimalNumber* _authorizationAmount;
	NSString* _installmentGroupIdentifier;
	CNPostalAddress* _shippingAddress;

}

@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bindToken;                                      //@synthesize bindToken=_bindToken - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * authorizationAmount;                   //@synthesize authorizationAmount=_authorizationAmount - In the implementation block
@property (nonatomic,copy) NSString * installmentGroupIdentifier;                     //@synthesize installmentGroupIdentifier=_installmentGroupIdentifier - In the implementation block
@property (nonatomic,retain) CNPostalAddress * shippingAddress;                       //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash;                                    //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSURL *)baseURL;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bindToken;
-(id)manifestHashWithReferenceIdentifier:(id)arg1 ;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(PKApplePayTrustHashResponse *)arg1 ;
-(void)setBindToken:(NSString *)arg1 ;
-(NSDecimalNumber *)authorizationAmount;
-(void)setAuthorizationAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)installmentGroupIdentifier;
-(void)setInstallmentGroupIdentifier:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNPostalAddress *)shippingAddress;
-(void)setShippingAddress:(CNPostalAddress *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

