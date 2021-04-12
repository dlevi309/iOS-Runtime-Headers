/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKTransactionAuthenticationContext : NSObject <NSSecureCoding> {

	BOOL _complete;
	unsigned long long _requestedAuthenticationMechanisms;
	unsigned long long _processedAuthenticationMechanisms;
	unsigned long long _dataCollectedAuthenticationMechanisms;
	long long _paymentPINFormat;
	NSData* _nonce;
	NSData* _signingKeyMaterial;
	NSData* _partialSignature;
	long long _authenticationFailure;

}

@property (assign,nonatomic) unsigned long long requestedAuthenticationMechanisms;                  //@synthesize requestedAuthenticationMechanisms=_requestedAuthenticationMechanisms - In the implementation block
@property (assign,nonatomic) unsigned long long processedAuthenticationMechanisms;                  //@synthesize processedAuthenticationMechanisms=_processedAuthenticationMechanisms - In the implementation block
@property (assign,nonatomic) unsigned long long dataCollectedAuthenticationMechanisms;              //@synthesize dataCollectedAuthenticationMechanisms=_dataCollectedAuthenticationMechanisms - In the implementation block
@property (assign,nonatomic) BOOL complete;                                                         //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) long long paymentPINFormat;                                            //@synthesize paymentPINFormat=_paymentPINFormat - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                                          //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSData * signingKeyMaterial;                                             //@synthesize signingKeyMaterial=_signingKeyMaterial - In the implementation block
@property (nonatomic,copy) NSData * partialSignature;                                               //@synthesize partialSignature=_partialSignature - In the implementation block
@property (assign,nonatomic) long long authenticationFailure;                                       //@synthesize authenticationFailure=_authenticationFailure - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)setNonce:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)paymentPINFormat;
-(BOOL)isEqualToTransactionAuthenticationContext:(id)arg1 ;
-(void)setRequestedAuthenticationMechanisms:(unsigned long long)arg1 ;
-(unsigned long long)processedAuthenticationMechanisms;
-(void)setProcessedAuthenticationMechanisms:(unsigned long long)arg1 ;
-(void)setDataCollectedAuthenticationMechanisms:(unsigned long long)arg1 ;
-(void)setPaymentPINFormat:(long long)arg1 ;
-(NSData *)signingKeyMaterial;
-(void)setSigningKeyMaterial:(NSData *)arg1 ;
-(long long)authenticationFailure;
-(void)setAuthenticationFailure:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)complete;
-(NSData *)partialSignature;
-(void)setPartialSignature:(NSData *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(NSData *)nonce;
-(unsigned long long)requestedAuthenticationMechanisms;
-(unsigned long long)dataCollectedAuthenticationMechanisms;
-(BOOL)isEqual:(id)arg1 ;
@end

