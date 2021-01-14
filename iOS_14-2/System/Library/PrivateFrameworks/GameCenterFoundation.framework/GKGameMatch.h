/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKRecentMatchInternal, GKGame, GKPlayer, NSDate;

@interface GKGameMatch : NSObject {

	GKRecentMatchInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (retain) GKRecentMatchInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                       //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date; 
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)setInternal:(GKRecentMatchInternal *)arg1 ;
-(GKPlayer *)player;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKGame *)game;
-(id)init;
-(GKRecentMatchInternal *)internal;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setGame:(GKGame *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithInternalRepresentation:(id)arg1 game:(id)arg2 ;
@end

