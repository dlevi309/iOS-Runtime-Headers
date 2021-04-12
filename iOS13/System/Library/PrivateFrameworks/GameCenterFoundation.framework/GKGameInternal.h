/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKGameDescriptor.h>

@class NSString, NSDictionary, GKStoreItemInternal, GKGameDescriptor;

@interface GKGameInternal : GKGameDescriptor {

	NSString* _name;
	NSDictionary* _icons;
	NSString* _defaultLeaderboardIdentifier;
	GKStoreItemInternal* _storeItem;
	SCD_Union_GK7 _flags;
	unsigned short _numberOfLeaderboards;
	unsigned short _numberOfLeaderboardSets;
	unsigned short _numberOfAchievements;
	unsigned short _maxAchievementPoints;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                                 //@synthesize icons=_icons - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered; 
@property (assign,nonatomic) BOOL supportsLeaderboards; 
@property (assign,nonatomic) BOOL hasAggregateLeaderboard; 
@property (assign,nonatomic) unsigned short numberOfLeaderboards;                  //@synthesize numberOfLeaderboards=_numberOfLeaderboards - In the implementation block
@property (nonatomic,retain) NSString * defaultLeaderboardIdentifier;              //@synthesize defaultLeaderboardIdentifier=_defaultLeaderboardIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsLeaderboardSets; 
@property (assign,nonatomic) unsigned short numberOfLeaderboardSets;               //@synthesize numberOfLeaderboardSets=_numberOfLeaderboardSets - In the implementation block
@property (assign,nonatomic) BOOL supportsAchievements; 
@property (assign,nonatomic) unsigned short numberOfAchievements;                  //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned short maxAchievementPoints;                  //@synthesize maxAchievementPoints=_maxAchievementPoints - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiplayer; 
@property (assign,nonatomic) BOOL supportsTurnBasedMultiplayer; 
@property (nonatomic,readonly) BOOL canBeIndexed; 
@property (assign,getter=isValid,nonatomic) BOOL valid; 
@property (nonatomic,retain) GKStoreItemInternal * storeItem;                      //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,readonly) GKGameDescriptor * gameDescriptor; 
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(BOOL)isValid;
-(void)setName:(NSString *)arg1 ;
-(unsigned)flags;
-(NSDictionary *)icons;
-(BOOL)isPrerendered;
-(void)setPrerendered:(BOOL)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned short)numberOfCategories;
-(void)setIcons:(NSDictionary *)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(id)defaultCategory;
-(GKStoreItemInternal *)storeItem;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(unsigned short)maxAchievementPoints;
-(BOOL)supportsLeaderboards;
-(BOOL)supportsAchievements;
-(GKGameDescriptor *)gameDescriptor;
-(BOOL)supportsLeaderboardSets;
-(id)serverRepresentation;
-(BOOL)supportsMultiplayer;
-(BOOL)hasAggregateLeaderboard;
-(unsigned short)numberOfLeaderboardSets;
-(unsigned short)numberOfAchievements;
-(BOOL)supportsTurnBasedMultiplayer;
-(void)setSupportsLeaderboards:(BOOL)arg1 ;
-(void)setSupportsLeaderboardSets:(BOOL)arg1 ;
-(void)setHasAggregateLeaderboard:(BOOL)arg1 ;
-(void)setSupportsAchievements:(BOOL)arg1 ;
-(void)setSupportsMultiplayer:(BOOL)arg1 ;
-(BOOL)canBeIndexed;
-(void)setSupportsTurnBasedMultiplayer:(BOOL)arg1 ;
-(NSString *)defaultLeaderboardIdentifier;
-(void)setDefaultLeaderboardIdentifier:(NSString *)arg1 ;
-(unsigned short)numberOfLeaderboards;
-(void)setNumberOfLeaderboards:(unsigned short)arg1 ;
-(void)setNumberOfLeaderboardSets:(unsigned short)arg1 ;
-(void)setNumberOfAchievements:(unsigned short)arg1 ;
-(void)setMaxAchievementPoints:(unsigned short)arg1 ;
@end

