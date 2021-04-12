/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class NSMutableArray, MRClient, NSArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {

	NSMutableArray* _playerClients;
	MRClient* _client;
	NSArray* _nowPlayingClients;

}

@property (nonatomic,readonly) MRClient * client;                        //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients;              //@synthesize nowPlayingClients=_nowPlayingClients - In the implementation block
-(void)removePlayer:(id)arg1 ;
-(NSArray *)nowPlayingClients;
-(void)restoreNowPlayingClientState;
-(MRClient *)client;
-(id)debugDescription;
-(id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
@end

