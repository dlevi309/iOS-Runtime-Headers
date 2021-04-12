/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class NSMutableArray, _MRNowPlayingClientProtobuf, NSArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {

	NSMutableArray* _playerClients;
	_MRNowPlayingClientProtobuf* _client;
	NSArray* _nowPlayingClients;

}

@property (nonatomic,readonly) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients;                       //@synthesize nowPlayingClients=_nowPlayingClients - In the implementation block
-(id)debugDescription;
-(_MRNowPlayingClientProtobuf *)client;
-(id)initWithClient:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(NSArray *)nowPlayingClients;
-(id)playerClients;
-(id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(void)removePlayer:(id)arg1 ;
@end

