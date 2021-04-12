/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSXPCStoreServer, NSURL, NSDictionary;

@interface RTPersistenceRemoteStoreServer : NSObject {

	NSXPCStoreServer* _xpcStoreServer;
	NSURL* _storeURL;
	NSURL* _modelURL;
	NSDictionary* _serverOptions;

}

@property (retain) NSXPCStoreServer * xpcStoreServer;              //@synthesize xpcStoreServer=_xpcStoreServer - In the implementation block
@property (retain) NSURL * storeURL;                               //@synthesize storeURL=_storeURL - In the implementation block
@property (retain) NSURL * modelURL;                               //@synthesize modelURL=_modelURL - In the implementation block
@property (retain) NSDictionary * serverOptions;                   //@synthesize serverOptions=_serverOptions - In the implementation block
-(id)init;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(void)startListening;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 options:(id)arg3 ;
-(NSDictionary *)serverOptions;
-(void)setXpcStoreServer:(NSXPCStoreServer *)arg1 ;
-(NSXPCStoreServer *)xpcStoreServer;
-(void)setServerOptions:(NSDictionary *)arg1 ;
@end

