/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying> {

	unsigned long long _epochTimestamp;
	unsigned long long _expiresAt;
	NSData* _ampEnrollmentPinning;
	NSString* _displayName;
	NSString* _domain;
	NSString* _initiative;
	NSString* _initiativeContext;
	NSString* _merchantIdentifier;
	NSString* _nonce;
	NSString* _retryNonce;
	NSString* _sessionIdentifier;
	NSData* _signature;
	NSMutableArray* _signedFields;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasMerchantIdentifier; 
@property (nonatomic,retain) NSString * merchantIdentifier;                  //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSString * sessionIdentifier;                   //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNonce; 
@property (nonatomic,retain) NSString * nonce;                               //@synthesize nonce=_nonce - In the implementation block
@property (assign,nonatomic) BOOL hasEpochTimestamp; 
@property (assign,nonatomic) unsigned long long epochTimestamp;              //@synthesize epochTimestamp=_epochTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                             //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) BOOL hasRetryNonce; 
@property (nonatomic,retain) NSString * retryNonce;                          //@synthesize retryNonce=_retryNonce - In the implementation block
@property (assign,nonatomic) BOOL hasExpiresAt; 
@property (assign,nonatomic) unsigned long long expiresAt;                   //@synthesize expiresAt=_expiresAt - In the implementation block
@property (nonatomic,readonly) BOOL hasInitiativeContext; 
@property (nonatomic,retain) NSString * initiativeContext;                   //@synthesize initiativeContext=_initiativeContext - In the implementation block
@property (nonatomic,readonly) BOOL hasInitiative; 
@property (nonatomic,retain) NSString * initiative;                          //@synthesize initiative=_initiative - In the implementation block
@property (nonatomic,retain) NSMutableArray * signedFields;                  //@synthesize signedFields=_signedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasAmpEnrollmentPinning; 
@property (nonatomic,retain) NSData * ampEnrollmentPinning;                  //@synthesize ampEnrollmentPinning=_ampEnrollmentPinning - In the implementation block
+(Class)signedFieldsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasDomain;
-(NSData *)signature;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasDisplayName;
-(unsigned long long)expiresAt;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setSignedFields:(NSMutableArray *)arg1 ;
-(NSString *)merchantIdentifier;
-(NSMutableArray *)signedFields;
-(unsigned long long)epochTimestamp;
-(NSString *)initiativeContext;
-(NSString *)initiative;
-(NSData *)ampEnrollmentPinning;
-(NSString *)retryNonce;
-(void)setRetryNonce:(NSString *)arg1 ;
-(BOOL)hasInitiative;
-(BOOL)hasRetryNonce;
-(void)setEpochTimestamp:(unsigned long long)arg1 ;
-(void)setExpiresAt:(unsigned long long)arg1 ;
-(void)setInitiative:(NSString *)arg1 ;
-(void)setInitiativeContext:(NSString *)arg1 ;
-(void)addSignedFields:(id)arg1 ;
-(unsigned long long)signedFieldsCount;
-(void)clearSignedFields;
-(id)signedFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setAmpEnrollmentPinning:(NSData *)arg1 ;
-(BOOL)hasMerchantIdentifier;
-(BOOL)hasSessionIdentifier;
-(BOOL)hasNonce;
-(void)setHasEpochTimestamp:(BOOL)arg1 ;
-(BOOL)hasEpochTimestamp;
-(BOOL)hasSignature;
-(void)setHasExpiresAt:(BOOL)arg1 ;
-(BOOL)hasExpiresAt;
-(BOOL)hasInitiativeContext;
-(BOOL)hasAmpEnrollmentPinning;
@end

