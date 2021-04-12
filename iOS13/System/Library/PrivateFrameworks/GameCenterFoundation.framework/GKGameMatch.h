/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(GKRecentMatchInternal *)internal;
-(void)setInternal:(GKRecentMatchInternal *)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 game:(id)arg2 ;
@end

