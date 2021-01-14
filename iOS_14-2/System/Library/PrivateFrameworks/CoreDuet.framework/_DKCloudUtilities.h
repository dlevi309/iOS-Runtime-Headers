/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)setUnitTesting:(BOOL)arg1 ;
+(BOOL)isCloudKitEnabled;
+(id)sharedInstance;
+(id)containerIdentifier;
+(void)setCloudKitEnabled:(BOOL)arg1 ;
+(BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)arg1 ;
+(BOOL)isUnitTesting;
+(BOOL)isSyncAvailableAndEnabled;
-(BOOL)isSiriCloudSyncEnabled;
-(id)init;
-(void)_accountDidChange:(id)arg1 ;
-(void)deleteRemoteStateWithReply:(/*^block*/id)arg1 ;
-(BOOL)supportsDeviceToDeviceEncryption;
-(BOOL)isCloudSyncAvailable;
-(BOOL)isSingleDevice;
-(void)setCloudSyncAvailable:(BOOL)arg1 ;
-(void)dealloc;
@end

