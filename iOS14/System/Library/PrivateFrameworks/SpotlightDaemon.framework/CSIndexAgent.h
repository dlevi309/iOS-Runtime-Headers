/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol MDIndexer;
@class NSMutableDictionary;

@interface CSIndexAgent : CSXPCConnection {

	id<MDIndexer> _indexer;
	NSMutableDictionary* _indexConnections;

}

@property (nonatomic,retain) NSMutableDictionary * indexConnections;              //@synthesize indexConnections=_indexConnections - In the implementation block
@property (nonatomic,retain) id<MDIndexer> indexer;                               //@synthesize indexer=_indexer - In the implementation block
+(id)indexAgent:(BOOL)arg1 serviceName:(id)arg2 ;
+(id)indexAgent;
+(id)indexDelegateAgent:(id)arg1 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(id<MDIndexer>)indexer;
-(id)indexConnection:(id)arg1 ;
-(NSMutableDictionary *)indexConnections;
-(void)setIndexConnections:(NSMutableDictionary *)arg1 ;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
@end

