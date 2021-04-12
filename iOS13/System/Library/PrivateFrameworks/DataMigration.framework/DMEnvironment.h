/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@interface DMEnvironment : NSObject {

	BOOL _testMigrationInfrastructureOnly;

}

@property (assign,nonatomic) BOOL testMigrationInfrastructureOnly;              //@synthesize testMigrationInfrastructureOnly=_testMigrationInfrastructureOnly - In the implementation block
+(id)sharedInstance;
+(BOOL)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)buildVersion;
-(void)clearContext;
-(BOOL)suppressMigrationPluginWrapperExitMarkerPref;
-(BOOL)testMigrationInfrastructureOnly;
-(id)lastBuildVersionPref;
-(void)setLastBuildVersionPref:(id)arg1 ;
-(id)lastMigrationResultsPref;
-(void)setLastMigrationResultsPref:(id)arg1 ;
-(id)userDataDispositionPref;
-(void)setUserDataDispositionPref:(id)arg1 ;
-(id)continuousIntegrationMarkerPref;
-(BOOL)waitForExecutePluginsSignalMarkerPref;
-(BOOL)implementMigrationPluginResults;
-(id)migrationPluginResultsPref;
-(void)setMigrationPluginResultsPref:(id)arg1 ;
-(BOOL)isDeviceUsingEphemeralStorage;
-(void)blockUntilPreferencesFlush;
-(void)setTestMigrationInfrastructureOnly:(BOOL)arg1 ;
-(id)contextPath;
@end

