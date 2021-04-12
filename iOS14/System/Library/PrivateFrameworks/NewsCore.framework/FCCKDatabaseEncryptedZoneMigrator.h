/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseMigrator.h>

@protocol FCCKDatabaseRecordMiddleware;
@class FCCKPrivateDatabaseSchema, NSSet, NSString;

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator> {

	FCCKPrivateDatabaseSchema* _sourceSchema;
	id<FCCKDatabaseRecordMiddleware> _recordEncryptionMiddleware;
	/*^block*/id _deprecatedBlock;
	NSSet* _sourceZoneNames;

}

@property (nonatomic,retain) FCCKPrivateDatabaseSchema * sourceSchema;                                 //@synthesize sourceSchema=_sourceSchema - In the implementation block
@property (nonatomic,retain) id<FCCKDatabaseRecordMiddleware> recordEncryptionMiddleware;              //@synthesize recordEncryptionMiddleware=_recordEncryptionMiddleware - In the implementation block
@property (nonatomic,copy) id deprecatedBlock;                                                         //@synthesize deprecatedBlock=_deprecatedBlock - In the implementation block
@property (nonatomic,retain) NSSet * sourceZoneNames;                                                  //@synthesize sourceZoneNames=_sourceZoneNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isEnabledForDatabase:(id)arg1 ;
-(void)setDeprecatedBlock:(id)arg1 ;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2 ;
-(BOOL)_shouldMigrateRecord:(id)arg1 database:(id)arg2 ;
-(void)setSourceZoneNames:(NSSet *)arg1 ;
-(void)setRecordEncryptionMiddleware:(id<FCCKDatabaseRecordMiddleware>)arg1 ;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2 ;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1 ;
-(FCCKPrivateDatabaseSchema *)sourceSchema;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2 ;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2 ;
-(id)deprecatedBlock;
-(NSSet *)sourceZoneNames;
-(id)initWithSourceSchema:(id)arg1 recordEncryptionMiddleware:(id)arg2 deprecatedBlock:(/*^block*/id)arg3 ;
-(id<FCCKDatabaseRecordMiddleware>)recordEncryptionMiddleware;
-(void)setSourceSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
@end

