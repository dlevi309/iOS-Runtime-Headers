/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)searchAgent:(BOOL)arg1 serviceName:(id)arg2 ;
+(id)searchAgent;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(void)cancelQuery:(id)arg1 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(void)cancelSimpleQuery:(id)arg1 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(id<MDIndexer>)indexer;
-(void)preheat:(id)arg1 ;
-(NSMutableDictionary *)searchConnections;
-(void)setSearchConnections:(NSMutableDictionary *)arg1 ;
-(void)startSimpleQuery:(id)arg1 ;
-(id)searchConnection:(id)arg1 ;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
-(void)handleEngagement:(id)arg1 forConnection:(id)arg2 ;
-(void)startQuery:(id)arg1 ;
@end

