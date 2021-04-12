/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <libobjc.A.dylib/IXCoordinatorWithPlaceholderPromise.h>

@protocol IXAppInstallCoordinatorObserver, OS_dispatch_queue;
@class NSError, IXAppInstallCoordinatorSeed, NSObject, NSString, NSArray, NSUUID;

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise> {

	BOOL _complete;
	NSError* _error;
	unsigned long long _errorSourceIdentifier;
	id<IXAppInstallCoordinatorObserver> _observer;
	IXAppInstallCoordinatorSeed* _seed;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	unsigned long long _observersCalled;

}

@property (nonatomic,readonly) IXAppInstallCoordinatorSeed * seed;                             //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerCalloutQueue;              //@synthesize observerCalloutQueue=_observerCalloutQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalQueue;                     //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) unsigned long long observersCalled;                               //@synthesize observersCalled=_observersCalled - In the implementation block
@property (nonatomic,readonly) NSString * localDescription; 
@property (assign,getter=isComplete,nonatomic) BOOL complete;                                  //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long errorSourceIdentifier;                         //@synthesize errorSourceIdentifier=_errorSourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppAssetPromise; 
@property (nonatomic,readonly) BOOL hasInstallOptions; 
@property (nonatomic,readonly) BOOL hasInitialODRAssetPromises; 
@property (nonatomic,readonly) BOOL hasUserDataPromise; 
@property (nonatomic,copy,readonly) NSArray * validInstallTypes; 
@property (nonatomic,readonly) unsigned long long coordinationState; 
@property (nonatomic,readonly) unsigned long long creatorIdentifier; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (assign,nonatomic,__weak) id<IXAppInstallCoordinatorObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPlaceholderPromise; 
+(void)prioritizeCoordinatorForAppWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(void)pauseCoordinatorForAppWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)resumeCoordinatorForAppWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)removabilityForAppWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)uninstallAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(BOOL)arg4 created:(BOOL*)arg5 error:(id*)arg6 ;
+(id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(BOOL)arg4 requireMatchingIntent:(BOOL)arg5 created:(BOOL*)arg6 error:(id*)arg7 ;
+(BOOL)_synchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_asynchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
+(id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(BOOL)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateCoordinatorsUsingBlock:(/*^block*/id)arg1 ;
+(Class)classForIntent:(unsigned long long)arg1 ;
+(BOOL)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id*)arg4 ;
+(void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(BOOL)arg2 waitForDeletion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(BOOL)arg2 waitForDeletion:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)enumerateCoordinatorsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
+(BOOL)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id*)arg4 ;
+(void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)pauseCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(BOOL)resumeCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(BOOL)prioritizeCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2 ;
+(void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)purgeAllCoordinatorsAndPromisesForCreator:(unsigned long long)arg1 ;
+(BOOL)killDaemonForTesting;
+(int)daemonPid;
+(BOOL)postNSCurrentLocaleDidChangeNotification;
+(BOOL)setTestingEnabled:(BOOL)arg1 ;
+(BOOL)setTestModeForIdentifierPrefix:(id)arg1 testMode:(unsigned long long)arg2 ;
+(void)_beginInstallForURL:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)installApplication:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)installApplication:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(BOOL)arg3 error:(id*)arg4 ;
+(void)_demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 waitForDeletion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<IXAppInstallCoordinatorObserver>)observer;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setObserver:(id<IXAppInstallCoordinatorObserver>)arg1 ;
-(NSString *)bundleID;
-(IXAppInstallCoordinatorSeed *)seed;
-(BOOL)isComplete;
-(void)setComplete:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)initWithSeed:(id)arg1 ;
-(BOOL)resumeWithError:(id*)arg1 ;
-(BOOL)setAppAssetPromise:(id)arg1 error:(id*)arg2 ;
-(id)appAssetPromiseWithError:(id*)arg1 ;
-(BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1 ;
-(BOOL)appAssetPromiseHasBegunFulfillment:(BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)hasAppAssetPromise;
-(BOOL)setInstallOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasInstallOptions;
-(BOOL)setUserDataPromise:(id)arg1 error:(id*)arg2 ;
-(id)userDataPromiseWithError:(id*)arg1 ;
-(id)userDataRestoreShouldBegin:(BOOL*)arg1 ;
-(BOOL)hasUserDataPromise;
-(void)_updateInitWithSeed:(id)arg1 notifyDaemon:(BOOL)arg2 ;
-(BOOL)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)observerCalloutQueue;
-(void)setObserversCalled:(unsigned long long)arg1 ;
-(unsigned long long)observersCalled;
-(unsigned long long)creatorIdentifier;
-(unsigned long long)coordinationState;
-(NSString *)localDescription;
-(BOOL)setPlaceholderPromise:(id)arg1 error:(id*)arg2 ;
-(id)placeholderPromiseWithError:(id*)arg1 ;
-(BOOL)hasPlaceholderPromise;
-(id)initWithBundleID:(id)arg1 creator:(unsigned long long)arg2 intent:(unsigned long long)arg3 ;
-(void)cancelForReason:(id)arg1 ;
-(BOOL)setImportance:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)importanceWithError:(id*)arg1 ;
-(BOOL)setInitialODRAssetPromises:(id)arg1 error:(id*)arg2 ;
-(id)initialODRAssetPromisesWithError:(id*)arg1 ;
-(BOOL)hasInitialODRAssetPromises;
-(id)preparationPromiseWithError:(id*)arg1 ;
-(BOOL)setPreparationPromise:(id)arg1 withError:(id*)arg2 ;
-(BOOL)setDeviceSecurityPromise:(id)arg1 error:(id*)arg2 ;
-(id)deviceSecurityPromiseWithError:(id*)arg1 ;
-(unsigned long long)errorSourceIdentifier;
-(void)setErrorSourceIdentifier:(unsigned long long)arg1 ;
-(BOOL)pauseWithError:(id*)arg1 ;
-(BOOL)isPaused:(BOOL*)arg1 withError:(id*)arg2 ;
-(BOOL)prioritizeWithError:(id*)arg1 ;
-(oneway void)_clientDelegate_shouldPrioritize;
-(oneway void)_clientDelegate_shouldResume;
-(oneway void)_clientDelegate_shouldPause;
-(oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1 ;
-(oneway void)_clientDelegate_shouldBeginRestoringUserData;
-(oneway void)_clientDelegate_placeholderDidInstall;
-(oneway void)_clientDelegate_didComplete;
-(oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2 ;
@end

