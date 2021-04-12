/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKEncryptedPushProvisioningTarget, NSString;

@interface PKShareableCredential : NSObject <NSSecureCoding, NSCopying> {

	PKEncryptedPushProvisioningTarget* _encryptedPushProvisioningTarget;
	unsigned long long _status;
	NSString* _ownerDisplayName;
	NSString* _credentialIdentifier;
	NSString* _credentialIdentifierHash;
	NSString* _sharingInstanceIdentifier;
	NSString* _cardConfigurationIdentifier;
	NSString* _nonce;

}

@property (nonatomic,copy) PKEncryptedPushProvisioningTarget * encryptedPushProvisioningTarget;              //@synthesize encryptedPushProvisioningTarget=_encryptedPushProvisioningTarget - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * ownerDisplayName;                                                    //@synthesize ownerDisplayName=_ownerDisplayName - In the implementation block
@property (nonatomic,retain) NSString * credentialIdentifier;                                                //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,retain) NSString * credentialIdentifierHash;                                            //@synthesize credentialIdentifierHash=_credentialIdentifierHash - In the implementation block
@property (nonatomic,retain) NSString * sharingInstanceIdentifier;                                           //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cardConfigurationIdentifier;                                         //@synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * nonce;                                                               //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNonce:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEncryptedPushProvisioningTarget:(PKEncryptedPushProvisioningTarget *)arg1 ;
-(void)setCredentialIdentifierHash:(NSString *)arg1 ;
-(PKEncryptedPushProvisioningTarget *)encryptedPushProvisioningTarget;
-(NSString *)credentialIdentifierHash;
-(id)description;
-(NSString *)ownerDisplayName;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(void)setCardConfigurationIdentifier:(NSString *)arg1 ;
-(NSString *)cardConfigurationIdentifier;
-(BOOL)isEqualToShareableCredential:(id)arg1 ;
-(id)initWithProtoCredential:(id)arg1 ;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(id)protoCredential;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(NSString *)nonce;
-(void)setStatus:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
@end

