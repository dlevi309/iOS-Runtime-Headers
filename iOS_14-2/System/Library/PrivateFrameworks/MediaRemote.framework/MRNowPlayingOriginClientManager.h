/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@class NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {

	NSMutableDictionary* _originClients;
	NSMutableDictionary* _originClientRequests;

}
+(id)sharedManager;
-(void)removePlayer:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(id)originClientRequestsForPlayerPath:(id)arg1 ;
-(void)removeOrigin:(id)arg1 ;
-(id)init;
-(id)playerClientForPlayerPath:(id)arg1 ;
-(id)debugDescription;
-(void)removeClient:(id)arg1 ;
-(id)existingPlayerClientRequestsForPlayerPath:(id)arg1 ;
-(id)clientForPlayerPath:(id)arg1 ;
-(id)clientRequestsForPlayerPath:(id)arg1 ;
-(id)localOriginClient;
-(id)originClientForPlayerPath:(id)arg1 ;
-(id)existingOriginClientRequestsForPlayerPath:(id)arg1 ;
-(void)removeOriginRequests:(id)arg1 ;
-(id)originClientForOrigin:(id)arg1 ;
-(id)playerClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingClientRequestsForPlayerPath:(id)arg1 ;
@end

