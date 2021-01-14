/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSString, NSDate;

@interface GKScoreInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	NSString* _leaderboardIdentifier;
	NSString* _groupLeaderboardIdentifier;
	NSString* _formattedValue;
	NSDate* _date;
	long long _value;
	unsigned long long _context;
	unsigned _rank;
	BOOL _valueSet;

}

@property (nonatomic,readonly) NSString * playerID; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * groupCategory; 
@property (nonatomic,retain) GKPlayerInternal * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * leaderboardIdentifier;                   //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (nonatomic,retain) NSString * groupLeaderboardIdentifier;              //@synthesize groupLeaderboardIdentifier=_groupLeaderboardIdentifier - In the implementation block
@property (nonatomic,retain) NSString * formattedValue;                          //@synthesize formattedValue=_formattedValue - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long context;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned rank;                                      //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL valueSet;                                      //@synthesize valueSet=_valueSet - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(GKPlayerInternal *)player;
-(void)setRank:(unsigned)arg1 ;
-(NSString *)playerID;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)context;
-(void)setValue:(long long)arg1 ;
-(NSString *)leaderboardIdentifier;
-(unsigned long long)hash;
-(unsigned)rank;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(BOOL)valueSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)formattedValue;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(unsigned long long)arg1 ;
-(id)serverRepresentation;
-(NSString *)groupLeaderboardIdentifier;
-(void)setGroupLeaderboardIdentifier:(NSString *)arg1 ;
-(void)setFormattedValue:(NSString *)arg1 ;
-(void)setGroupCategory:(NSString *)arg1 ;
-(void)setValueSet:(BOOL)arg1 ;
-(NSString *)groupCategory;
@end

