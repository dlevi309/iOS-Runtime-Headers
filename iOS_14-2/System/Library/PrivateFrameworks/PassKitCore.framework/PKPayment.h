/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentToken, PKContact, PKShippingMethod, NSData, NSMutableDictionary, NSString;

@interface PKPayment : NSObject <NSSecureCoding> {

	PKPaymentToken* _token;
	PKContact* _billingContact;
	PKContact* _shippingContact;
	PKShippingMethod* _shippingMethod;
	NSData* _credential;
	NSMutableDictionary* _authKitAuthenticationResults;
	long long _biometricAuthorizationAttempts;
	NSString* _installmentAuthorizationToken;

}

@property (nonatomic,retain) PKContact * billingContact;                                      //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,retain) PKContact * shippingContact;                                     //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,retain) PKPaymentToken * token;                                          //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;                               //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,retain) NSData * credential;                                             //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authKitAuthenticationResults;              //@synthesize authKitAuthenticationResults=_authKitAuthenticationResults - In the implementation block
@property (assign,nonatomic) long long biometricAuthorizationAttempts;                        //@synthesize biometricAuthorizationAttempts=_biometricAuthorizationAttempts - In the implementation block
@property (nonatomic,copy) NSString * installmentAuthorizationToken;                          //@synthesize installmentAuthorizationToken=_installmentAuthorizationToken - In the implementation block
@property (nonatomic,readonly) const void* billingAddress; 
@property (nonatomic,readonly) const void* shippingAddress; 
+(BOOL)supportsSecureCoding;
+(id)paymentWithProtobuf:(id)arg1 ;
+(long long)version;
-(id)dictionaryRepresentation;
-(NSData *)credential;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAuthKitAuthenticationResults:(NSMutableDictionary *)arg1 ;
-(void)setInstallmentAuthorizationToken:(NSString *)arg1 ;
-(NSString *)installmentAuthorizationToken;
-(void)setCredential:(NSData *)arg1 ;
-(id)description;
-(NSMutableDictionary *)authKitAuthenticationResults;
-(void)setBillingContact:(PKContact *)arg1 ;
-(void)setToken:(PKPaymentToken *)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(PKContact *)billingContact;
-(long long)biometricAuthorizationAttempts;
-(id)protobuf;
-(PKContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
-(id)initWithCoder:(id)arg1 ;
-(void)setBiometricAuthorizationAttempts:(long long)arg1 ;
-(const void*)shippingAddress;
-(PKPaymentToken *)token;
-(id)initWithToken:(id)arg1 ;
-(const void*)billingAddress;
@end

