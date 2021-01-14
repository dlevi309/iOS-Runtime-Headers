/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSPersistentStore *)persistentStore;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
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

