/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKPlayer, NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject {

	BOOL _counted;
	BOOL _okToSend;
	BOOL _relayInitiated;
	BOOL _hasInitRelayInfo;
	BOOL _hasUpdateRelayInfo;
	unsigned _sequenceNumber;
	GKPlayer* _player;
	GKPlayer* _hostPlayer;
	long long _playerState;
	long long _deferedPlayerState;
	NSMutableArray* _events;
	NSMutableDictionary* _connectionInfo;

}

@property (nonatomic,retain) NSMutableArray * events;                           //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                 //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKPlayer * hostPlayer;                             //@synthesize hostPlayer=_hostPlayer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (assign,nonatomic) long long playerState;                             //@synthesize playerState=_playerState - In the implementation block
@property (assign,nonatomic) long long deferedPlayerState;                      //@synthesize deferedPlayerState=_deferedPlayerState - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                           //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL counted;                                      //@synthesize counted=_counted - In the implementation block
@property (assign,nonatomic) BOOL okToSend;                                     //@synthesize okToSend=_okToSend - In the implementation block
@property (assign,nonatomic) BOOL relayInitiated;                               //@synthesize relayInitiated=_relayInitiated - In the implementation block
@property (assign,nonatomic) BOOL hasInitRelayInfo;                             //@synthesize hasInitRelayInfo=_hasInitRelayInfo - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateRelayInfo;                           //@synthesize hasUpdateRelayInfo=_hasUpdateRelayInfo - In the implementation block
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(id)init;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(unsigned)sequenceNumber;
-(BOOL)counted;
-(void)setConnectionInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)events;
-(NSMutableDictionary *)connectionInfo;
-(void)setPlayerState:(long long)arg1 ;
-(BOOL)okToSend;
-(long long)playerState;
-(GKPlayer *)hostPlayer;
-(void)setHostPlayer:(GKPlayer *)arg1 ;
-(void)setCounted:(BOOL)arg1 ;
-(long long)deferedPlayerState;
-(void)setDeferedPlayerState:(long long)arg1 ;
-(void)setOkToSend:(BOOL)arg1 ;
-(BOOL)relayInitiated;
-(void)setRelayInitiated:(BOOL)arg1 ;
-(BOOL)hasInitRelayInfo;
-(void)setHasInitRelayInfo:(BOOL)arg1 ;
-(BOOL)hasUpdateRelayInfo;
-(void)setHasUpdateRelayInfo:(BOOL)arg1 ;
@end

