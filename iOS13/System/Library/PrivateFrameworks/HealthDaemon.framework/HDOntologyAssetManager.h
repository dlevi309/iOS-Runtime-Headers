/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class _HKMobileAssetDownloadManager, NSObject, NSMutableDictionary, NSURL, MAAsset, HDPeriodicActivity, HDDaemon, NSString;

@interface HDOntologyAssetManager : NSObject <HDPeriodicActivityDelegate> {

	_HKMobileAssetDownloadManager* _assetDownloadManager;
	NSObject*<OS_dispatch_queue> _downloadManagerCallbackQueue;
	NSObject*<OS_dispatch_queue> _handlerInvocationQueue;
	os_unfair_lock_s _ivarLock;
	int _notificationRegistrationToken;
	NSMutableDictionary* _registeredHandlers;
	BOOL _assetDownloadEnabled;
	/*^block*/id _AWDMetricPosterBlock;
	NSURL* _assetFileURL;
	MAAsset* _currentOntologyAsset;
	MAAsset* _latestOntologyAsset;
	long long _simulatedCompatibilityVersion;
	HDPeriodicActivity* _catalogUpdatePeriodicActivity;
	NSMutableDictionary* _completionsByActivityName;
	HDDaemon* _daemon;

}

@property (nonatomic,copy) NSURL * assetFileURL;                                                  //@synthesize assetFileURL=_assetFileURL - In the implementation block
@property (nonatomic,retain) MAAsset * currentOntologyAsset;                                      //@synthesize currentOntologyAsset=_currentOntologyAsset - In the implementation block
@property (nonatomic,retain) MAAsset * latestOntologyAsset;                                       //@synthesize latestOntologyAsset=_latestOntologyAsset - In the implementation block
@property (assign,nonatomic) long long simulatedCompatibilityVersion;                             //@synthesize simulatedCompatibilityVersion=_simulatedCompatibilityVersion - In the implementation block
@property (assign,nonatomic) BOOL assetDownloadEnabled;                                           //@synthesize assetDownloadEnabled=_assetDownloadEnabled - In the implementation block
@property (nonatomic,readonly) _HKMobileAssetDownloadManager * assetDownloadManager; 
@property (nonatomic,retain) HDPeriodicActivity * catalogUpdatePeriodicActivity;                  //@synthesize catalogUpdatePeriodicActivity=_catalogUpdatePeriodicActivity - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * completionsByActivityName;              //@synthesize completionsByActivityName=_completionsByActivityName - In the implementation block
@property (nonatomic,copy) id AWDMetricPosterBlock;                                               //@synthesize AWDMetricPosterBlock=_AWDMetricPosterBlock - In the implementation block
@property (nonatomic,__weak,readonly) HDDaemon * daemon;                                          //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) long long assetFileVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HDDaemon *)daemon;
-(void)unregisterHandlerForToken:(id)arg1 ;
-(void)invalidateAndWait;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(NSURL *)assetFileURL;
-(long long)assetFileVersion;
-(id)registerAssetAvailabilityHandler:(/*^block*/id)arg1 ;
-(id)setUserDefaultOverrideAssetFileURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearUserDefaultOverrideAssetFileURLWithError:(id*)arg1 ;
-(id)_newAssetDownloadManager;
-(id)_userDefaultOverrideAssetFileURL;
-(id)_localFileURLForAsset:(id)arg1 ;
-(long long)simulatedCompatibilityVersion;
-(void)_registerNotifyDispatchHandler;
-(void)_lock_schedulePeriodicActivity;
-(long long)_lock_assetAvailability;
-(void)_updateAssetCatalogForReason:(unsigned long long)arg1 ;
-(void)_lock_unschedulePeriodicActivity;
-(double)_catalogUpdateIntervalOverride;
-(id)_newPeriodicActivityWithName:(id)arg1 ;
-(void)setCatalogUpdatePeriodicActivity:(HDPeriodicActivity *)arg1 ;
-(void)_downloadManagerCallbackQueue_catalogUpdateDidComplete:(id)arg1 ;
-(void)_downloadManagerCallbackQueue_catalogUpdateDidFail:(id)arg1 ;
-(double)_normalIntervalForActivityNamed:(id)arg1 ;
-(NSMutableDictionary *)completionsByActivityName;
-(double)_retryIntervalForActivityNamed:(id)arg1 ;
-(_HKMobileAssetDownloadManager *)assetDownloadManager;
-(void)_downloadManagerCallbackQueue_assetDownloadDidComplete:(id)arg1 ;
-(void)_downloadManagerCallbackQueue_assetDownloadDidFail:(id)arg1 ;
-(BOOL)assetDownloadEnabled;
-(long long)_effectiveSystemCompatibilityVersion;
-(HDPeriodicActivity *)catalogUpdatePeriodicActivity;
-(void)_lock_invokeCompletionForPeriodicActivityName:(id)arg1 withResult:(long long)arg2 error:(id)arg3 ;
-(void)_postAWDMetricEventWithAssetDownloadPhase:(int)arg1 ;
-(id)_bestAssetInArray:(id)arg1 ;
-(BOOL)_lock_saveContentInfoForAsset:(id)arg1 ;
-(void)_lock_invokeAvailabilityHandlers;
-(void)_startAssetDownload;
-(BOOL)_ignoreAssetEqualityComparison;
-(id)_lastModifiedDateForFileAtURL:(id)arg1 ;
-(id)_lock_currentOntologyAssetFileURL;
-(long long)_hoursSinceLastModifiedForFileAtURL:(id)arg1 ;
-(id)AWDMetricPosterBlock;
-(void)setCurrentOntologyAsset:(MAAsset *)arg1 ;
-(void)setAWDMetricPosterBlock:(id)arg1 ;
-(void)setAssetFileURL:(NSURL *)arg1 ;
-(MAAsset *)currentOntologyAsset;
-(MAAsset *)latestOntologyAsset;
-(void)setLatestOntologyAsset:(MAAsset *)arg1 ;
-(void)setSimulatedCompatibilityVersion:(long long)arg1 ;
-(void)setAssetDownloadEnabled:(BOOL)arg1 ;
@end

