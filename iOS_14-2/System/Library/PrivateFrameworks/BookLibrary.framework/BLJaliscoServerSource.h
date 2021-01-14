/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSPersistentStoreCoordinator, NSManagedObjectModel, NSString;

@interface BLJaliscoServerSource : NSObject {

	long long _modelSentinel;
	long long _pscSentinel;
	NSPersistentStoreCoordinator* _psc;
	NSManagedObjectModel* _model;
	NSString* _identifier;
	NSString* _databaseContainerPath;

}

@property (nonatomic,retain) NSString * databaseContainerPath;              //@synthesize databaseContainerPath=_databaseContainerPath - In the implementation block
@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
+(void)preWarm;
+(id)sharedSource;
+(void)setSharedSource:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)init;
-(id)newManagedObjectContext;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 databaseContainerPath:(id)arg2 ;
-(NSString *)databaseContainerPath;
-(id)p_oldPersistentStoreDirectory;
-(id)p_persistentStoreDirectory;
-(id)p_persistentStoreFullPathAtPrivateiBooksLocation;
-(id)p_persistentStoreFullPathAtSharediBooksLocation;
-(BOOL)p_databaseExistsAtSharediBooksContainerLocation;
-(BOOL)p_databaseExistsAtPrivateiBooksContainerLocation;
-(BOOL)p_createPersistentDirectoryIfNeeded;
-(id)existingServerInfoWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)existingServerDatabaseWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)_itemsFetchRequestIncludingHiddenItems:(BOOL)arg1 dsids:(id)arg2 ;
-(id)existingEntitiesWithName:(id)arg1 matchingPredicate:(id)arg2 fromManagedObjectContext:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)existingServerItemWithPredicate:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)predicateForItems:(BOOL)arg1 dsids:(id)arg2 ;
-(id)itemsFetchRequestForDSIDs:(id)arg1 ;
-(id)allItemsFetchRequestForDSIDs:(id)arg1 ;
-(id)predicateForNeedsImport:(BOOL)arg1 ;
-(id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2 isImported:(BOOL)arg3 includeHidden:(BOOL)arg4 ;
-(id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2 ;
-(BOOL)workaround_18397698;
-(id)newManagedObjectContextWithPrivateQueueConcurrency;
-(BOOL)truncateDatabaseError:(id*)arg1 ;
-(id)serverInfoForDSID:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)serverDatabaseForDSID:(id)arg1 fromManagedObjectContext:(id)arg2 error:(id*)arg3 ;
-(id)serverDatabaseForDSID:(id)arg1 withIdentifier:(id)arg2 fromManagedObjectContext:(id)arg3 error:(id*)arg4 ;
-(id)fetchRequestForAllCloudIDs:(id)arg1 dsids:(id)arg2 ;
-(id)serverItemWithStoreID:(id)arg1 inDatabaseWithIdentifier:(id)arg2 forDSID:(id)arg3 fromManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(id)fetchRequestForStoreIDs:(id)arg1 dsids:(id)arg2 ;
-(id)fetchRequestForAllStoreIDs:(id)arg1 ;
-(id)fetchRequestForNeedsImport:(BOOL)arg1 ;
-(id)fetchRequestForAllStoreIDs:(id)arg1 dsids:(id)arg2 isImported:(BOOL)arg3 ;
-(id)fetchRequestForBuyParameters:(id)arg1 ;
-(id)fetchRequestForNotInStoreAccountIDs:(id)arg1 ;
-(id)predicateForStoreAccountID:(id)arg1 storeIDs:(id)arg2 ;
-(void)setDatabaseContainerPath:(NSString *)arg1 ;
-(id)managedObjectModel;
-(void)dealloc;
@end

