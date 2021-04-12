/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(NSDictionary *)icons;
-(void)setIcons:(NSDictionary *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)leaderboardIdentifiers;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLeaderboardIdentifiers:(NSDictionary *)arg1 ;
-(NSString *)setIdentifier;
-(void)setSetIdentifier:(NSString *)arg1 ;
@end

