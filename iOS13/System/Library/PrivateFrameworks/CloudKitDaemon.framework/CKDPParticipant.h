/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate, CKDPContactInformation, CKDPIdentifier, NSData, CKDPProtectionInfo;

@interface CKDPParticipant : PBCodable <NSCopying> {

	long long _acceptTimestamp;
	CKDPDate* _acceptedTimestampDate;
	CKDPContactInformation* _contactInformation;
	CKDPDate* _inviteTimestampDate;
	CKDPIdentifier* _inviterId;
	int _keyHealth;
	int _outOfNetworkKeyType;
	NSData* _outOfNetworkPrivateKey;
	CKDPIdentifier* _participantId;
	int _participantType;
	int _permission;
	CKDPProtectionInfo* _protectionInfo;
	NSData* _protectionInfoPublicKey;
	CKDPProtectionInfo* _publicKey;
	int _publicKeyVersion;
	int _state;
	CKDPIdentifier* _userId;
	BOOL _acceptedInProcess;
	BOOL _createdInProcess;
	BOOL _isInNetwork;
	BOOL _isOrgUser;
	SCD_Struct_CK14 _has;

}

@property (nonatomic,readonly) BOOL hasParticipantId; 
@property (nonatomic,retain) CKDPIdentifier * participantId;                           //@synthesize participantId=_participantId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) CKDPIdentifier * userId;                                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL hasContactInformation; 
@property (nonatomic,retain) CKDPContactInformation * contactInformation;              //@synthesize contactInformation=_contactInformation - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasParticipantType; 
@property (assign,nonatomic) int participantType;                                      //@synthesize participantType=_participantType - In the implementation block
@property (assign,nonatomic) BOOL hasPermission; 
@property (assign,nonatomic) int permission;                                           //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) BOOL hasInviterId; 
@property (nonatomic,retain) CKDPIdentifier * inviterId;                               //@synthesize inviterId=_inviterId - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedInProcess; 
@property (assign,nonatomic) BOOL createdInProcess;                                    //@synthesize createdInProcess=_createdInProcess - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicKey; 
@property (nonatomic,retain) CKDPProtectionInfo * publicKey;                           //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptTimestamp; 
@property (assign,nonatomic) long long acceptTimestamp;                                //@synthesize acceptTimestamp=_acceptTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                      //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasOutOfNetworkPrivateKey; 
@property (nonatomic,retain) NSData * outOfNetworkPrivateKey;                          //@synthesize outOfNetworkPrivateKey=_outOfNetworkPrivateKey - In the implementation block
@property (assign,nonatomic) BOOL hasOutOfNetworkKeyType; 
@property (assign,nonatomic) int outOfNetworkKeyType;                                  //@synthesize outOfNetworkKeyType=_outOfNetworkKeyType - In the implementation block
@property (assign,nonatomic) BOOL hasPublicKeyVersion; 
@property (assign,nonatomic) int publicKeyVersion;                                     //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptedInProcess; 
@property (assign,nonatomic) BOOL acceptedInProcess;                                   //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (assign,nonatomic) BOOL hasIsInNetwork; 
@property (assign,nonatomic) BOOL isInNetwork;                                         //@synthesize isInNetwork=_isInNetwork - In the implementation block
@property (nonatomic,readonly) BOOL hasAcceptedTimestampDate; 
@property (nonatomic,retain) CKDPDate * acceptedTimestampDate;                         //@synthesize acceptedTimestampDate=_acceptedTimestampDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsOrgUser; 
@property (assign,nonatomic) BOOL isOrgUser;                                           //@synthesize isOrgUser=_isOrgUser - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfoPublicKey; 
@property (nonatomic,retain) NSData * protectionInfoPublicKey;                         //@synthesize protectionInfoPublicKey=_protectionInfoPublicKey - In the implementation block
@property (assign,nonatomic) BOOL hasKeyHealth; 
@property (assign,nonatomic) int keyHealth;                                            //@synthesize keyHealth=_keyHealth - In the implementation block
@property (nonatomic,readonly) BOOL hasInviteTimestampDate; 
@property (nonatomic,retain) CKDPDate * inviteTimestampDate;                           //@synthesize inviteTimestampDate=_inviteTimestampDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)state;
-(void)setState:(int)arg1 ;
-(CKDPProtectionInfo *)publicKey;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)outOfNetworkPrivateKey;
-(void)setOutOfNetworkPrivateKey:(NSData *)arg1 ;
-(int)publicKeyVersion;
-(void)setPublicKeyVersion:(int)arg1 ;
-(int)permission;
-(void)setPermission:(int)arg1 ;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(NSData *)protectionInfoPublicKey;
-(void)setProtectionInfoPublicKey:(NSData *)arg1 ;
-(BOOL)createdInProcess;
-(BOOL)acceptedInProcess;
-(void)setCreatedInProcess:(BOOL)arg1 ;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(int)participantType;
-(void)setPublicKey:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasState;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(void)setHasState:(BOOL)arg1 ;
-(void)setParticipantType:(int)arg1 ;
-(CKDPIdentifier *)userId;
-(void)setUserId:(CKDPIdentifier *)arg1 ;
-(BOOL)hasUserId;
-(BOOL)hasProtectionInfo;
-(void)setParticipantId:(CKDPIdentifier *)arg1 ;
-(BOOL)hasParticipantType;
-(BOOL)hasPublicKey;
-(BOOL)hasParticipantId;
-(void)setHasPublicKeyVersion:(BOOL)arg1 ;
-(BOOL)hasPublicKeyVersion;
-(void)setHasAcceptedInProcess:(BOOL)arg1 ;
-(BOOL)hasAcceptedInProcess;
-(CKDPIdentifier *)participantId;
-(void)setHasPermission:(BOOL)arg1 ;
-(BOOL)hasPermission;
-(id)permissionAsString:(int)arg1 ;
-(int)StringAsPermission:(id)arg1 ;
-(id)_participantTypeCKLogValue;
-(id)_stateCKLogValue;
-(id)_permissionCKLogValue;
-(BOOL)isInNetwork;
-(void)setIsInNetwork:(BOOL)arg1 ;
-(void)setHasIsInNetwork:(BOOL)arg1 ;
-(BOOL)hasIsInNetwork;
-(void)setHasParticipantType:(BOOL)arg1 ;
-(id)participantTypeAsString:(int)arg1 ;
-(int)StringAsParticipantType:(id)arg1 ;
-(void)setContactInformation:(CKDPContactInformation *)arg1 ;
-(void)setInviterId:(CKDPIdentifier *)arg1 ;
-(void)setAcceptedTimestampDate:(CKDPDate *)arg1 ;
-(void)setInviteTimestampDate:(CKDPDate *)arg1 ;
-(BOOL)hasContactInformation;
-(BOOL)hasInviterId;
-(void)setHasCreatedInProcess:(BOOL)arg1 ;
-(BOOL)hasCreatedInProcess;
-(void)setAcceptTimestamp:(long long)arg1 ;
-(void)setHasAcceptTimestamp:(BOOL)arg1 ;
-(BOOL)hasAcceptTimestamp;
-(BOOL)hasOutOfNetworkPrivateKey;
-(void)setOutOfNetworkKeyType:(int)arg1 ;
-(void)setHasOutOfNetworkKeyType:(BOOL)arg1 ;
-(BOOL)hasOutOfNetworkKeyType;
-(BOOL)hasAcceptedTimestampDate;
-(void)setIsOrgUser:(BOOL)arg1 ;
-(void)setHasIsOrgUser:(BOOL)arg1 ;
-(BOOL)hasIsOrgUser;
-(BOOL)hasProtectionInfoPublicKey;
-(int)keyHealth;
-(void)setKeyHealth:(int)arg1 ;
-(void)setHasKeyHealth:(BOOL)arg1 ;
-(BOOL)hasKeyHealth;
-(id)keyHealthAsString:(int)arg1 ;
-(int)StringAsKeyHealth:(id)arg1 ;
-(BOOL)hasInviteTimestampDate;
-(CKDPContactInformation *)contactInformation;
-(CKDPIdentifier *)inviterId;
-(long long)acceptTimestamp;
-(int)outOfNetworkKeyType;
-(CKDPDate *)acceptedTimestampDate;
-(BOOL)isOrgUser;
-(CKDPDate *)inviteTimestampDate;
@end

