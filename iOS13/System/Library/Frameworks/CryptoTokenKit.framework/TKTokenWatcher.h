/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcherHost.h>

@class NSXPCConnection, NSMutableDictionary, TKClientToken, NSXPCListenerEndpoint, NSArray;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost> {

	int _notifyToken;
	NSXPCConnection* _connection;
	NSMutableDictionary* _tokenInfos;
	NSMutableDictionary* _removalHandlers;
	/*^block*/id _insertionHandler;
	TKClientToken* _client;

}

@property (nonatomic,readonly) TKClientToken * client;              //@synthesize client=_client - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) NSArray * tokenIDs; 
-(id)init;
-(void)dealloc;
-(NSXPCListenerEndpoint *)endpoint;
-(TKClientToken *)client;
-(id)initWithEndpoint:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)startWatching;
-(NSArray *)tokenIDs;
-(void)insertedToken:(id)arg1 ;
-(void)removedToken:(id)arg1 ;
-(void)setInsertionHandler:(/*^block*/id)arg1 ;
-(id)initWithInsertionHandler:(/*^block*/id)arg1 ;
-(void)addRemovalHandler:(/*^block*/id)arg1 forTokenID:(id)arg2 ;
-(id)getReaderAndDriverNameFor:(id)arg1 ;
@end

