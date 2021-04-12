/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDContentProtectionObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDAssertion, HDProfile, NSObject, NSString;

@interface HDCloudSyncManager : NSObject <HDContentProtectionObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {

	HDAssertion* _preparedDatabaseAccessibilityAssertion;
	BOOL _supportsRebase;
	BOOL _shouldResync;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	long long _inProgressSyncCount;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL shouldResync;                                          //@synthesize shouldResync=_shouldResync - In the implementation block
@property (assign,nonatomic) long long inProgressSyncCount;                              //@synthesize inProgressSyncCount=_inProgressSyncCount - In the implementation block
@property (retain) HDAssertion * preparedDatabaseAccessibilityAssertion;                 //@synthesize preparedDatabaseAccessibilityAssertion=_preparedDatabaseAccessibilityAssertion - In the implementation block
@property (readonly) long long bytesPerChangeRecordAssetThreshold; 
@property (readonly) long long bytesPerChangeRecordAssetThresholdHardLimit; 
@property (nonatomic,readonly) BOOL supportsRebase;                                      //@synthesize supportsRebase=_supportsRebase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_containerIdentifiersWithEncryptionSupportEnabled:(BOOL)arg1 accountManateeEnabled:(BOOL)arg2 internalSettingManateeEnabled:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2 ;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(long long)bytesPerChangeRecordAssetThreshold;
-(long long)bytesPerChangeRecordAssetThresholdHardLimit;
-(id)lastPushForwardProgressDate;
-(void)fetchSyncStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1 ;
-(void)disableSyncLocallyWithTaskTree:(id)arg1 ;
-(id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 ;
-(id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 ;
-(id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)prepareForSync;
-(void)requestImmediateResync;
-(HDAssertion *)preparedDatabaseAccessibilityAssertion;
-(void)_queue_updateAccessibilityAssertion;
-(id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 taskTree:(id)arg3 permitResync:(BOOL)arg4 ;
-(BOOL)supportsRebase;
-(void)setPreparedDatabaseAccessibilityAssertion:(HDAssertion *)arg1 ;
-(void)queue_cloudSyncRepositoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)_addFinalProgressUpdateWithTaskTree:(id)arg1 progress:(id)arg2 ;
-(id)_containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_containerIdentifiersForCurrentAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_primaryContainerIdentifiersForCurrentAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_considerStartingBackstopSyncForThreshold:(double)arg1 ;
-(id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)syncSessionForSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 accessibilityAssertion:(id)arg4 excludedStores:(id)arg5 ;
-(void)fetchCloudKitEmailAddressWithCompletion:(/*^block*/id)arg1 ;
-(void)unitTest_setSupportsRebase:(BOOL)arg1 ;
-(BOOL)shouldResync;
-(void)setShouldResync:(BOOL)arg1 ;
-(long long)inProgressSyncCount;
-(void)setInProgressSyncCount:(long long)arg1 ;
@end

