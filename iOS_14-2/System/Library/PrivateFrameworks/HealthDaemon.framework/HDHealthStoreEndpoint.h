/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDHealthStoreEndpointInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class NSObject, HDDaemon, HDXPCClient, HDHealthStoreServer, HKProfileIdentifier, NSString;

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	HDDaemon* _daemon;
	HDXPCClient* _client;
	HDHealthStoreServer* _server;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;                             //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) HDXPCClient * client;                                 //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) HDHealthStoreServer * server;                         //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) HKProfileIdentifier * profileIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isDeviceSupportedWithBehavior:(id)arg1 error:(id*)arg2 ;
+(id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2 ;
+(BOOL)_isClientEntitled:(id)arg1 error:(id*)arg2 ;
-(HKProfileIdentifier *)profileIdentifier;
-(void)connectionInvalidated;
-(void)connectionConfigured;
-(BOOL)_validateAccessToProfile:(id)arg1 byClient:(id)arg2 ;
-(HDDaemon *)daemon;
-(id)initWithClient:(id)arg1 daemon:(id)arg2 ;
-(HDXPCClient *)client;
-(void)remote_serverForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(HDHealthStoreServer *)server;
-(void)invalidate;
-(BOOL)_validateSourceBundleIdentifier:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
@end

