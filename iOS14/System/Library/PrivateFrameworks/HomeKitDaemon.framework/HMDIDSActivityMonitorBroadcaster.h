/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate.h>

@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSource, OS_dispatch_queue;
@class HMFTimer, HMDIDSActivityMonitor, NSObject, NSString;

@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> {

	HMFTimer* _debounceTimer;
	HMDIDSActivityMonitor* _activityMonitor;
	id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> _dataSource;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) HMDIDSActivityMonitor * activityMonitor;                                       //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (retain) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource>)dataSource;
-(id)logIdentifier;
-(void)setDataSource:(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSource>)arg1 ;
-(HMDIDSActivityMonitor *)activityMonitor;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithActivityMonitor:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)configureWithQueue:(id)arg1 ;
-(id)initWithActivityMonitor:(id)arg1 timer:(id)arg2 ;
-(void)dataSourceDidUpdate:(id)arg1 ;
@end

