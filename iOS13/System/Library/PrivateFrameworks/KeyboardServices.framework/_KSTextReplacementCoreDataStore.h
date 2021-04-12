/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface _KSTextReplacementCoreDataStore : NSObject {

	NSObject*<OS_dispatch_queue> _queueMOC;
	NSObject*<OS_dispatch_queue> _queuePSC;
	NSString* _directoryPath;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,retain) NSString * directoryPath;                                               //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)localCloudEntryFromMocObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(id)persistentStore;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSString *)directoryPath;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(BOOL)didMakeInitialPull;
-(BOOL)markDeletesForTextReplacementEntries:(id)arg1 ;
-(BOOL)recordTextReplacementEntries:(id)arg1 ;
-(BOOL)deleteTextReplacementsWithPredicate:(id)arg1 ;
-(void)saveCKFetchToken:(id)arg1 ;
-(id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1 excludeSavesToCloud:(BOOL)arg2 ;
-(id)getCKFetchToken;
-(unsigned long long)countEntriesWithPredicate:(id)arg1 ;
-(void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2 ;
-(id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2 ;
-(id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)getSyncStateEntry;
-(id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2 ;
-(id)textReplacementEntriesWithLimit:(unsigned long long)arg1 ;
@end

