/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface HDCodableSharingSetupMetadata : PBCodable <NSCopying> {

	NSMutableArray* _invitationTokens;
	NSString* _ownerCloudKitEmailAddress;
	NSData* _ownerParticipant;
	NSData* _shareParticipant;
	NSData* _sourceProfileIdentifier;
	NSString* _syncCircleIdentifier;

}

@property (nonatomic,readonly) BOOL hasSyncCircleIdentifier; 
@property (nonatomic,retain) NSString * syncCircleIdentifier;                   //@synthesize syncCircleIdentifier=_syncCircleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerParticipant; 
@property (nonatomic,retain) NSData * ownerParticipant;                         //@synthesize ownerParticipant=_ownerParticipant - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceProfileIdentifier; 
@property (nonatomic,retain) NSData * sourceProfileIdentifier;                  //@synthesize sourceProfileIdentifier=_sourceProfileIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasShareParticipant; 
@property (nonatomic,retain) NSData * shareParticipant;                         //@synthesize shareParticipant=_shareParticipant - In the implementation block
@property (nonatomic,readonly) BOOL hasOwnerCloudKitEmailAddress; 
@property (nonatomic,retain) NSString * ownerCloudKitEmailAddress;              //@synthesize ownerCloudKitEmailAddress=_ownerCloudKitEmailAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * invitationTokens;                 //@synthesize invitationTokens=_invitationTokens - In the implementation block
+(Class)invitationTokenType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)syncCircleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addInvitationToken:(id)arg1 ;
-(void)setSyncCircleIdentifier:(NSString *)arg1 ;
-(void)setOwnerParticipant:(NSData *)arg1 ;
-(void)setSourceProfileIdentifier:(NSData *)arg1 ;
-(void)setShareParticipant:(NSData *)arg1 ;
-(void)setOwnerCloudKitEmailAddress:(NSString *)arg1 ;
-(unsigned long long)invitationTokensCount;
-(void)clearInvitationTokens;
-(id)invitationTokenAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSyncCircleIdentifier;
-(BOOL)hasOwnerParticipant;
-(BOOL)hasSourceProfileIdentifier;
-(BOOL)hasShareParticipant;
-(BOOL)hasOwnerCloudKitEmailAddress;
-(NSData *)ownerParticipant;
-(NSData *)sourceProfileIdentifier;
-(NSData *)shareParticipant;
-(NSString *)ownerCloudKitEmailAddress;
-(NSMutableArray *)invitationTokens;
-(void)setInvitationTokens:(NSMutableArray *)arg1 ;
@end

