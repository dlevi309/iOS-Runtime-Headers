/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@interface DMEnvironment : NSObject {

	BOOL _testMigrationInfrastructureOnly;

}

@property (assign,nonatomic) BOOL testMigrationInfrastructureOnly;              //@synthesize testMigrationInfrastructureOnly=_testMigrationInfrastructureOnly - In the implementation block
+(id)sharedInstance;
+(BOOL)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2 ;
-(void)setUserDataDispositionPref:(id)arg1 ;
-(void)clearContext;
-(void)setLastMigrationResultsPref:(id)arg1 ;
-(id)migrationPluginResultsPref;
-(id)userDataDispositionPref;
-(BOOL)implementMigrationPluginResults;
-(id)context;
-(BOOL)waitForExecutePluginsSignalMarkerPref;
-(void)setTestMigrationInfrastructureOnly:(BOOL)arg1 ;
-(id)contextPath;
-(BOOL)isDeviceUsingEphemeralStorage;
-(id)buildVersion;
-(BOOL)suppressMigrationPluginWrapperExitMarkerPref;
-(void)setMigrationPluginResultsPref:(id)arg1 ;
-(id)continuousIntegrationMarkerPref;
-(BOOL)testMigrationInfrastructureOnly;
-(id)lastBuildVersionPref;
-(id)lastMigrationResultsPref;
-(void)blockUntilPreferencesFlush;
-(void)setLastBuildVersionPref:(id)arg1 ;
-(void)setContext:(id)arg1 ;
@end

