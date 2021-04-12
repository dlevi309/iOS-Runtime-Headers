/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSString, NSDictionary, NSData, GKTournamentInternal;

@interface GKMatchRequestInternal : GKInternalRepresentation {

	unsigned long long _matchType;
	NSArray* _recipients;
	NSArray* _recipientPlayerIDs;
	NSString* _inviteMessage;
	NSDictionary* _localizableInviteMessage;
	NSData* _sessionToken;
	NSString* _rid;
	unsigned _version;
	BOOL _preloadedMatch;
	unsigned long long _playerGroup;
	unsigned _playerAttributes;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	unsigned char _defaultNumberOfPlayers;
	BOOL _restrictToAutomatch;
	GKTournamentInternal* _tournamentForInvitePool;

}

@property (assign,nonatomic) unsigned char minPlayers;                                    //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) unsigned char maxPlayers;                                    //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) unsigned char defaultNumberOfPlayers;                        //@synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers - In the implementation block
@property (assign,nonatomic) unsigned long long playerGroup;                              //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                                   //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                        //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSArray * recipientPlayerIDs;                                //@synthesize recipientPlayerIDs=_recipientPlayerIDs - In the implementation block
@property (nonatomic,copy) NSString * inviteMessage;                                      //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableInviteMessage;                     //@synthesize localizableInviteMessage=_localizableInviteMessage - In the implementation block
@property (assign,nonatomic) BOOL restrictToAutomatch;                                    //@synthesize restrictToAutomatch=_restrictToAutomatch - In the implementation block
@property (nonatomic,retain) GKTournamentInternal * tournamentForInvitePool;              //@synthesize tournamentForInvitePool=_tournamentForInvitePool - In the implementation block
@property (assign,nonatomic) unsigned long long matchType;                                //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                                       //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSString * rid;                                              //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned version;                                            //@synthesize version=_version - In the implementation block
@property (assign,getter=isPreloadedMatch,nonatomic) BOOL preloadedMatch;                 //@synthesize preloadedMatch=_preloadedMatch - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSArray *)recipients;
-(NSString *)rid;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)inviteMessage;
-(unsigned char)defaultNumberOfPlayers;
-(unsigned char)minPlayers;
-(unsigned char)maxPlayers;
-(void)setPreloadedMatch:(BOOL)arg1 ;
-(void)setInviteMessage:(NSString *)arg1 ;
-(void)setRestrictToAutomatch:(BOOL)arg1 ;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)setRid:(NSString *)arg1 ;
-(NSData *)sessionToken;
-(BOOL)restrictToAutomatch;
-(unsigned long long)hash;
-(void)setMinPlayers:(unsigned char)arg1 ;
-(void)setMaxPlayers:(unsigned char)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)setPlayerGroup:(unsigned long long)arg1 ;
-(unsigned long long)playerGroup;
-(void)setDefaultNumberOfPlayers:(unsigned char)arg1 ;
-(unsigned)version;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)matchType;
-(unsigned)playerAttributes;
-(NSArray *)recipientPlayerIDs;
-(void)setRecipientPlayerIDs:(NSArray *)arg1 ;
-(GKTournamentInternal *)tournamentForInvitePool;
-(void)setTournamentForInvitePool:(GKTournamentInternal *)arg1 ;
-(void)setMatchType:(unsigned long long)arg1 ;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(NSDictionary *)localizableInviteMessage;
-(BOOL)isPreloadedMatch;
-(BOOL)hasGuestPlayers;
-(void)setLocalizableInviteMessage:(NSDictionary *)arg1 ;
@end

