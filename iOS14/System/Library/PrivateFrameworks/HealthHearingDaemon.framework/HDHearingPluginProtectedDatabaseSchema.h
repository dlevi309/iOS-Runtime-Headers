/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/

#import <libobjc.A.dylib/HDHearingPluginDatabaseSchema.h>

@class NSArray, NSString;

@interface HDHearingPluginProtectedDatabaseSchema : NSObject <HDHearingPluginDatabaseSchema>

@property (nonatomic,readonly) long long currentSchemaVersion; 
@property (nonatomic,copy,readonly) NSArray * databaseEntities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMigrationStepsForSchemaName:(id)arg1 migrator:(id)arg2 ;
-(long long)currentSchemaVersion;
-(NSArray *)databaseEntities;
@end

