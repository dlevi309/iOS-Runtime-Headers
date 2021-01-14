/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDate, NSDictionary, NSArray, GKScoreInternal, GKPlayerInternal;

@interface GKLeaderboardInternal : GKInternalRepresentation {

	unsigned short _friendRank;
	unsigned short _friendRankCount;
	unsigned _overallRank;
	unsigned _overallRankCount;
	unsigned _maxRank;
	NSString* _recordID;
	NSString* _identifier;
	NSString* _baseLeaderboardID;
	NSString* _groupIdentifier;
	NSString* _leaderboardSetIdentifier;
	NSString* _title;
	NSDate* _lastSubmittedDate;
	NSDictionary* _icons;
	NSArray* _scores;
	GKScoreInternal* _playerScore;
	long long _type;
	NSDate* _startDate;
	NSDate* _nextStartDate;
	double _duration;
	GKPlayerInternal* _creator;
	NSString* _context;

}

@property (nonatomic,retain) NSString * localizedTitle; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,readonly) unsigned long long maxRange; 
@property (nonatomic,retain) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * baseLeaderboardID;                     //@synthesize baseLeaderboardID=_baseLeaderboardID - In the implementation block
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
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * nextStartDate;                           //@synthesize nextStartDate=_nextStartDate - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * creator;                       //@synthesize creator=_creator - In the implementation block
@property (nonatomic,retain) NSString * context;                               //@synthesize context=_context - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setCategory:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSString *)groupIdentifier;
-(void)setRecordID:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDictionary *)icons;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSDate *)startDate;
-(NSArray *)scores;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)category;
-(void)setType:(long long)arg1 ;
-(NSString *)context;
-(GKPlayerInternal *)creator;
-(NSDate *)nextStartDate;
-(NSString *)baseLeaderboardID;
-(unsigned long long)maxRange;
-(unsigned)maxRank;
-(long long)type;
-(unsigned long long)hash;
-(void)setCreator:(GKPlayerInternal *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setScores:(NSArray *)arg1 ;
-(NSString *)identifier;
-(double)duration;
-(NSString *)recordID;
-(unsigned)overallRankCount;
-(unsigned)overallRank;
-(unsigned short)friendRank;
-(unsigned short)friendRankCount;
-(GKScoreInternal *)playerScore;
-(void)setPlayerScore:(GKScoreInternal *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(void)setFriendRank:(unsigned short)arg1 ;
-(void)setMaxRank:(unsigned)arg1 ;
-(void)setBaseLeaderboardID:(NSString *)arg1 ;
-(NSString *)leaderboardSetIdentifier;
-(void)setLeaderboardSetIdentifier:(NSString *)arg1 ;
-(NSDate *)lastSubmittedDate;
-(void)setLastSubmittedDate:(NSDate *)arg1 ;
-(void)setOverallRank:(unsigned)arg1 ;
-(void)setOverallRankCount:(unsigned)arg1 ;
-(void)setFriendRankCount:(unsigned short)arg1 ;
-(void)setNextStartDate:(NSDate *)arg1 ;
@end

