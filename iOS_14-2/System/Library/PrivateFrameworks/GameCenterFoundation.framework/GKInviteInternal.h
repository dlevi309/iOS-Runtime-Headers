/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSData, GKPlayerInternal, NSDictionary;

@interface GKInviteInternal : GKInternalRepresentation {

	NSString* _inviteID;
	NSData* _sessionToken;
	GKPlayerInternal* _player;
	NSString* _message;
	NSDictionary* _localizableMessage;
	NSString* _deviceID;
	NSString* _bundleID;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSData* _peerNATIP;
	NSData* _peerBlob;
	NSString* _rid;
	unsigned long long _playerGroup;
	unsigned _playerAttributes;
	long long _peerNATType;
	unsigned long long _matchType;
	unsigned char _version;
	NSString* _participantID;
	BOOL _isMessageBasedInvite;

}

@property (nonatomic,retain) NSString * inviteID;                            //@synthesize inviteID=_inviteID - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                          //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (assign,nonatomic) unsigned long long matchType;                   //@synthesize matchType=_matchType - In the implementation block
@property (assign,nonatomic) unsigned long long playerGroup;                 //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                      //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSString * peerID;                              //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,retain) NSData * peerPushToken;                         //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (assign,nonatomic) long long peerNATType;                          //@synthesize peerNATType=_peerNATType - In the implementation block
@property (nonatomic,retain) NSData * peerNATIP;                             //@synthesize peerNATIP=_peerNATIP - In the implementation block
@property (nonatomic,retain) NSData * peerBlob;                              //@synthesize peerBlob=_peerBlob - In the implementation block
@property (nonatomic,retain) NSString * rid;                                 //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned char version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * participantID;                       //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                            //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isNearby; 
@property (assign,nonatomic) BOOL isMessageBasedInvite;                      //@synthesize isMessageBasedInvite=_isMessageBasedInvite - In the implementation block
+(id)inviteWithBulletin:(id)arg1 ;
+(id)inviteFromNearbyPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 bundleID:(id)arg4 connectionData:(id)arg5 ;
+(id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3 ;
+(id)secureCodedPropertyKeys;
-(GKPlayerInternal *)player;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)rid;
-(void)setPeerID:(NSString *)arg1 ;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(NSString *)deviceID;
-(NSString *)message;
-(BOOL)isNearby;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)peerID;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)setRid:(NSString *)arg1 ;
-(NSData *)sessionToken;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(NSString *)inviteID;
-(void)setVersion:(unsigned char)arg1 ;
-(void)setPlayerGroup:(unsigned long long)arg1 ;
-(unsigned long long)playerGroup;
-(NSData *)peerBlob;
-(unsigned char)version;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)matchType;
-(id)descriptionSubstitutionMap;
-(unsigned)playerAttributes;
-(NSData *)peerPushToken;
-(long long)peerNATType;
-(NSData *)peerNATIP;
-(BOOL)isMessageBasedInvite;
-(void)setMatchType:(unsigned long long)arg1 ;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(void)setInviteID:(NSString *)arg1 ;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(void)setPeerNATType:(long long)arg1 ;
-(void)setPeerNATIP:(NSData *)arg1 ;
-(void)setPeerBlob:(NSData *)arg1 ;
-(void)setIsMessageBasedInvite:(BOOL)arg1 ;
@end

