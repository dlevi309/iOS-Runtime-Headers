/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithSourceSchema:(id)arg1 recordEncryptionMiddleware:(id)arg2 deprecatedBlock:(/*^block*/id)arg3 ;
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2 ;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2 ;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2 ;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isEnabledForDatabase:(id)arg1 ;
-(FCCKPrivateDatabaseSchema *)sourceSchema;
-(NSSet *)sourceZoneNames;
-(id)deprecatedBlock;
-(BOOL)_shouldMigrateRecord:(id)arg1 database:(id)arg2 ;
-(id<FCCKDatabaseRecordMiddleware>)recordEncryptionMiddleware;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1 ;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2 ;
-(void)setSourceSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
-(void)setRecordEncryptionMiddleware:(id<FCCKDatabaseRecordMiddleware>)arg1 ;
-(void)setDeprecatedBlock:(id)arg1 ;
-(void)setSourceZoneNames:(NSSet *)arg1 ;
@end

