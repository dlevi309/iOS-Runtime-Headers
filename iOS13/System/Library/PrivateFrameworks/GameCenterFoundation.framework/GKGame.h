/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKGameInternal, NSDictionary, GKGameDescriptor, NSNumber, NSString, GKStoreItemInternal;

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {

	GKGameInternal* _internal;
	long long _environment;

}

@property (retain) GKGameInternal * internal;                                        //@synthesize internal=_internal - In the implementation block
@property (assign) long long environment;                                            //@synthesize environment=_environment - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered; 
@property (nonatomic,readonly) NSDictionary * gameDescriptorDictionary; 
@property (nonatomic,readonly) GKGameDescriptor * gameDescriptor; 
@property (nonatomic,readonly) NSNumber * adamID; 
@property (nonatomic,readonly) NSNumber * externalVersion; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * shortBundleVersion; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) long long platform; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultCategory; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem; 
@property (nonatomic,readonly) GKGameInfo gameInfo; 
@property (nonatomic,readonly) BOOL supportsMultiplayer; 
@property (nonatomic,readonly) BOOL supportsTurnBasedMultiplayer; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installedGame; 
+(void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(CGSize)serverImageSizeForIconStyle:(long long)arg1 ;
+(void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(void)launchAppStoreWithGameCenterGames;
+(void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)currentGame;
+(BOOL)isGameCenter;
+(BOOL)isPreferences;
+(id)currentGameIncludingGameCenter:(BOOL)arg1 ;
+(void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2 ;
+(void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadTopGamesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)updateGames:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2 ;
-(long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2 ;
-(id)activityViewControllerSubject:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
-(id)activityViewControllerOperation:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)loadIconForStyle:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_gkSetSharingInfo:(id)arg1 ;
-(id)fetchSharingInfo;
-(id)_gkSharingInfo;
-(id)imageSourceForiOSIconStyle:(long long)arg1 ;
-(id)macBrushForIconStyle:(long long)arg1 ;
-(id)_imageURLForIconStyle:(long long)arg1 ;
-(id)imageSourceForIconStyle:(long long)arg1 ;
-(id)_imageSourceForIconSize:(CGSize)arg1 ;
-(id)iconForStyle:(long long)arg1 ;
-(id)cachedIconForStyle:(long long)arg1 ;
-(id)URLStringForImageWithShineIfNeeded;
-(id)loadIconForSize:(CGSize)arg1 scale:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)logoImageWithMaximumSize:(CGSize)arg1 ;
-(void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)launchAppOrPresentStoreSheetFromViewController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
-(BOOL)isInstalled;
-(NSString *)cacheKey;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKGameInternal *)internal;
-(void)setInternal:(GKGameInternal *)arg1 ;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getFriendPlayersForAchievement:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isGameCenter;
-(GKGameDescriptor *)gameDescriptor;
-(NSDictionary *)gameDescriptorDictionary;
-(GKGameInfo)gameInfo;
-(BOOL)isStoreItemUnexpired;
-(void)loadGameRatingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)submitRating:(float)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)getFriendPlayersForLeaderboard:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

