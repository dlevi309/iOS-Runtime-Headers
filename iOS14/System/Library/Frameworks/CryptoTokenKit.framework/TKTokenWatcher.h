/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)insertedToken:(id)arg1 ;
-(void)removedToken:(id)arg1 ;
-(void)startWatching;
-(void)setInsertionHandler:(/*^block*/id)arg1 ;
-(TKClientToken *)client;
-(id)init;
-(id)initWithEndpoint:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithInsertionHandler:(/*^block*/id)arg1 ;
-(void)addRemovalHandler:(/*^block*/id)arg1 forTokenID:(id)arg2 ;
-(id)getReaderAndDriverNameFor:(id)arg1 ;
-(NSArray *)tokenIDs;
-(id)initWithClient:(id)arg1 ;
-(void)dealloc;
@end

