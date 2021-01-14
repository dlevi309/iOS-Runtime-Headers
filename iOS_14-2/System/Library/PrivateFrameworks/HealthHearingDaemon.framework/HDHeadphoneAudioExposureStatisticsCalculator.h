/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@protocol OS_dispatch_queue;
@class HDProfile, HDHeadphoneDoseMetadataStore, NSObject, HDHeadphoneAudioExposureBucketCollection, NSMutableArray;

@interface HDHeadphoneAudioExposureStatisticsCalculator : NSObject {

	HDProfile* _profile;
	HDHeadphoneDoseMetadataStore* _keyValueStore;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _setup;
	BOOL _needsRebuild;
	HDHeadphoneAudioExposureBucketCollection* _memoryCache;
	NSMutableArray* _pendingSamples;
	/*^block*/id _unitTesting_didUpdatePreviousSevenDayNotificationFireDate;

}

@property (nonatomic,copy) id unitTesting_didUpdatePreviousSevenDayNotificationFireDate;              //@synthesize unitTesting_didUpdatePreviousSevenDayNotificationFireDate=_unitTesting_didUpdatePreviousSevenDayNotificationFireDate - In the implementation block
@property (nonatomic,readonly) BOOL needsRebuild;                                                     //@synthesize needsRebuild=_needsRebuild - In the implementation block
@property (getter=isSetup,nonatomic,readonly) BOOL setup;                                             //@synthesize setup=_setup - In the implementation block
-(void)setNeedsRebuild;
-(BOOL)isSetup;
-(BOOL)needsRebuild;
-(id)initWithProfile:(id)arg1 keyValueStore:(id)arg2 ;
-(id)updateWithExposure:(id)arg1 assertion:(id)arg2 error:(id*)arg3 ;
-(id)pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)rebuildWithAssertion:(id)arg1 error:(id*)arg2 ;
-(id)updateWithNotifications:(id)arg1 assertion:(id)arg2 error:(id*)arg3 ;
-(id)unitTesting_snapshotBuckets;
-(id)_initWithProfile:(id)arg1 keyValueStore:(id)arg2 daemonDidBecomeReadyHandler:(/*^block*/id)arg3 ;
-(id)_rebuildWithAssertion:(id)arg1 allowInitialQueriesToFail:(BOOL)arg2 resetDoseToZero:(BOOL)arg3 error:(id*)arg4 ;
-(id)_setupWithAssertion:(id)arg1 error:(id*)arg2 ;
-(id)_updateWithExposure:(id)arg1 replaying:(BOOL)arg2 assertion:(id)arg3 error:(id*)arg4 ;
-(void)_setNeedsRebuild:(BOOL)arg1 ;
-(id)_loadCacheWithError:(id*)arg1 ;
-(id)_loadBucketsFromProfile:(id)arg1 needsRebuild:(BOOL*)arg2 error:(id*)arg3 ;
-(id)_updateWithExposure:(id)arg1 replaying:(BOOL)arg2 error:(id*)arg3 ;
-(id)unitTesting_pendingSamples;
-(void)unitTesting_clearNeedsRebuild;
-(id)unitTesting_didUpdatePreviousSevenDayNotificationFireDate;
-(void)setUnitTesting_didUpdatePreviousSevenDayNotificationFireDate:(id)arg1 ;
@end

