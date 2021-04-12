/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/TIUserModelDataStoring.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring> {

	sqlite3Ref _user_model_db;
	NSObject*<OS_dispatch_queue> _database_queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedUserModelDataStore;
+(id)initializeDataStoreAtPath:(id)arg1 ;
+(void)setSharedTIUserModelDataStore:(id)arg1 ;
-(void)dealloc;
-(BOOL)setDatabaseVersion:(int)arg1 ;
-(BOOL)closeDatabase;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3 ;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3 ;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7 ;
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3 ;
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3 ;
-(id)getInputModesForKey:(id)arg1 ;
-(id)getAllKnownInputModes;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3 ;
-(id)getDurableValueForKey:(id)arg1 ;
-(BOOL)createOrOpenDatabaseAtPath:(id)arg1 ;
-(id)getV1MigrationSchema;
-(id)getCreationSchema;
-(BOOL)applySchema:(id)arg1 ;
-(int)getDatabaseVersion;
-(BOOL)attemptSchemaMigration;
-(BOOL)purgeDurableDataForKeyPrefix:(id)arg1 ;
@end

