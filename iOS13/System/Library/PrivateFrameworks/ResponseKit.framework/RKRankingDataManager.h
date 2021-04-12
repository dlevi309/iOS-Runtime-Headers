/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSPersistentStore;

@interface RKRankingDataManager : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPersistentStore* _persistentStore;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) NSPersistentStore * persistentStore;                                    //@synthesize persistentStore=_persistentStore - In the implementation block
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStore *)persistentStore;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setPersistentStore:(NSPersistentStore *)arg1 ;
-(id)initWithLanguageID:(id)arg1 ;
-(id)initWithDatabaseFilename:(id)arg1 ;
-(void)insertRankingInfoFromDictionary:(id)arg1 ;
-(id)fetchRankingInfoForCategory:(id)arg1 ;
-(void)flushRankingData;
-(void)pruneUserDatabase;
-(void)insertRankingInfoFromDictionary:(id)arg1 withDate:(id)arg2 ;
-(id)fetchRankingInfoFromDB;
-(unsigned long long)getNumberOfEntriesInDB;
-(void)resetRankingData;
@end
