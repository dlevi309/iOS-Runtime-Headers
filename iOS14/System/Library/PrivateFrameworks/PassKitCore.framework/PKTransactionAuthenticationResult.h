/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKTransactionAuthenticationContext, NSData, NSString;

@interface PKTransactionAuthenticationResult : NSObject <NSSecureCoding> {

	PKTransactionAuthenticationContext* _authenticationContext;
	NSData* _encryptedPIN;
	NSData* _transactionDetailsSignature;
	NSData* _userConfirmation;
	NSString* _transactionServiceIdentifier;

}

@property (nonatomic,retain) PKTransactionAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,copy) NSData * encryptedPIN;                                                     //@synthesize encryptedPIN=_encryptedPIN - In the implementation block
@property (nonatomic,copy) NSData * transactionDetailsSignature;                                      //@synthesize transactionDetailsSignature=_transactionDetailsSignature - In the implementation block
@property (nonatomic,copy) NSData * userConfirmation;                                                 //@synthesize userConfirmation=_userConfirmation - In the implementation block
@property (nonatomic,copy) NSString * transactionServiceIdentifier;                                   //@synthesize transactionServiceIdentifier=_transactionServiceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDataForAllRequestedAuthenticationMechanisms; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAuthenticationContext:(PKTransactionAuthenticationContext *)arg1 ;
-(PKTransactionAuthenticationContext *)authenticationContext;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)encryptedPIN;
-(void)setEncryptedPIN:(NSData *)arg1 ;
-(BOOL)isEqualToTransactionAuthenticationResult:(id)arg1 ;
-(BOOL)hasDataForAllRequestedAuthenticationMechanisms;
-(NSData *)userConfirmation;
-(NSData *)transactionDetailsSignature;
-(void)setTransactionDetailsSignature:(NSData *)arg1 ;
-(void)setUserConfirmation:(NSData *)arg1 ;
-(NSString *)transactionServiceIdentifier;
-(void)setTransactionServiceIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

