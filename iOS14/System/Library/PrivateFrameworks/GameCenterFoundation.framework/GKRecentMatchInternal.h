/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, GKGameRecordInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	GKGameRecordInternal* _game;
	NSDate* _date;

}

@property (nonatomic,retain) GKPlayerInternal * player;                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGameRecordInternal * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(GKGameRecordInternal *)game;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(void)setGame:(GKGameRecordInternal *)arg1 ;
-(NSDate *)date;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

