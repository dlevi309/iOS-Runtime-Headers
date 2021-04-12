/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBApplicationDataStoreRepositoryDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, FBSqliteApplicationDataStoreRepository, LSApplicationWorkspace, NSObject, NSString;

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate> {

	NSURL* _dataStoreURL;
	FBSqliteApplicationDataStoreRepository* _dataStore;
	LSApplicationWorkspace* _lsApplicationWorkspace;
	NSObject*<OS_dispatch_queue> _deferredWorkQueue;

}

@property (nonatomic,retain) id<FBApplicationDataStoreRepository> dataStore;               //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * lsApplicationWorkspace;              //@synthesize lsApplicationWorkspace=_lsApplicationWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<FBApplicationDataStoreRepository>)dataStore;
-(void)setDataStore:(id<FBApplicationDataStoreRepository>)arg1 ;
-(void)objectChangedForKeys:(id)arg1 application:(id)arg2 ;
-(void)storeInvalidatedForIdentifier:(id)arg1 ;
-(id)urlByAppendingString:(id)arg1 toURL:(id)arg2 ;
-(id)_initWithDataStore:(id)arg1 lsWorkspace:(id)arg2 ;
-(void)migrateApplicationStorePathIfNecessary;
-(void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
-(BOOL)removeStoreAtURL:(id)arg1 error:(out id*)arg2 ;
-(BOOL)migrateFromPlistStoreAtURL:(id)arg1 toSqliteStoreAtURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)migrateFromApplicationStore:(id)arg1 toApplicationStore:(id)arg2 error:(id*)arg3 ;
-(LSApplicationWorkspace *)lsApplicationWorkspace;
-(id)_safeObjectForKey:(id)arg1 forApplication:(id)arg2 ofType:(Class)arg3 ;
-(void)_handleApplicationInstalled:(id)arg1 ;
-(void)_performAfterDeferredWork:(/*^block*/id)arg1 ;
-(void)setLsApplicationWorkspace:(LSApplicationWorkspace *)arg1 ;
@end

