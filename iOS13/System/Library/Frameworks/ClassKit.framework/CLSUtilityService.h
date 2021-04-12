/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, CLSEndpointConnection;

@interface CLSUtilityService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CLSEndpointConnection* _endpointConnection;

}

@property (nonatomic,retain) CLSEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
+(id)sharedInstance;
+(Class)endpointClass;
-(id)initWithEndpoint:(id)arg1 ;
-(CLSEndpointConnection *)endpointConnection;
-(id)utilityServer:(/*^block*/id)arg1 ;
-(void)syncFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)setEndpointConnection:(CLSEndpointConnection *)arg1 ;
-(void)databasePathWithCompletion:(/*^block*/id)arg1 ;
-(void)recreateDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)recreateDatabase:(BOOL)arg1 andTerminateDaemonWithCompletion:(/*^block*/id)arg2 ;
-(void)recreateDevelopmentDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)getDevModeWithCompletion:(/*^block*/id)arg1 ;
-(void)setDevMode:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncStatsWithCompletion:(/*^block*/id)arg1 ;
-(void)syncPushWithCompletion:(/*^block*/id)arg1 ;
-(void)statusWithCompletion:(/*^block*/id)arg1 ;
-(void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authorizationStatusForContextAtPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDefaultsConfigurationDictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)getUserDefaultForDefaultNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserDefaultValue:(id)arg1 forDefaultNamed:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

