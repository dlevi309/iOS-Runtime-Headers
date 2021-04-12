/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class DMXPCConnection;

@interface DMConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(id)init;
-(void)dealloc;
-(void)reportMigrationFailure;
-(void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned)arg1 ;
-(void)isMigrationNeeded:(/*^block*/id)arg1 ;
-(void)userDataDisposition:(/*^block*/id)arg1 ;
-(void)previousBuildVersion:(/*^block*/id)arg1 ;
-(void)orderedPluginIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateCheckingNecessity:(BOOL)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)changeVisibility:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)migrationPhaseDescription:(/*^block*/id)arg1 ;
-(void)migrationPluginResults:(/*^block*/id)arg1 ;
-(void)deferExitWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelDeferredExitWithCompletion:(/*^block*/id)arg1 ;
-(void)testMigrationUIWithProgress:(BOOL)arg1 forceInvert:(BOOL)arg2 ;
@end

