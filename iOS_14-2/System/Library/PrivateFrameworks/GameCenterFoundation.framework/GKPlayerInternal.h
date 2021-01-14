/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber, NSDictionary, NSArray, NSDate, GKGameInternal;

@interface GKPlayerInternal : GKInternalRepresentation {

	NSString* _playerID;
	NSString* _gamePlayerID;
	NSString* _teamPlayerID;
	NSString* _alias;
	NSNumber* _avatarType;
	NSDictionary* _photos;
	NSString* _messagesID;
	NSNumber* _friendLevel;
	NSNumber* _friendBiDirectional;
	NSNumber* _friendPlayedWith;
	NSNumber* _friendPlayedNearby;
	NSNumber* _acceptedGameInviteFromThisFriend;
	NSNumber* _initiatedGameInviteToThisFriend;
	NSNumber* _automatchedTogether;
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;
	NSString* _lastProfilePrivacyVersionDisplayed;
	unsigned short _numberOfFriends;
	unsigned short _numberOfGames;
	unsigned short _numberOfFriendsInCommon;
	unsigned short _numberOfGamesInCommon;
	unsigned _numberOfAchievements;
	unsigned _numberOfAchievementPoints;
	int _achievementsVisibility;
	int _friendsVisibility;
	int _gamesPlayedVisibility;
	SCD_Union_GK9 _flags;
	NSArray* _monogramComponents;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,retain) NSString * playerID;                                                          //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * teamPlayerID;                                                      //@synthesize teamPlayerID=_teamPlayerID - In the implementation block
@property (nonatomic,retain) NSString * gamePlayerID;                                                      //@synthesize gamePlayerID=_gamePlayerID - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                             //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSNumber * avatarType;                                                        //@synthesize avatarType=_avatarType - In the implementation block
@property (nonatomic,retain) NSArray * monogramComponents;                                                 //@synthesize monogramComponents=_monogramComponents - In the implementation block
@property (nonatomic,retain) NSDictionary * photos;                                                        //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) BOOL isFriend; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,readonly) BOOL isGuestPlayer; 
@property (assign,nonatomic) unsigned short numberOfFriendsInCommon;                                       //@synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGamesInCommon;                                         //@synthesize numberOfGamesInCommon=_numberOfGamesInCommon - In the implementation block
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSNumber * friendLevel;                                                       //@synthesize friendLevel=_friendLevel - In the implementation block
@property (nonatomic,retain) NSNumber * friendBiDirectional;                                               //@synthesize friendBiDirectional=_friendBiDirectional - In the implementation block
@property (nonatomic,retain) NSNumber * friendPlayedWith;                                                  //@synthesize friendPlayedWith=_friendPlayedWith - In the implementation block
@property (nonatomic,retain) NSNumber * friendPlayedNearby;                                                //@synthesize friendPlayedNearby=_friendPlayedNearby - In the implementation block
@property (nonatomic,retain) NSNumber * acceptedGameInviteFromThisFriend;                                  //@synthesize acceptedGameInviteFromThisFriend=_acceptedGameInviteFromThisFriend - In the implementation block
@property (nonatomic,retain) NSNumber * initiatedGameInviteToThisFriend;                                   //@synthesize initiatedGameInviteToThisFriend=_initiatedGameInviteToThisFriend - In the implementation block
@property (nonatomic,retain) NSNumber * automatchedTogether;                                               //@synthesize automatchedTogether=_automatchedTogether - In the implementation block
@property (nonatomic,retain) NSString * compositeName; 
@property (nonatomic,retain) NSString * status; 
@property (nonatomic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,retain) GKGameInternal * lastPlayedGame; 
@property (nonatomic,retain) NSString * guestIdentifier; 
@property (nonatomic,retain) NSString * messagesID;                                                        //@synthesize messagesID=_messagesID - In the implementation block
@property (assign,nonatomic) unsigned short numberOfFriends;                                               //@synthesize numberOfFriends=_numberOfFriends - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGames;                                                 //@synthesize numberOfGames=_numberOfGames - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievements;                                                //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievementPoints;                                           //@synthesize numberOfAchievementPoints=_numberOfAchievementPoints - In the implementation block
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSArray * emailAddresses; 
@property (nonatomic,retain) NSArray * friends; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (assign,getter=isUnderage,nonatomic) BOOL underage; 
@property (assign,getter=isFindable,nonatomic) BOOL findable; 
@property (assign,getter=isDefaultNickname,nonatomic) BOOL defaultNickname; 
@property (assign,getter=isDefaultPrivacyVisibility,nonatomic) BOOL defaultPrivacyVisibility; 
@property (assign,getter=isPhotoPending,nonatomic) BOOL photoPending; 
@property (assign,nonatomic) unsigned short numberOfRequests; 
@property (assign,nonatomic) unsigned short numberOfTurns; 
@property (assign,nonatomic) unsigned short numberOfChallenges; 
@property (nonatomic,retain) NSString * facebookUserID; 
@property (nonatomic,retain) NSNumber * iCloudUserID; 
@property (nonatomic,retain) NSString * lastPersonalizationVersionDisplayed;                               //@synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;                         //@synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed - In the implementation block
@property (nonatomic,retain) NSString * lastProfilePrivacyVersionDisplayed;                                //@synthesize lastProfilePrivacyVersionDisplayed=_lastProfilePrivacyVersionDisplayed - In the implementation block
@property (assign,nonatomic) int achievementsVisibility;                                                   //@synthesize achievementsVisibility=_achievementsVisibility - In the implementation block
@property (assign,nonatomic) int friendsVisibility;                                                        //@synthesize friendsVisibility=_friendsVisibility - In the implementation block
@property (assign,nonatomic) int gamesPlayedVisibility;                                                    //@synthesize gamesPlayedVisibility=_gamesPlayedVisibility - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
+(id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3 ;
+(id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2 ;
+(Class)classForFamiliarity:(int)arg1 ;
-(NSArray *)friends;
-(id)cacheKey;
-(NSString *)playerID;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)accountName;
-(BOOL)isDefaultNickname;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSString *)alias;
-(void)setPhotos:(NSDictionary *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(int)achievementsVisibility;
-(unsigned)flags;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(unsigned)numberOfAchievements;
-(unsigned short)numberOfGames;
-(id)debugDescription;
-(NSArray *)emailAddresses;
-(NSDate *)lastPlayedDate;
-(BOOL)isLocalPlayer;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(BOOL)isAutomatchPlayer;
-(BOOL)isDefaultPrivacyVisibility;
-(BOOL)isUnderage;
-(void)setCompositeName:(NSString *)arg1 ;
-(void)setMessagesID:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(BOOL)isGuestPlayer;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(BOOL)isPurpleBuddyAccount;
-(NSNumber *)friendBiDirectional;
-(NSDictionary *)photos;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)hash;
-(NSString *)compositeName;
-(id)conciseDescription;
-(NSString *)messagesID;
-(void)setAlias:(NSString *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(NSNumber *)avatarType;
-(GKGameInternal *)lastPlayedGame;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)setAvatarType:(NSNumber *)arg1 ;
-(BOOL)isLoaded;
-(unsigned short)numberOfFriends;
-(BOOL)isFriend;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMonogramComponents:(NSArray *)arg1 ;
-(NSString *)status;
-(void)dealloc;
-(NSArray *)monogramComponents;
-(NSNumber *)iCloudUserID;
-(void)setICloudUserID:(NSNumber *)arg1 ;
-(id)serverRepresentation;
-(id)minimalInternal;
-(NSString *)teamPlayerID;
-(NSString *)gamePlayerID;
-(void)setGamePlayerID:(NSString *)arg1 ;
-(void)setTeamPlayerID:(NSString *)arg1 ;
-(void)setDefaultNickname:(BOOL)arg1 ;
-(void)setDefaultPrivacyVisibility:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(unsigned)numberOfAchievementPoints;
-(void)setNumberOfAchievementPoints:(unsigned)arg1 ;
-(void)setNumberOfAchievements:(unsigned)arg1 ;
-(void)setNumberOfFriends:(unsigned short)arg1 ;
-(void)setNumberOfGames:(unsigned short)arg1 ;
-(unsigned short)numberOfTurns;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(unsigned short)numberOfFriendsInCommon;
-(unsigned short)numberOfGamesInCommon;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfChallenges;
-(NSNumber *)friendLevel;
-(NSNumber *)friendPlayedWith;
-(NSNumber *)friendPlayedNearby;
-(NSNumber *)acceptedGameInviteFromThisFriend;
-(NSNumber *)initiatedGameInviteToThisFriend;
-(NSNumber *)automatchedTogether;
-(void)setFriendLevel:(NSNumber *)arg1 ;
-(void)setFriendBiDirectional:(NSNumber *)arg1 ;
-(void)setFriendPlayedWith:(NSNumber *)arg1 ;
-(void)setFriendPlayedNearby:(NSNumber *)arg1 ;
-(void)setAcceptedGameInviteFromThisFriend:(NSNumber *)arg1 ;
-(void)setInitiatedGameInviteToThisFriend:(NSNumber *)arg1 ;
-(void)setAutomatchedTogether:(NSNumber *)arg1 ;
-(int)defaultFamiliarity;
-(BOOL)isUnknownPlayer;
-(BOOL)isAnonymousPlayer;
-(NSString *)lastPersonalizationVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
-(NSString *)lastProfilePrivacyVersionDisplayed;
-(void)setLastProfilePrivacyVersionDisplayed:(NSString *)arg1 ;
-(BOOL)isFindable;
-(BOOL)isPhotoPending;
-(NSString *)facebookUserID;
-(BOOL)_gkIsSameAsPlayer:(id)arg1 ;
-(void)setAchievementsVisibility:(int)arg1 ;
-(int)friendsVisibility;
-(void)setFriendsVisibility:(int)arg1 ;
-(int)gamesPlayedVisibility;
-(void)setGamesPlayedVisibility:(int)arg1 ;
-(void)setLastPlayedGame:(GKGameInternal *)arg1 ;
-(void)setFacebookUserID:(NSString *)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setFindable:(BOOL)arg1 ;
-(void)setPhotoPending:(BOOL)arg1 ;
-(BOOL)allowNearbyMultiplayer;
-(void)setAllowNearbyMultiplayer:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(NSString *)guestIdentifier;
-(void)setNumberOfFriendsInCommon:(unsigned short)arg1 ;
-(void)setNumberOfGamesInCommon:(unsigned short)arg1 ;
@end

