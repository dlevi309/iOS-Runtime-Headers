/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class _MRNowPlayingPlayerProtobuf, NSMutableArray, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingClientProtobuf, NSArray;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {

	_MRNowPlayingPlayerProtobuf* _activePlayer;
	NSMutableArray* _playerClients;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;                      //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client; 
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * activePlayerPath; 
@property (nonatomic,readonly) NSArray * playerClients; 
-(id)description;
-(id)debugDescription;
-(_MRNowPlayingClientProtobuf *)client;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(BOOL)updateActivePlayerPath:(id)arg1 ;
-(_MRNowPlayingPlayerPathProtobuf *)activePlayerPath;
-(void)mergeClient:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(NSArray *)playerClients;
-(void)removePlayer:(id)arg1 ;
-(id)nowPlayingPlayerClientForPlayerPath:(id)arg1 ;
@end

