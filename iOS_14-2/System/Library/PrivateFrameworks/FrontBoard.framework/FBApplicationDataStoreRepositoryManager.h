/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FBApplicationDataStoreRepository>)dataStore;
-(void)_handleApplicationInstalled:(id)arg1 ;
-(void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
-(id)init;
-(void)storeInvalidatedForIdentifier:(id)arg1 ;
-(void)setLsApplicationWorkspace:(LSApplicationWorkspace *)arg1 ;
-(BOOL)migrateFromPlistStoreAtURL:(id)arg1 toSqliteStoreAtURL:(id)arg2 error:(id*)arg3 ;
-(id)urlByAppendingString:(id)arg1 toURL:(id)arg2 ;
-(id)_safeObjectForKey:(id)arg1 forApplication:(id)arg2 ofType:(Class)arg3 ;
-(void)migrateApplicationStorePathIfNecessary;
-(void)setDataStore:(id<FBApplicationDataStoreRepository>)arg1 ;
-(id)_initWithDataStore:(id)arg1 lsWorkspace:(id)arg2 ;
-(void)_performAfterDeferredWork:(/*^block*/id)arg1 ;
-(LSApplicationWorkspace *)lsApplicationWorkspace;
-(BOOL)migrateFromApplicationStore:(id)arg1 toApplicationStore:(id)arg2 error:(id*)arg3 ;
-(void)objectChangedForKeys:(id)arg1 application:(id)arg2 ;
-(BOOL)removeStoreAtURL:(id)arg1 error:(out id*)arg2 ;
-(void)dealloc;
@end

