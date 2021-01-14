/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)standardStoreOptions;
+(id)oldManagedObjectModel;
+(BOOL)isDataProtectionError:(id)arg1 ;
+(id)managedObjectModel;
-(BOOL)isReadOnly;
-(void)setFakeFreeDiskSpace:(unsigned long long)arg1 ;
-(BOOL)migrateFromOldDataModel;
-(NSDictionary *)storeOptions;
-(unsigned long long)fakeFreeDiskSpace;
-(NSURL *)storeURL;
-(BOOL)loadPersistentStore:(id*)arg1 ;
-(void)setMergePolicy:(NSMergePolicy *)arg1 ;
-(void)setStoreType:(NSString *)arg1 ;
-(id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 managedObjectModel:(id)arg5 ;
-(void)setupViewContext;
-(BOOL)abortAfterReplacingDatabase;
-(id)initWithStoreURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 mergePolicy:(id)arg4 ;
-(BOOL)isTooLowOnDiskSpace;
-(void)setupPersistentStoreDescriptions;
-(void)setStoreURL:(NSURL *)arg1 ;
-(NSURL *)backupsDirectoryURL;
-(id)newBackgroundContext;
-(void)setAbortAfterReplacingDatabase:(BOOL)arg1 ;
-(void)vacuumStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)storeType;
-(NSMergePolicy *)mergePolicy;
-(void)backupPersistentStore;
-(void)setStoreOptions:(NSDictionary *)arg1 ;
-(void)vacuumStore;
@end

