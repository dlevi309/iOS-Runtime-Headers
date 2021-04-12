/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class MROrigin, MRClient, MRPlayer, _MRNowPlayingPlayerPathProtobuf, NSData;

@interface MRPlayerPath : NSObject {

	BOOL _systemMediaApplication;
	MROrigin* _origin;
	MRClient* _client;
	MRPlayer* _player;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * protobuf; 
@property (nonatomic,retain) MROrigin * origin;                                                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) MRClient * client;                                                          //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) MRPlayer * player;                                                          //@synthesize player=_player - In the implementation block
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (getter=isResolved,nonatomic,readonly) BOOL resolved; 
@property (getter=isSystemMediaApplication,nonatomic,readonly) BOOL systemMediaApplication;              //@synthesize systemMediaApplication=_systemMediaApplication - In the implementation block
+(id)localPlayerPath;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(MRClient *)client;
-(void)setClient:(MRClient *)arg1 ;
-(BOOL)isResolved;
-(MROrigin *)origin;
-(void)setOrigin:(MROrigin *)arg1 ;
-(BOOL)isLocal;
-(_MRNowPlayingPlayerPathProtobuf *)protobuf;
-(MRPlayer *)player;
-(void)setPlayer:(MRPlayer *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithOrigin:(id)arg1 client:(id)arg2 player:(id)arg3 ;
-(BOOL)isSystemMediaApplication;
@end

