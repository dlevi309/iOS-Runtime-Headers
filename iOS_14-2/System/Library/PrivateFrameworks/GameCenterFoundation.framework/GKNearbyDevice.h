/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(GKPlayer *)player;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(NSString *)deviceID;
-(void)setDiscovery:(GKDiscovery *)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(GKDiscovery *)discovery;
-(void)sendDictionary:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

