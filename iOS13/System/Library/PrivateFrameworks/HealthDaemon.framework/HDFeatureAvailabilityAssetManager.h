/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NPSManager, NSURL, NSObject, _HKMobileAssetDownloadManager, HDPeriodicActivity, NSUserDefaults, NSString;

@interface HDFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate> {

	NPSManager* _syncManager;
	NSURL* _assetDirectoryOverride;
	double _retryInterval;
	NSObject*<OS_dispatch_queue> _queue;
	_HKMobileAssetDownloadManager* _downloadManager;
	HDPeriodicActivity* _periodicActivity;
	NSUserDefaults* _unitTest_defaults;
	/*^block*/id _unitTest_errorObserver;

}

@property (nonatomic,readonly) NPSManager * syncManager;                                   //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,readonly) NSURL * assetDirectoryOverride;                             //@synthesize assetDirectoryOverride=_assetDirectoryOverride - In the implementation block
@property (nonatomic,readonly) double retryInterval;                                       //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) _HKMobileAssetDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
@property (nonatomic,retain) HDPeriodicActivity * periodicActivity;                        //@synthesize periodicActivity=_periodicActivity - In the implementation block
@property (nonatomic,retain) NSUserDefaults * unitTest_defaults;                           //@synthesize unitTest_defaults=_unitTest_defaults - In the implementation block
@property (nonatomic,copy) id unitTest_errorObserver;                                      //@synthesize unitTest_errorObserver=_unitTest_errorObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithProfile:(id)arg1 ;
-(_HKMobileAssetDownloadManager *)downloadManager;
-(NPSManager *)syncManager;
-(double)retryInterval;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDPeriodicActivity *)periodicActivity;
-(NSURL *)assetDirectoryOverride;
-(void)setDownloadManager:(_HKMobileAssetDownloadManager *)arg1 ;
-(void)_configureDownloadManager;
-(void)_queue_downloadDidCompleteWithAssets:(id)arg1 ;
-(void)_queue_downloadDidCompleteWithError:(id)arg1 ;
-(NSUserDefaults *)unitTest_defaults;
-(id)unitTest_errorObserver;
-(void)setPeriodicActivity:(HDPeriodicActivity *)arg1 ;
-(void)setUnitTest_defaults:(NSUserDefaults *)arg1 ;
-(void)setUnitTest_errorObserver:(id)arg1 ;
@end

