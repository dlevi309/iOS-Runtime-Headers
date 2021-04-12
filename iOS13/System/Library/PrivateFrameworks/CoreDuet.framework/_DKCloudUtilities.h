/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue;
@class NSObject, _DKThrottledActivity;

@interface _DKCloudUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	_DKThrottledActivity* _activityThrottler;
	BOOL _supportsDeviceToDeviceEncryption;
	BOOL _isSingleDevice;

}

@property (nonatomic,readonly) BOOL isSingleDevice; 
@property (nonatomic,readonly) BOOL isCloudSyncAvailable; 
@property (nonatomic,readonly) BOOL isSiriCloudSyncEnabled; 
@property (nonatomic,readonly) BOOL supportsDeviceToDeviceEncryption; 
+(id)sharedInstance;
+(BOOL)isUnitTesting;
+(BOOL)isCloudKitEnabled;
+(BOOL)isSyncAvailableAndEnabled;
+(BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)arg1 ;
+(id)containerIdentifier;
+(void)setCloudKitEnabled:(BOOL)arg1 ;
+(void)setUnitTesting:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isSingleDevice;
-(id)keyValueStore;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(BOOL)isCloudSyncAvailable;
-(BOOL)isSiriCloudSyncEnabled;
-(void)_accountDidChange:(id)arg1 ;
-(void)_fetchCloudKitConfigurationAndStatus;
-(void)_updateNumberOfSyncedDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchAccountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateAccountInfo:(id)arg1 error:(id)arg2 ;
-(BOOL)supportsDeviceToDeviceEncryption;
-(void)_performUpdateNumberOfSyncedDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performUpdateNumberOfSyncedDevicesWithAttempt:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)containerKeyValueStore;
-(void)setCloudSyncAvailable:(BOOL)arg1 ;
@end

