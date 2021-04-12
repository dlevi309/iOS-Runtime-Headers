/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class NSString, GKDiscovery, GKPlayer;

@interface GKNearbyDevice : NSObject {

	NSString* _deviceID;
	GKDiscovery* _discovery;
	GKPlayer* _player;
	long long _state;

}

@property (nonatomic,retain) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) long long state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GKDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                    //@synthesize player=_player - In the implementation block
+(id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(GKDiscovery *)discovery;
-(void)setDiscovery:(GKDiscovery *)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(void)sendDictionary:(id)arg1 ;
@end

