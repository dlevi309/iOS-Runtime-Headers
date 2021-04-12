/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
*/


@protocol SecureStorageService;
@class LAContext, NSXPCConnection;

@interface LAStorage : NSObject {

	unsigned _instanceId;
	long long _domain;
	LAContext* _authenticationContext;
	NSXPCConnection* _connection;
	id<SecureStorageService> _remoteObjectProxy;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<SecureStorageService> remoteObjectProxy;              //@synthesize remoteObjectProxy=_remoteObjectProxy - In the implementation block
@property (nonatomic,readonly) unsigned instanceId;                                     //@synthesize instanceId=_instanceId - In the implementation block
@property (nonatomic,readonly) long long domain;                                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) LAContext * authenticationContext;                       //@synthesize authenticationContext=_authenticationContext - In the implementation block
+(unsigned)newInstanceId;
+(id)objectDescription:(id)arg1 ;
-(unsigned)instanceId;
-(id<SecureStorageService>)remoteObjectProxy;
-(long long)domain;
-(id)description;
-(void)objectForKey:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSXPCConnection *)connection;
-(LAContext *)authenticationContext;
-(BOOL)boolForKey:(long long)arg1 error:(id*)arg2 ;
-(void)_resetConnection;
-(void)dealloc;
-(id)initWithDomain:(long long)arg1 authenticationContext:(id)arg2 ;
-(long long)_authenticationPolicyForKey:(long long)arg1 selector:(SEL)arg2 ;
-(void)_bootstrapServiceWithAuthenticationPolicy:(long long)arg1 proxyBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeObjectForKey:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)boolForKey:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_callProxyBlock:(/*^block*/id)arg1 authenticationPolicy:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_connectToEndpoint:(id)arg1 ;
-(void)_bootstrapServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setBool:(BOOL)arg1 forKey:(long long)arg2 error:(id*)arg3 ;
@end

