/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, CKDPProtectionInfo, CKDPShareIdentifier, NSData;

@interface CKDPShare : PBCodable <NSCopying> {

	NSString* _displayedHostname;
	NSString* _etag;
	NSMutableArray* _invitedKeyToRemoves;
	CKDPProtectionInfo* _invitedPcs;
	NSString* _origin;
	NSMutableArray* _participants;
	NSMutableArray* _potentialMatchs;
	int _publicAccess;
	int _publisherModelType;
	CKDPProtectionInfo* _selfAddedPcs;
	CKDPShareIdentifier* _shareId;
	NSData* _shortTokenHash;
	NSString* _shortTokenRoutingKey;
	BOOL _anonymousPublicAccess;
	BOOL _publisherModel;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                     //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                   //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) BOOL hasPublicAccess; 
@property (assign,nonatomic) int publicAccess;                                  //@synthesize publicAccess=_publicAccess - In the implementation block
@property (nonatomic,readonly) BOOL hasInvitedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * invitedPcs;                   //@synthesize invitedPcs=_invitedPcs - In the implementation block
@property (nonatomic,readonly) BOOL hasSelfAddedPcs; 
@property (nonatomic,retain) CKDPProtectionInfo * selfAddedPcs;                 //@synthesize selfAddedPcs=_selfAddedPcs - In the implementation block
@property (nonatomic,retain) NSMutableArray * participants;                     //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenRoutingKey; 
@property (nonatomic,retain) NSString * shortTokenRoutingKey;                   //@synthesize shortTokenRoutingKey=_shortTokenRoutingKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * potentialMatchs;                  //@synthesize potentialMatchs=_potentialMatchs - In the implementation block
@property (nonatomic,retain) NSMutableArray * invitedKeyToRemoves;              //@synthesize invitedKeyToRemoves=_invitedKeyToRemoves - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherModel; 
@property (assign,nonatomic) BOOL publisherModel;                               //@synthesize publisherModel=_publisherModel - In the implementation block
@property (assign,nonatomic) BOOL hasAnonymousPublicAccess; 
@property (assign,nonatomic) BOOL anonymousPublicAccess;                        //@synthesize anonymousPublicAccess=_anonymousPublicAccess - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayedHostname; 
@property (nonatomic,retain) NSString * displayedHostname;                      //@synthesize displayedHostname=_displayedHostname - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherModelType; 
@property (assign,nonatomic) int publisherModelType;                            //@synthesize publisherModelType=_publisherModelType - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                           //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) NSString * origin;                                 //@synthesize origin=_origin - In the implementation block
+(Class)participantType;
+(Class)potentialMatchType;
+(Class)invitedKeyToRemoveType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(void)writeTo:(id)arg1 ;
-(NSString *)origin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOrigin:(NSString *)arg1 ;
-(NSMutableArray *)participants;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(NSString *)displayedHostname;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(void)addParticipant:(id)arg1 ;
-(BOOL)hasOrigin;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasShortTokenHash;
-(NSData *)shortTokenHash;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(unsigned long long)potentialMatchsCount;
-(NSMutableArray *)potentialMatchs;
-(void)setSelfAddedPcs:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasSelfAddedPcs;
-(CKDPProtectionInfo *)selfAddedPcs;
-(int)publicAccess;
-(id)_publicAccessCKLogValue;
-(void)addPotentialMatch:(id)arg1 ;
-(void)addInvitedKeyToRemove:(id)arg1 ;
-(void)setInvitedPcs:(CKDPProtectionInfo *)arg1 ;
-(unsigned long long)participantsCount;
-(void)clearParticipants;
-(id)participantAtIndex:(unsigned long long)arg1 ;
-(void)setShortTokenRoutingKey:(NSString *)arg1 ;
-(void)clearPotentialMatchs;
-(id)potentialMatchAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)invitedKeyToRemovesCount;
-(void)clearInvitedKeyToRemoves;
-(id)invitedKeyToRemoveAtIndex:(unsigned long long)arg1 ;
-(void)setPublicAccess:(int)arg1 ;
-(void)setHasPublicAccess:(BOOL)arg1 ;
-(BOOL)hasPublicAccess;
-(id)publicAccessAsString:(int)arg1 ;
-(int)StringAsPublicAccess:(id)arg1 ;
-(BOOL)hasInvitedPcs;
-(BOOL)hasShortTokenRoutingKey;
-(BOOL)publisherModel;
-(void)setPublisherModel:(BOOL)arg1 ;
-(void)setHasPublisherModel:(BOOL)arg1 ;
-(BOOL)hasPublisherModel;
-(BOOL)anonymousPublicAccess;
-(void)setAnonymousPublicAccess:(BOOL)arg1 ;
-(void)setHasAnonymousPublicAccess:(BOOL)arg1 ;
-(BOOL)hasAnonymousPublicAccess;
-(BOOL)hasDisplayedHostname;
-(int)publisherModelType;
-(void)setPublisherModelType:(int)arg1 ;
-(void)setHasPublisherModelType:(BOOL)arg1 ;
-(BOOL)hasPublisherModelType;
-(id)publisherModelTypeAsString:(int)arg1 ;
-(int)StringAsPublisherModelType:(id)arg1 ;
-(CKDPProtectionInfo *)invitedPcs;
-(NSString *)shortTokenRoutingKey;
-(void)setPotentialMatchs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)invitedKeyToRemoves;
-(void)setInvitedKeyToRemoves:(NSMutableArray *)arg1 ;
@end

