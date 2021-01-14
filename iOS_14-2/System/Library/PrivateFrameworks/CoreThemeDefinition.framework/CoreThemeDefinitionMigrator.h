/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

