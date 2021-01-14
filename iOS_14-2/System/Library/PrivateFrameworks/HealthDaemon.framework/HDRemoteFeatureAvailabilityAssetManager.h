/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, _HKMobileAssetDownloadManager, HDPeriodicActivity, NSUserDefaults, NSString;

@interface HDRemoteFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate> {

	NSURL* _assetDirectoryOverride;
	double _retryInterval;
	NSObject*<OS_dispatch_queue> _queue;
	_HKMobileAssetDownloadManager* _downloadManager;
	HDPeriodicActivity* _periodicActivity;
	NSUserDefaults* _unitTest_defaults;
	/*^block*/id _unitTest_errorObserver;

}

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
+(BOOL)_isInTestMode;
-(void)setUnitTest_errorObserver:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(double)retryInterval;
-(void)_configureDownloadManager;
-(NSUserDefaults *)unitTest_defaults;
-(NSURL *)assetDirectoryOverride;
-(void)_queue_downloadDidCompleteWithError:(id)arg1 ;
-(void)setUnitTest_defaults:(NSUserDefaults *)arg1 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(_HKMobileAssetDownloadManager *)downloadManager;
-(void)setDownloadManager:(_HKMobileAssetDownloadManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDPeriodicActivity *)periodicActivity;
-(void)_updateMobileAssetsDownloadedMetricDefaultsValues;
-(id)unitTest_errorObserver;
-(void)setPeriodicActivity:(HDPeriodicActivity *)arg1 ;
-(void)_queue_downloadDidCompleteWithAssets:(id)arg1 ;
@end

