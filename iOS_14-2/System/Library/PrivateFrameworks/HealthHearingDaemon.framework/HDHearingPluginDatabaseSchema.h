/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/

@class NSArray;


@protocol HDHearingPluginDatabaseSchema <NSObject>
@property (nonatomic,readonly) long long currentSchemaVersion; 
@property (nonatomic,copy,readonly) NSArray * databaseEntities; 
@required
-(void)registerMigrationStepsForSchemaName:(id)arg1 migrator:(id)arg2;
-(long long)currentSchemaVersion;
-(NSArray *)databaseEntities;

@end

