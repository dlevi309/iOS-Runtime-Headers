/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _operationalAnalyticsIdentifier;
	NSString* _retryNonce;
	NSString* _sessionIdentifier;
	NSData* _signature;
	NSMutableArray* _signedFields;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasMerchantIdentifier; 
@property (nonatomic,retain) NSString * merchantIdentifier;                          //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSString * sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasNonce; 
@property (nonatomic,retain) NSString * nonce;                                       //@synthesize nonce=_nonce - In the implementation block
@property (assign,nonatomic) BOOL hasEpochTimestamp; 
@property (assign,nonatomic) unsigned long long epochTimestamp;                      //@synthesize epochTimestamp=_epochTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) BOOL hasRetryNonce; 
@property (nonatomic,retain) NSString * retryNonce;                                  //@synthesize retryNonce=_retryNonce - In the implementation block
@property (assign,nonatomic) BOOL hasExpiresAt; 
@property (assign,nonatomic) unsigned long long expiresAt;                           //@synthesize expiresAt=_expiresAt - In the implementation block
@property (nonatomic,readonly) BOOL hasInitiativeContext; 
@property (nonatomic,retain) NSString * initiativeContext;                           //@synthesize initiativeContext=_initiativeContext - In the implementation block
@property (nonatomic,readonly) BOOL hasInitiative; 
@property (nonatomic,retain) NSString * initiative;                                  //@synthesize initiative=_initiative - In the implementation block
@property (nonatomic,retain) NSMutableArray * signedFields;                          //@synthesize signedFields=_signedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasAmpEnrollmentPinning; 
@property (nonatomic,retain) NSData * ampEnrollmentPinning;                          //@synthesize ampEnrollmentPinning=_ampEnrollmentPinning - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationalAnalyticsIdentifier; 
@property (nonatomic,retain) NSString * operationalAnalyticsIdentifier;              //@synthesize operationalAnalyticsIdentifier=_operationalAnalyticsIdentifier - In the implementation block
+(Class)signedFieldsType;
-(id)dictionaryRepresentation;
-(NSData *)signature;
-(NSString *)operationalAnalyticsIdentifier;
-(NSString *)initiativeContext;
-(NSData *)ampEnrollmentPinning;
-(BOOL)hasSignature;
-(void)setNonce:(NSString *)arg1 ;
-(BOOL)hasNonce;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(id)description;
-(unsigned long long)expiresAt;
-(BOOL)hasDomain;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)addSignedFields:(id)arg1 ;
-(unsigned long long)signedFieldsCount;
-(void)clearSignedFields;
-(id)signedFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setAmpEnrollmentPinning:(NSData *)arg1 ;
-(BOOL)hasMerchantIdentifier;
-(BOOL)hasExpiresAt;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(void)setHasEpochTimestamp:(BOOL)arg1 ;
-(BOOL)hasEpochTimestamp;
-(void)setHasExpiresAt:(BOOL)arg1 ;
-(BOOL)hasInitiativeContext;
-(NSString *)initiative;
-(BOOL)hasAmpEnrollmentPinning;
-(BOOL)hasOperationalAnalyticsIdentifier;
-(NSString *)retryNonce;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)nonce;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasInitiative;
-(BOOL)hasRetryNonce;
-(void)setEpochTimestamp:(unsigned long long)arg1 ;
-(void)setExpiresAt:(unsigned long long)arg1 ;
-(void)setOperationalAnalyticsIdentifier:(NSString *)arg1 ;
-(void)setInitiative:(NSString *)arg1 ;
-(void)setInitiativeContext:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSMutableArray *)signedFields;
-(void)setSignedFields:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(unsigned long long)epochTimestamp;
-(void)setRetryNonce:(NSString *)arg1 ;
@end

