/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKCoreDataStorageDelegate
@required
-(BOOL)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2;
-(BOOL)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;
-(BOOL)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5;
-(id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
-(BOOL)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5;

@end

