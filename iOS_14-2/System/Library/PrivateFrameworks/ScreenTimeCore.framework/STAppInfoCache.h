/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@protocol OS_dispatch_queue;
@class NSPersistentContainer, NSCache, NSObject, NSURLSession, NSMutableSet, NSOperationQueue;

@interface STAppInfoCache : NSObject {

	NSPersistentContainer* _persistentContainer;
	NSCache* _appInfoByBundleIdentifier;
	NSObject*<OS_dispatch_queue> _lookupQueue;
	NSURLSession* _urlSession;
	NSMutableSet* _bundleIdentifiersWithPendingRequests;
	NSOperationQueue* _completionHandlerQueue;

}

@property (nonatomic,readonly) NSCache * appInfoByBundleIdentifier;                              //@synthesize appInfoByBundleIdentifier=_appInfoByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> lookupQueue;                         //@synthesize lookupQueue=_lookupQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                                        //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) NSMutableSet * bundleIdentifiersWithPendingRequests;              //@synthesize bundleIdentifiersWithPendingRequests=_bundleIdentifiersWithPendingRequests - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * completionHandlerQueue;                        //@synthesize completionHandlerQueue=_completionHandlerQueue - In the implementation block
@property (retain) NSPersistentContainer * persistentContainer;                                  //@synthesize persistentContainer=_persistentContainer - In the implementation block
+(id)sharedCache;
-(NSPersistentContainer *)persistentContainer;
-(id)_placeholderAppInfoWithBundleIdentifier:(id)arg1 ;
-(void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1 timeoutInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_fetchAppInfoFromLaunchServicesWithBundleIdentifier:(id)arg1 ;
-(id)_localAppNameForBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)_finishedFetchingAppInfoByBundleIdentifier:(id)arg1 ;
-(void)_handleiTunesResponseForBundleIdentifiers:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(void)fetchAppInfoForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)appInfoForBundleIdentifier:(id)arg1 localOnly:(BOOL)arg2 ;
-(NSCache *)appInfoByBundleIdentifier;
-(void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg1 ;
-(id)appInfoForBundleIdentifier:(id)arg1 ;
-(NSURLSession *)urlSession;
-(id)_appInfoForBundleIdentifier:(id)arg1 ;
-(NSOperationQueue *)completionHandlerQueue;
-(void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)fetchAppInfoForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)lookupQueue;
-(NSMutableSet *)bundleIdentifiersWithPendingRequests;
-(id)_fetchSyncedInstalledAppInfoForBundleIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3 ;
-(id)_preloadedAppInfoWithBundleIdentifier:(id)arg1 ;
-(void)dealloc;
@end

