/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject {

	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;              //@synthesize database=_database - In the implementation block
+(void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1 ;
+(void)fetchMigrationFlagWithCompletion:(/*^block*/id)arg1 ;
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)migrateFromManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveRecord:(id)arg1 error:(id*)arg2 ;
@end

