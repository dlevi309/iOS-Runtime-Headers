/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseMigrator.h>
#import <libobjc.A.dylib/FCCKDatabaseStartUpMiddleware.h>

@protocol FCCKDatabaseRecordMiddleware;
@class FCCKZoneSchema, NSString;

@interface FCCKDatabaseSubscriptionsStartUpMiddleware : NSObject <FCCKDatabaseMigrator, FCCKDatabaseStartUpMiddleware> {

	FCCKZoneSchema* _legacyZoneSchema;
	FCCKZoneSchema* _secureZoneSchema;
	id<FCCKDatabaseRecordMiddleware> _encryptionMiddleware;

}

@property (nonatomic,readonly) FCCKZoneSchema * legacyZoneSchema;                                  //@synthesize legacyZoneSchema=_legacyZoneSchema - In the implementation block
@property (nonatomic,readonly) FCCKZoneSchema * secureZoneSchema;                                  //@synthesize secureZoneSchema=_secureZoneSchema - In the implementation block
@property (nonatomic,readonly) id<FCCKDatabaseRecordMiddleware> encryptionMiddleware;              //@synthesize encryptionMiddleware=_encryptionMiddleware - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_promiseMigrationWithDatabase:(id)arg1 ;
-(id)_promiseMigrationIsAllowedWithDatabase:(id)arg1 ;
-(id)_promiseDeletionWithDatabase:(id)arg1 ;
-(id<FCCKDatabaseRecordMiddleware>)encryptionMiddleware;
-(id)_promiseSentinelModificationWithDatabase:(id)arg1 modification:(/*^block*/id)arg2 ;
-(FCCKZoneSchema *)secureZoneSchema;
-(FCCKZoneSchema *)legacyZoneSchema;
-(void)_runChildOperation:(id)arg1 ;
-(id)initWithLegacyZoneSchema:(id)arg1 secureZoneSchema:(id)arg2 encryptionMiddlewawre:(id)arg3 ;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2 ;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2 ;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1 ;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2 ;
-(void)performStartUpForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2 ;
-(void)_associateChildOperation:(id)arg1 ;
@end

