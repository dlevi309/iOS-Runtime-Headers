/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDQueryServerDelegate.h>
#import <libobjc.A.dylib/HDTaskServerDelegate.h>
#import <libobjc.A.dylib/HDQueryControlServerInterface.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface HDQueryControlServer : HDSubserver <HDQueryServerDelegate, HDTaskServerDelegate, HDQueryControlServerInterface> {

	NSMutableDictionary* _queryServersByUUID;
	NSMutableDictionary* _queryServerEndpointsByUUID;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)remote_createQueryServerEndpointForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2 ;
-(void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2 ;
-(void)removeTaskServerObserver:(id)arg1 ;
-(BOOL)_lock_hasActiveQueries;
-(void)_startQueryServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)taskServerDidFinishInitialization:(id)arg1 ;
-(void)taskServerDidFailToInitializeForUUID:(id)arg1 ;
-(void)taskServerDidInvalidate:(id)arg1 ;
-(id)taskServerWithUUID:(id)arg1 ;
-(void)queryServer:(id)arg1 shouldStartWithCompletion:(/*^block*/id)arg2 ;
-(void)queryServerDidFinish:(id)arg1 ;
-(id)initWithParentServer:(id)arg1 connectionQueue:(id)arg2 ;
-(BOOL)_hasActiveQueries;
@end

