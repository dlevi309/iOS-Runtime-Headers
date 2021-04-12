/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CKRecordValue.h>

@protocol OS_dispatch_queue;
@class NSString, NSData, CKSQLite, NSObject, NSArray, CKRecord;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue> {

	OpaquePCSShareProtectionRef _recordPCS;
	BOOL _open;
	BOOL _transaction;
	BOOL _wasCached;
	BOOL _uploaded;
	BOOL _downloaded;
	BOOL _hasSize;
	BOOL _shouldReadRawEncryptedData;
	NSString* _databaseBasePath;
	long long _state;
	NSData* _archiverInfo;
	CKSQLite* _sqlite;
	unsigned long long _nextItemIndex;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _UUID;
	unsigned long long _size;
	long long _storageGroupingPolicy;
	long long _uploadRank;
	long long _packageID;
	NSArray* _assets;
	CKRecord* _record;
	NSString* _recordKey;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSData * archiverInfo;                                //@synthesize archiverInfo=_archiverInfo - In the implementation block
@property (nonatomic,retain) CKSQLite * sqlite;                                  //@synthesize sqlite=_sqlite - In the implementation block
@property (assign,nonatomic) unsigned long long nextItemIndex;                   //@synthesize nextItemIndex=_nextItemIndex - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,getter=inTransaction,nonatomic) BOOL transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef recordPCS;              //@synthesize recordPCS=_recordPCS - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                    //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL wasCached;                                     //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                      //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) BOOL downloaded;                                    //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                       //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                    //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (assign,nonatomic) long long storageGroupingPolicy;                    //@synthesize storageGroupingPolicy=_storageGroupingPolicy - In the implementation block
@property (assign,nonatomic) long long uploadRank;                               //@synthesize uploadRank=_uploadRank - In the implementation block
@property (assign,nonatomic) long long packageID;                                //@synthesize packageID=_packageID - In the implementation block
@property (nonatomic,copy) NSArray * assets;                                     //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                           //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,retain) NSString * databaseBasePath;                        //@synthesize databaseBasePath=_databaseBasePath - In the implementation block
@property (nonatomic,copy) NSData * signature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)packageWithPackage:(id)arg1 error:(id*)arg2 ;
+(id)packageWithError:(id*)arg1 ;
+(id)packageInDaemonWithBasePath:(id)arg1 error:(id*)arg2 ;
+(id)packageProcessBasePath;
+(id)packageInClientWithBasePath:(id)arg1 error:(id*)arg2 ;
+(id)stagingPathSuffixForCloudKitCachesDirectoryWithBundleIdentifier:(id)arg1 ;
+(id)_packageDatabaseDirectoryWithBasePath:(id)arg1 state:(long long)arg2 ;
+(id)_packagesBasePathForBundleID:(id)arg1 ;
+(id)_packageDatabasePathWithBasePath:(id)arg1 UUID:(id)arg2 state:(long long)arg3 ;
+(id)_createPackageDBWithPath:(id)arg1 ;
+(id)clientPackageDatabaseDirectory;
+(void)destroyClientPackageWithDatabaseBasePath:(id)arg1 UUID:(id)arg2 ;
+(void)gcPackagesInDirectory:(id)arg1 dbInUseBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)open;
-(void)close;
-(unsigned long long)size;
-(long long)state;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(void)setState:(long long)arg1 ;
-(BOOL)isOpen;
-(BOOL)openWithError:(id*)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setTransaction:(BOOL)arg1 ;
-(NSData *)signature;
-(void)addItem:(id)arg1 ;
-(unsigned long long)itemCount;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(void)removeDB;
-(BOOL)shouldReadRawEncryptedData;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(BOOL)wasCached;
-(void)setWasCached:(BOOL)arg1 ;
-(NSString *)databaseBasePath;
-(unsigned long long)sectionCount;
-(void)releaseDB;
-(BOOL)claimOwnershipWithError:(id*)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(BOOL)hasSize;
-(NSString *)recordKey;
-(long long)uploadRank;
-(BOOL)uploaded;
-(BOOL)downloaded;
-(long long)storageGroupingPolicy;
-(void)setRecordKey:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(void)setStorageGroupingPolicy:(long long)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setDownloaded:(BOOL)arg1 ;
-(void)setUploadRank:(long long)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)itemEnumerator;
-(id)clonedPackageInDaemonWithBasePath:(id)arg1 filesDuplicatedIntoDirectory:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeDBAndDeleteFilesWithError:(id*)arg1 ;
-(id)_initWithBasePath:(id)arg1 UUID:(id)arg2 ;
-(id)_packageDatabasePath;
-(long long)packageID;
-(void)setPackageID:(long long)arg1 ;
-(BOOL)prepareDBWithError:(id*)arg1 ;
-(void)handleChangeStateAction:(long long)arg1 ;
-(NSData *)archiverInfo;
-(BOOL)handleChangeStateAction:(long long)arg1 error:(id*)arg2 ;
-(id)_packageDatabasePathWithState:(long long)arg1 ;
-(BOOL)movePackagesDatabaseInDirection:(BOOL)arg1 error:(id*)arg2 ;
-(id)sqliteOrRaise;
-(void)setDatabaseBasePath:(NSString *)arg1 ;
-(void)releaseDBWithRemove:(BOOL)arg1 ;
-(BOOL)_locked_openWithError:(id*)arg1 ;
-(void)setSqlite:(CKSQLite *)arg1 ;
-(CKSQLite *)sqlite;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)inTransaction;
-(id)_itemWithColumnsByName:(id)arg1 ;
-(id)_itemOrNilAtIndex:(unsigned long long)arg1 ;
-(void)_locked_open;
-(void)_locked_beginTransaction;
-(void)_locked_endTransaction;
-(id)initUnreachablePackageWithUUID:(id)arg1 ;
-(BOOL)setArchiverInfo:(id)arg1 error:(id*)arg2 ;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1 ;
-(void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5 ;
-(void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2 ;
-(void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)addSection:(id)arg1 ;
-(double)earliestUploadReceiptExpiration;
-(OpaquePCSShareProtectionRef)recordPCS;
-(void)setArchiverInfo:(NSData *)arg1 ;
-(unsigned long long)nextItemIndex;
-(void)setNextItemIndex:(unsigned long long)arg1 ;
@end

