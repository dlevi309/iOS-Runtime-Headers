/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/TIUserModelDataStoring.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSObject;

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring> {

	NSString* _path;
	sqlite3Ref _user_model_db;
	BOOL _user_model_db_failed;
	NSObject*<OS_dispatch_queue> _database_queue;

}

@property (readonly) BOOL isValid; 
@property (readonly) int propertiesVersion; 
@property (readonly) int durableVersion; 
@property (readonly) int transientVersion; 
@property (readonly) NSDate * propertiesLastMigrationDate; 
@property (readonly) NSDate * durableLastMigrationDate; 
@property (readonly) NSDate * transientLastMigrationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initializeDataStoreAtPath:(id)arg1 ;
-(int)propertiesVersionFromDatabase:(sqlite3Ref)arg1 ;
-(BOOL)purgeDurableDataForKeyPrefix:(id)arg1 ;
-(id)durableLastMigrationDateFromDatabase:(sqlite3Ref)arg1 ;
-(BOOL)isDatabaseValid;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3 ;
-(id)getInputModesForKey:(id)arg1 ;
-(id)getAllKnownInputModes;
-(id)initWithPath:(id)arg1 ;
-(id)durableCreationSchema;
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3 ;
-(id)durableResetSchema;
-(id)getAllKnownInputModesSinceDate:(id)arg1 ;
-(int)transientVersion;
-(id)durableMigrationFromV3Schema;
-(id)propertiesLastMigrationDateFromDatabase:(sqlite3Ref)arg1 ;
-(id)transientCreationSchema;
-(id)propertiesMigrationFromV1Schema;
-(id)durableMigrationSchemaForDatabase:(sqlite3Ref)arg1 ;
-(NSDate *)transientLastMigrationDate;
-(id)lastMigrationDateForKey:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(id)transientLastMigrationDateFromDatabase:(sqlite3Ref)arg1 ;
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3 ;
-(BOOL)isValid;
-(id)transientResetSchema;
-(NSDate *)durableLastMigrationDate;
-(id)propertiesMigrationSchemaForDatabase:(sqlite3Ref)arg1 ;
-(id)propertiesCreationSchema;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3 ;
-(BOOL)createOrOpenDatabase;
-(NSDate *)propertiesLastMigrationDate;
-(int)durableVersion;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7 ;
-(int)durableVersionFromDatabase:(sqlite3Ref)arg1 ;
-(BOOL)closeDatabase;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4 ;
-(id)getDurableValueForKey:(id)arg1 ;
-(int)transientVersionFromDatabase:(sqlite3Ref)arg1 ;
-(int)versionForKey:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(id)transientMigrationSchemaForDatabase:(sqlite3Ref)arg1 ;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3 ;
-(id)durableMigrationFromV2Schema;
-(void)dealloc;
-(int)propertiesVersion;
@end

