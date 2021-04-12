/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDQueryServerDelegate.h>
#import <libobjc.A.dylib/HDTaskServerEndpointDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, HDHealthStoreServer, HDHealthStoreClient, HDProfile, NSString;

@interface HDQueryControlServer : NSObject <HDQueryServerDelegate, HDTaskServerEndpointDelegate> {

	NSMutableDictionary* _queryServersByUUID;
	NSMutableDictionary* _queryServerEndpointsByUUID;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	os_unfair_lock_s _lock;
	HDHealthStoreServer* _server;
	HDHealthStoreClient* _client;
	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDHealthStoreServer * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                     //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasActiveQueries;
-(HDHealthStoreClient *)client;
-(void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startQueryServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)taskServerDidInvalidate:(id)arg1 ;
-(HDHealthStoreServer *)server;
-(HDProfile *)profile;
-(id)createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 error:(id*)arg4 ;
-(id)taskServerWithUUID:(id)arg1 ;
-(void)invalidate;
-(BOOL)_lock_hasActiveQueries;
-(void)taskServerDidFailToInitializeForUUID:(id)arg1 ;
-(void)queryServer:(id)arg1 shouldStartWithCompletion:(/*^block*/id)arg2 ;
-(void)taskServerDidFinishInitialization:(id)arg1 ;
-(void)queryServerDidFinish:(id)arg1 ;
-(id)initWithParentServer:(id)arg1 connectionQueue:(id)arg2 ;
@end

