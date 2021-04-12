/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDHealthStoreEndpointInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class NSObject, HDDaemon, HDXPCClient, HDHealthStoreServer, NSString;

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	HDDaemon* _daemon;
	HDXPCClient* _client;
	HDHealthStoreServer* _server;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;                  //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) HDXPCClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) HDHealthStoreServer * server;              //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2 ;
+(BOOL)_isDeviceSupportedWithBehavior:(id)arg1 error:(id*)arg2 ;
+(BOOL)_isClientEntitled:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(HDXPCClient *)client;
-(id)exportedInterface;
-(HDHealthStoreServer *)server;
-(HDDaemon *)daemon;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)connectionConfigured;
-(void)remote_serverForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithClient:(id)arg1 daemon:(id)arg2 ;
-(BOOL)_validateSourceBundleIdentifier:(id)arg1 error:(id*)arg2 ;
@end

