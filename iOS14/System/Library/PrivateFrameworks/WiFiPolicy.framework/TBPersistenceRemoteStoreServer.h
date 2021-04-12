/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class NSXPCStoreServer, NSURL, NSDictionary;

@interface TBPersistenceRemoteStoreServer : NSObject {

	NSXPCStoreServer* _xpcStoreServer;
	NSURL* _storeURL;
	NSURL* _modelURL;
	NSDictionary* _serverOptions;

}

@property (nonatomic,retain) NSXPCStoreServer * xpcStoreServer;              //@synthesize xpcStoreServer=_xpcStoreServer - In the implementation block
@property (nonatomic,retain) NSURL * storeURL;                               //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                               //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,retain) NSDictionary * serverOptions;                   //@synthesize serverOptions=_serverOptions - In the implementation block
-(void)startListening;
-(void)setModelURL:(NSURL *)arg1 ;
-(NSXPCStoreServer *)xpcStoreServer;
-(NSURL *)modelURL;
-(NSURL *)storeURL;
-(void)setXpcStoreServer:(NSXPCStoreServer *)arg1 ;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 options:(id)arg3 ;
-(NSDictionary *)serverOptions;
-(void)setServerOptions:(NSDictionary *)arg1 ;
@end

