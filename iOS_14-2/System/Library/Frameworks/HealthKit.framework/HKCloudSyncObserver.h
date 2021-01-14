/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKCloudSyncObserverClientInterface.h>

@protocol HKCloudSyncObserverDelegate;
@class NSUUID, HKTaskServerProxyProvider, NSProgress, HKCloudSyncObserverStatus, NSString;

@interface HKCloudSyncObserver : NSObject <_HKXPCExportable, HKCloudSyncObserverClientInterface> {

	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	NSProgress* _progress;
	HKCloudSyncObserverStatus* _status;
	id<HKCloudSyncObserverDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<HKCloudSyncObserverDelegate> delegate; 
@property (nonatomic,copy,readonly) HKCloudSyncObserverStatus * status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(void)connectionInvalidated;
-(id)progress;
-(id<HKCloudSyncObserverDelegate>)delegate;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 ;
-(void)_clientQueue_didCompleteSyncWithStatus:(long long)arg1 error:(id)arg2 ;
-(void)clientRemote_syncDidStart;
-(void)startObservingSyncStatus;
-(void)clientRemote_didUpdateObserverWithSyncStatus:(id)arg1 ;
-(void)startSyncIfRestoreNotCompleted;
-(id)remoteInterface;
-(void)setDelegate:(id<HKCloudSyncObserverDelegate>)arg1 ;
-(void)setProgress:(id)arg1 ;
-(void)setStatus:(HKCloudSyncObserverStatus *)arg1 ;
-(HKCloudSyncObserverStatus *)status;
@end

