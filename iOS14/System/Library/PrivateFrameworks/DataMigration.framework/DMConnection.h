/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class DMXPCConnection;

@interface DMConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(void)changeVisibility:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned)arg1 ;
-(void)reportMigrationFailure;
-(void)migrationPluginResults:(/*^block*/id)arg1 ;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 ;
-(id)migrationPhaseDescription;
-(unsigned)userDataDisposition;
-(id)previousBuildVersion;
-(id)orderedPluginIdentifiers;
-(void)cancelDeferredExit;
-(long long)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3 ;
-(BOOL)isMigrationNeeded;
-(void)dealloc;
-(void)deferExit;
@end

