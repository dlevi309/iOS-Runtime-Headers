/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)persistentStore;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)init;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2 ;
-(BOOL)deleteTextReplacementsWithPredicate:(id)arg1 ;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(id)getSyncStateEntry;
-(BOOL)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1 excludeSavesToCloud:(BOOL)arg2 ;
-(id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2 ;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(BOOL)didMakeInitialPull;
-(void)setDirectoryPath:(NSString *)arg1 ;
-(void)cleanup;
-(id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)textReplacementEntriesWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)countEntriesWithPredicate:(id)arg1 ;
-(BOOL)recordTextReplacementEntries:(id)arg1 ;
-(void)saveCKFetchToken:(id)arg1 ;
-(id)getCKFetchToken;
-(BOOL)markDeletesForTextReplacementEntries:(id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(id)initWithDirectoryPath:(id)arg1 ;
-(NSString *)directoryPath;
-(void)dealloc;
-(void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2 ;
@end

