/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDate, NSDictionary, NSArray, GKScoreInternal;

@interface GKLeaderboardInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _leaderboardSetIdentifier;
	NSDate* _lastSubmittedDate;
	NSDictionary* _icons;
	unsigned _overallRank;
	unsigned _overallRankCount;
	unsigned short _friendRank;
	unsigned short _friendRankCount;
	unsigned _maxRank;
	NSArray* _scores;
	GKScoreInternal* _playerScore;

}

@property (nonatomic,retain) NSString * localizedTitle; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,readonly) unsigned long long maxRange; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                       //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * leaderboardSetIdentifier;              //@synthesize leaderboardSetIdentifier=_leaderboardSetIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * lastSubmittedDate;                       //@synthesize lastSubmittedDate=_lastSubmittedDate - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                             //@synthesize icons=_icons - In the implementation block
@property (assign,nonatomic) unsigned overallRank;                             //@synthesize overallRank=_overallRank - In the implementation block
@property (assign,nonatomic) unsigned overallRankCount;                        //@synthesize overallRankCount=_overallRankCount - In the implementation block
@property (assign,nonatomic) unsigned short friendRank;                        //@synthesize friendRank=_friendRank - In the implementation block
@property (assign,nonatomic) unsigned short friendRankCount;                   //@synthesize friendRankCount=_friendRankCount - In the implementation block
@property (assign,nonatomic) unsigned maxRank;                                 //@synthesize maxRank=_maxRank - In the implementation block
@property (nonatomic,retain) NSArray * scores;                                 //@synthesize scores=_scores - In the implementation block
@property (nonatomic,retain) GKScoreInternal * playerScore;                    //@synthesize playerScore=_playerScore - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)icons;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSArray *)scores;
-(void)setScores:(NSArray *)arg1 ;
-(unsigned long long)maxRange;
-(unsigned short)friendRank;
-(unsigned)overallRankCount;
-(unsigned)overallRank;
-(unsigned short)friendRankCount;
-(GKScoreInternal *)playerScore;
-(void)setPlayerScore:(GKScoreInternal *)arg1 ;
-(void)setFriendRank:(unsigned short)arg1 ;
-(unsigned)maxRank;
-(void)setMaxRank:(unsigned)arg1 ;
-(NSString *)leaderboardSetIdentifier;
-(void)setLeaderboardSetIdentifier:(NSString *)arg1 ;
-(NSDate *)lastSubmittedDate;
-(void)setLastSubmittedDate:(NSDate *)arg1 ;
-(void)setOverallRank:(unsigned)arg1 ;
-(void)setOverallRankCount:(unsigned)arg1 ;
-(void)setFriendRankCount:(unsigned short)arg1 ;
@end

