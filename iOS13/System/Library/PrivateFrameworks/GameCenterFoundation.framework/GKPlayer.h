/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/GKBasePlayer.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKPlayerInternal, NSAttributedString, NSArray, CNContact, NSString, NSNumber, NSDate, GKGame;

@interface GKPlayer : GKBasePlayer <NSCoding, NSSecureCoding> {

	GKPlayerInternal* _internal;
	NSAttributedString* _whenString;
	NSArray* _friends;

}

@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSString * reason; 
@property (nonatomic,retain) NSString * reason2; 
@property (assign,nonatomic) unsigned rid; 
@property (assign,nonatomic) int source; 
@property (readonly) NSString * referenceKey; 
@property (nonatomic,retain) NSArray * friends;                               //@synthesize friends=_friends - In the implementation block
@property (assign,nonatomic) BOOL isFriend; 
@property (nonatomic,retain) NSString * playerID; 
@property (retain) GKPlayerInternal * internal;                               //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * alias; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSNumber * friendLevel; 
@property (nonatomic,readonly) NSNumber * friendBiDirectional; 
@property (nonatomic,readonly) NSNumber * friendPlayedWith; 
@property (nonatomic,readonly) NSNumber * friendPlayedNearby; 
@property (nonatomic,readonly) long long avatarType; 
@property (nonatomic,retain) NSArray * monogramComponents; 
@property (nonatomic,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) GKGame * lastPlayedGame; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) BOOL isFamiliarFriend; 
@property (assign,nonatomic) unsigned long long numberOfFriends; 
@property (nonatomic,readonly) SCD_Struct_GK5 stats; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,retain) NSAttributedString * whenString;                 //@synthesize whenString=_whenString - In the implementation block
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) BOOL isAnonymousPlayer; 
@property (nonatomic,readonly) BOOL isUnknownPlayer; 
@property (nonatomic,readonly) BOOL isAutomatchPlayer; 
@property (nonatomic,retain,readonly) NSString * gamePlayerID; 
@property (nonatomic,retain,readonly) NSString * teamPlayerID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * guestIdentifier; 
+(long long)sizeForPhotoSize:(long long)arg1 ;
+(id)monogramQueue;
+(void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)automatchPlayer;
+(id)canonicalizedPlayerForInternal:(id)arg1 ;
+(void)loadPlayersForIdentifiersPrivate:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)cacheKeyForPlayerID:(id)arg1 ;
+(void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)anonymousPlayer;
+(id)unknownPlayer;
+(id)anonymousGuestPlayerWithIdentifier:(id)arg1 ;
+(void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)playerFromPlayerID:(id)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)avatarImageRenderer;
-(void)clearInMemoryCachedAvatars;
-(void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)displayNameComponentsWithHandler:(/*^block*/id)arg1 ;
-(id)renderingScopeForPhotoSize:(long long)arg1 ;
-(void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stringForMonogramWithHandler:(/*^block*/id)arg1 ;
-(void)_playerAvatarWithSize:(long long)arg1 useUIImage:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)photoURLForSize:(long long)arg1 ;
-(void)monogramImageWithPhotoSize:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mutableContactFromDisplayNameComponentsWithHandler:(/*^block*/id)arg1 ;
-(id)placeholderImageWithPhotoSize:(long long)arg1 ;
-(void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)displayName;
-(NSString *)cacheKey;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKPlayerInternal *)internal;
-(void)setInternal:(GKPlayerInternal *)arg1 ;
-(NSString *)referenceKey;
-(id)email;
-(BOOL)hasPhoto;
-(NSString *)alias;
-(void)_postChangeNotification;
-(id)emails;
-(long long)avatarType;
-(NSString *)playerID;
-(id)sortName;
-(void)postChangeNotification;
-(NSArray *)friends;
-(SCD_Struct_GK5)stats;
-(void)setFriends:(NSArray *)arg1 ;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)loadProfileWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isFamiliarFriend;
-(GKGame *)lastPlayedGame;
-(NSString *)teamPlayerID;
-(BOOL)scopedIDsArePersistent;
-(NSString *)gamePlayerID;
-(NSNumber *)friendLevel;
-(NSNumber *)friendBiDirectional;
-(NSNumber *)friendPlayedWith;
-(NSNumber *)friendPlayedNearby;
-(void)setFriendLevel:(NSNumber *)arg1 ;
-(void)setFriendBiDirectional:(NSNumber *)arg1 ;
-(void)setFriendPlayedWith:(NSNumber *)arg1 ;
-(void)setFriendPlayedNearby:(NSNumber *)arg1 ;
-(void)loadCommonFriends:(BOOL)arg1 asPlayersWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadFriendsAsPlayersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadRecentMatchesForGame:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)loadGamesPlayed:(/*^block*/id)arg1 ;
-(void)loadGamesPlayedDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)identifierForIDS;
-(BOOL)isFriendablePlayer;
-(NSAttributedString *)whenString;
-(void)setWhenString:(NSAttributedString *)arg1 ;
-(id)minimalPlayer;
@end

