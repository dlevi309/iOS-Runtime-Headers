/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary;

@interface GKLeaderboardSetInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSDictionary* _leaderboardIdentifiers;
	NSDictionary* _icons;

}

@property (nonatomic,retain) NSString * setIdentifier; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                         //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardIdentifiers;              //@synthesize leaderboardIdentifiers=_leaderboardIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                               //@synthesize icons=_icons - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)icons;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSDictionary *)leaderboardIdentifiers;
-(void)setLeaderboardIdentifiers:(NSDictionary *)arg1 ;
-(NSString *)setIdentifier;
-(void)setSetIdentifier:(NSString *)arg1 ;
@end

