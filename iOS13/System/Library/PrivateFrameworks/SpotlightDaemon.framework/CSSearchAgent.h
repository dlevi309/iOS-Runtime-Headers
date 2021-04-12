/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol MDIndexer;
@class NSMutableDictionary;

@interface CSSearchAgent : CSXPCConnection {

	id<MDIndexer> _indexer;
	NSMutableDictionary* _searchConnections;

}

@property (nonatomic,retain) NSMutableDictionary * searchConnections;              //@synthesize searchConnections=_searchConnections - In the implementation block
@property (nonatomic,retain) id<MDIndexer> indexer;                                //@synthesize indexer=_indexer - In the implementation block
+(id)searchAgent:(BOOL)arg1 ;
-(id<MDIndexer>)indexer;
-(void)startQuery:(id)arg1 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(void)cancelQuery:(id)arg1 ;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
-(void)setSearchConnections:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)searchConnections;
-(id)searchConnection:(id)arg1 ;
-(void)startSimpleQuery:(id)arg1 ;
-(void)cancelSimpleQuery:(id)arg1 ;
-(void)handleEngagement:(id)arg1 forConnection:(id)arg2 ;
@end

