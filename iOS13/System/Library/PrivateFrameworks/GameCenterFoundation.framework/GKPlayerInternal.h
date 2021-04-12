/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;
	unsigned short _numberOfFriends;
	unsigned short _numberOfGames;
	unsigned short _numberOfFriendsInCommon;
	unsigned short _numberOfGamesInCommon;
	unsigned _numberOfAchievements;
	unsigned _numberOfAchievementPoints;
	SCD_Union_GK9 _flags;
	NSArray* _monogramComponents;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,retain) NSString * playerID;                                               //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * teamPlayerID;                                           //@synthesize teamPlayerID=_teamPlayerID - In the implementation block
@property (nonatomic,retain) NSString * gamePlayerID;                                           //@synthesize gamePlayerID=_gamePlayerID - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                  //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSNumber * avatarType;                                             //@synthesize avatarType=_avatarType - In the implementation block
@property (nonatomic,retain) NSArray * monogramComponents;                                      //@synthesize monogramComponents=_monogramComponents - In the implementation block
@property (nonatomic,retain) NSDictionary * photos;                                             //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) BOOL isFriend; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (nonatomic,readonly) BOOL isGuestPlayer; 
@property (assign,nonatomic) unsigned short numberOfFriendsInCommon;                            //@synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGamesInCommon;                              //@synthesize numberOfGamesInCommon=_numberOfGamesInCommon - In the implementation block
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSNumber * friendLevel;                                            //@synthesize friendLevel=_friendLevel - In the implementation block
@property (nonatomic,retain) NSNumber * friendBiDirectional;                                    //@synthesize friendBiDirectional=_friendBiDirectional - In the implementation block
@property (nonatomic,retain) NSNumber * friendPlayedWith;                                       //@synthesize friendPlayedWith=_friendPlayedWith - In the implementation block
@property (nonatomic,retain) NSNumber * friendPlayedNearby;                                     //@synthesize friendPlayedNearby=_friendPlayedNearby - In the implementation block
@property (nonatomic,retain) NSString * compositeName; 
@property (nonatomic,retain) NSString * status; 
@property (nonatomic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,retain) GKGameInternal * lastPlayedGame; 
@property (nonatomic,retain) NSString * guestIdentifier; 
@property (nonatomic,retain) NSString * messagesID;                                             //@synthesize messagesID=_messagesID - In the implementation block
@property (assign,nonatomic) unsigned short numberOfFriends;                                    //@synthesize numberOfFriends=_numberOfFriends - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGames;                                      //@synthesize numberOfGames=_numberOfGames - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievements;                                     //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievementPoints;                                //@synthesize numberOfAchievementPoints=_numberOfAchievementPoints - In the implementation block
@property (nonatomic,retain) NSString * accountName; 
@property (nonatomic,retain) NSArray * emailAddresses; 
@property (nonatomic,retain) NSArray * friends; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic) BOOL purpleBuddyAccount; 
@property (assign,getter=isUnderage,nonatomic) BOOL underage; 
@property (assign,getter=isFindable,nonatomic) BOOL findable; 
@property (assign,getter=isDefaultNickname,nonatomic) BOOL defaultNickname; 
@property (assign,getter=isPhotoPending,nonatomic) BOOL photoPending; 
@property (assign,nonatomic) unsigned short numberOfRequests; 
@property (assign,nonatomic) unsigned short numberOfTurns; 
@property (assign,nonatomic) unsigned short numberOfChallenges; 
@property (nonatomic,retain) NSString * facebookUserID; 
@property (nonatomic,retain) NSNumber * iCloudUserID; 
@property (nonatomic,retain) NSString * lastPersonalizationVersionDisplayed;                    //@synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;              //@synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
+(id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3 ;
+(id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2 ;
+(Class)classForFamiliarity:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)flags;
-(BOOL)isLoaded;
-(NSString *)status;
-(id)cacheKey;
-(NSArray *)emailAddresses;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)accountName;
-(void)setFlags:(unsigned)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSDictionary *)photos;
-(void)setPhotos:(NSDictionary *)arg1 ;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(id)conciseDescription;
-(void)setAccountName:(NSString *)arg1 ;
-(NSNumber *)avatarType;
-(void)setAvatarType:(NSNumber *)arg1 ;
-(BOOL)isUnderage;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSString *)playerID;
-(NSString *)compositeName;
-(NSArray *)friends;
-(void)setCompositeName:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(NSNumber *)iCloudUserID;
-(void)setICloudUserID:(NSNumber *)arg1 ;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(BOOL)isPurpleBuddyAccount;
-(NSString *)lastPersonalizationVersionDisplayed;
-(BOOL)isDefaultNickname;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
-(void)setMonogramComponents:(NSArray *)arg1 ;
-(BOOL)isLocalPlayer;
-(unsigned short)numberOfFriends;
-(NSString *)messagesID;
-(BOOL)isGuestPlayer;
-(GKGameInternal *)lastPlayedGame;
-(BOOL)isAutomatchPlayer;
-(NSArray *)monogramComponents;
-(void)setMessagesID:(NSString *)arg1 ;
-(void)setNumberOfFriends:(unsigned short)arg1 ;
-(unsigned short)numberOfRequests;
-(id)serverRepresentation;
-(unsigned)numberOfAchievements;
-(id)minimalInternal;
-(NSString *)teamPlayerID;
-(NSString *)gamePlayerID;
-(void)setGamePlayerID:(NSString *)arg1 ;
-(void)setTeamPlayerID:(NSString *)arg1 ;
-(unsigned short)numberOfFriendsInCommon;
-(unsigned short)numberOfGames;
-(unsigned short)numberOfGamesInCommon;
-(unsigned)numberOfAchievementPoints;
-(unsigned short)numberOfChallenges;
-(unsigned short)numberOfTurns;
-(NSNumber *)friendLevel;
-(NSNumber *)friendBiDirectional;
-(NSNumber *)friendPlayedWith;
-(NSNumber *)friendPlayedNearby;
-(void)setFriendLevel:(NSNumber *)arg1 ;
-(void)setFriendBiDirectional:(NSNumber *)arg1 ;
-(void)setFriendPlayedWith:(NSNumber *)arg1 ;
-(void)setFriendPlayedNearby:(NSNumber *)arg1 ;
-(int)defaultFamiliarity;
-(BOOL)isUnknownPlayer;
-(BOOL)isAnonymousPlayer;
-(BOOL)isFriend;
-(BOOL)isFindable;
-(BOOL)isPhotoPending;
-(NSString *)facebookUserID;
-(BOOL)_gkIsSameAsPlayer:(id)arg1 ;
-(void)setNumberOfAchievements:(unsigned)arg1 ;
-(void)setLastPlayedGame:(GKGameInternal *)arg1 ;
-(void)setFacebookUserID:(NSString *)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setDefaultNickname:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(void)setFindable:(BOOL)arg1 ;
-(void)setPhotoPending:(BOOL)arg1 ;
-(BOOL)allowNearbyMultiplayer;
-(void)setAllowNearbyMultiplayer:(BOOL)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(NSString *)guestIdentifier;
-(void)setNumberOfFriendsInCommon:(unsigned short)arg1 ;
-(void)setNumberOfGames:(unsigned short)arg1 ;
-(void)setNumberOfGamesInCommon:(unsigned short)arg1 ;
-(void)setNumberOfAchievementPoints:(unsigned)arg1 ;
@end

