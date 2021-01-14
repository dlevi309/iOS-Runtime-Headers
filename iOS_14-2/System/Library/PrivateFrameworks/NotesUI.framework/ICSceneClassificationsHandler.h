/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)requestContextDictionaryWithOperationId:(BOOL)arg1 ;
-(id)requestContextDictionary;
-(void)setupXpcConnection;
-(void)configureXPCConnection;
-(NSDictionary *)cachedRequestContextDictionary;
-(void)setCachedRequestContextDictionary:(NSDictionary *)arg1 ;
@end

