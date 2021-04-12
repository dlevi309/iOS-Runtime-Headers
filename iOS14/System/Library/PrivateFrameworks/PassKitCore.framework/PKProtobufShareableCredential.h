/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufShareableCredential : PBCodable <NSCopying> {

	NSString* _cardConfigurationIdentifier;
	NSString* _credentialIdentifier;
	NSString* _credentialIdentifierHash;
	NSString* _encryptedPushProvisioningTarget;
	NSString* _nonce;
	NSString* _ownerDisplayName;
	NSString* _sharingInstanceIdentifier;
	int _status;
	SCD_Struct_PK13 _has;

}

@property (nonatomic,readonly) BOOL hasEncryptedPushProvisioningTarget; 
@property (nonatomic,retain) NSString * encryptedPushProvisioningTarget;              //@synthesize encryptedPushProvisioningTarget=_encryptedPushProvisioningTarget - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialIdentifierHash; 
@property (nonatomic,retain) NSString * credentialIdentifierHash;                     //@synthesize credentialIdentifierHash=_credentialIdentifierHash - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerDisplayName; 
@property (nonatomic,retain) NSString * ownerDisplayName;                             //@synthesize ownerDisplayName=_ownerDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL hasCredentialIdentifier; 
@property (nonatomic,retain) NSString * credentialIdentifier;                         //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCardConfigurationIdentifier; 
@property (nonatomic,retain) NSString * cardConfigurationIdentifier;                  //@synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSharingInstanceIdentifier; 
@property (nonatomic,retain) NSString * sharingInstanceIdentifier;                    //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNonce; 
@property (nonatomic,retain) NSString * nonce;                                        //@synthesize nonce=_nonce - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setNonce:(NSString *)arg1 ;
-(BOOL)hasNonce;
-(void)mergeFrom:(id)arg1 ;
-(void)setEncryptedPushProvisioningTarget:(NSString *)arg1 ;
-(void)setCredentialIdentifierHash:(NSString *)arg1 ;
-(BOOL)hasEncryptedPushProvisioningTarget;
-(BOOL)hasCredentialIdentifierHash;
-(BOOL)hasOwnerDisplayName;
-(BOOL)hasCredentialIdentifier;
-(BOOL)hasCardConfigurationIdentifier;
-(BOOL)hasSharingInstanceIdentifier;
-(NSString *)encryptedPushProvisioningTarget;
-(NSString *)credentialIdentifierHash;
-(id)statusAsString:(int)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(NSString *)ownerDisplayName;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(void)setCardConfigurationIdentifier:(NSString *)arg1 ;
-(NSString *)cardConfigurationIdentifier;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(NSString *)nonce;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

