/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSXPCConnection, NSDictionary;

@interface ICSceneClassificationsHandler : NSObject {

	NSXPCConnection* _xpcConnection;
	NSDictionary* _cachedRequestContextDictionary;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                            //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedRequestContextDictionary;              //@synthesize cachedRequestContextDictionary=_cachedRequestContextDictionary - In the implementation block
+(id)sharedHandler;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)requestContextDictionaryWithOperationId:(BOOL)arg1 ;
-(id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2 ;
-(id)requestContextDictionary;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setupXpcConnection;
-(void)configureXPCConnection;
-(NSDictionary *)cachedRequestContextDictionary;
-(void)setCachedRequestContextDictionary:(NSDictionary *)arg1 ;
@end

