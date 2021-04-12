/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@class NSMigrationManager, NSURL, NSString;

@interface CoreThemeDefinitionMigrator : NSObject {

	NSMigrationManager* _migrationManager;
	NSURL* _documentURL;
	long long _oldVersion;
	long long _newVersion;
	NSString* temporaryMigrationPath;

}

@property (copy) NSString * temporaryMigrationPath; 
-(void)dealloc;
-(BOOL)migrateWithError:(id*)arg1 ;
-(NSString *)temporaryMigrationPath;
-(void)setTemporaryMigrationPath:(NSString *)arg1 ;
-(BOOL)_checkDiskSpace:(id*)arg1 ;
-(id)mappingModelForMigrationWithError:(id*)arg1 ;
-(BOOL)_updateMetadata:(id*)arg1 ;
-(id)initWithURL:(id)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3 ;
@end

