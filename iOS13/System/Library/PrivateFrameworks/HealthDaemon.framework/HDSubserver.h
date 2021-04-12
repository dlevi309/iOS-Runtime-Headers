/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDDaemon, HDHealthStoreServer, HDHealthStoreClient, HDProfile, NSObject, NSString;

@interface HDSubserver : NSObject <HDDiagnosticObject> {

	HDDaemon* _daemon;
	HDHealthStoreServer* _server;
	HDHealthStoreClient* _client;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;                         //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,__weak,readonly) HDHealthStoreServer * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                     //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDHealthStoreClient *)client;
-(HDHealthStoreServer *)server;
-(HDProfile *)profile;
-(HDDaemon *)daemon;
-(id)diagnosticDescription;
-(id)initWithParentServer:(id)arg1 ;
-(void)requirePrivateHealthKitEntitlementUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)requireEntitlement:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

