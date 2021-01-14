/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class MRPlayer, NSMutableArray, MRPlayerPath, MRClient, NSArray;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {

	MRPlayer* _activePlayer;
	NSMutableArray* _playerClients;
	BOOL _isForeground;
	BOOL _useMediaRemoteActivePlayerHeuristic;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,retain) MRPlayerPath * playerPath;                             //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) MRClient * client; 
@property (nonatomic,readonly) MRPlayerPath * activePlayerPath; 
@property (nonatomic,readonly) NSArray * playerClients; 
@property (assign,nonatomic) BOOL useMediaRemoteActivePlayerHeuristic;              //@synthesize useMediaRemoteActivePlayerHeuristic=_useMediaRemoteActivePlayerHeuristic - In the implementation block
-(void)removePlayer:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(MRPlayerPath *)activePlayerPath;
-(void)applicationDidEnterBackground;
-(void)restoreNowPlayingClientState;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)mergeClient:(id)arg1 ;
-(void)requestActiveForPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MRClient *)client;
-(void)setClient:(MRClient *)arg1 ;
-(BOOL)useMediaRemoteActivePlayerHeuristic;
-(id)debugDescription;
-(id)nowPlayingPlayerClientForPlayerPath:(id)arg1 ;
-(id)description;
-(void)setPlayerPath:(MRPlayerPath *)arg1 ;
-(MRPlayerPath *)playerPath;
-(void)setUseMediaRemoteActivePlayerHeuristic:(BOOL)arg1 ;
-(void)setActivePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateActivePlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)playerClients;
-(void)dealloc;
-(void)reevaluateActivePlayerWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

