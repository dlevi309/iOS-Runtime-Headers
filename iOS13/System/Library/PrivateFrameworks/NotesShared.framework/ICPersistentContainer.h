/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <CoreData/NSPersistentContainer.h>

@class NSDictionary, NSURL, NSString, NSMergePolicy;

@interface ICPersistentContainer : NSPersistentContainer {

	BOOL _abortAfterReplacingDatabase;
	NSDictionary* _storeOptions;
	NSURL* _storeURL;
	NSString* _storeType;
	NSMergePolicy* _mergePolicy;
	unsigned long long _fakeFreeDiskSpace;

}

@property (nonatomic,retain) NSURL * storeURL;                                  //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) NSString * storeType;                              //@synthesize storeType=_storeType - In the implementation block
@property (nonatomic,retain) NSDictionary * storeOptions;                       //@synthesize storeOptions=_storeOptions - In the implementation block
@property (nonatomic,retain) NSMergePolicy * mergePolicy;                       //@synthesize mergePolicy=_mergePolicy - In the implementation block
@property (nonatomic,readonly) NSURL * backupsDirectoryURL; 
@property (assign,nonatomic) unsigned long long fakeFreeDiskSpace;              //@synthesize fakeFreeDiskSpace=_fakeFreeDiskSpace - In the implementation block
@property (assign,nonatomic) BOOL abortAfterReplacingDatabase;                  //@synthesize abortAfterReplacingDatabase=_abortAfterReplacingDatabase - In the implementation block
+(id)managedObjectModel;
+(id)standardStoreOptions;
+(id)oldManagedObjectModel;
+(BOOL)isDataProtectionError:(id)arg1 ;
-(void)setMergePolicy:(NSMergePolicy *)arg1 ;
-(BOOL)isReadOnly;
-(NSMergePolicy *)mergePolicy;
-(id)newBackgroundContext;
-(NSString *)storeType;
-(void)setStoreType:(NSString *)arg1 ;
-(void)setStoreOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)storeOptions;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 ;
-(BOOL)loadPersistentStore:(id*)arg1 ;
-(id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 managedObjectModel:(id)arg5 ;
-(void)setupPersistentStoreDescriptions;
-(BOOL)isTooLowOnDiskSpace;
-(BOOL)migrateFromOldDataModel;
-(void)backupPersistentStore;
-(BOOL)abortAfterReplacingDatabase;
-(NSURL *)backupsDirectoryURL;
-(unsigned long long)fakeFreeDiskSpace;
-(void)vacuumStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)vacuumStore;
-(void)setFakeFreeDiskSpace:(unsigned long long)arg1 ;
-(void)setAbortAfterReplacingDatabase:(BOOL)arg1 ;
@end

