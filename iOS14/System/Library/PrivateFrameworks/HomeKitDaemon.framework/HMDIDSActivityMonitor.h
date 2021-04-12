/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDIDSActivityMonitorDataSource;
@class IDSActivityMonitor, NSString;

@interface HMDIDSActivityMonitor : NSObject <HMFLogging> {

	id<HMDIDSActivityMonitorDataSource> _dataSource;
	IDSActivityMonitor* _activityMonitor;

}

@property (readonly) IDSActivityMonitor * activityMonitor;                                //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (nonatomic,retain) id<HMDIDSActivityMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id<HMDIDSActivityMonitorDataSource>)dataSource;
-(id)logIdentifier;
-(NSString *)description;
-(void)setDataSource:(id<HMDIDSActivityMonitorDataSource>)arg1 ;
-(IDSActivityMonitor *)activityMonitor;
-(void)listenWithDelegate:(id)arg1 ;
-(void)broadcastSubActivity:(id)arg1 toPushTokens:(id)arg2 ;
-(void)stopBroadcastingSubActivity:(id)arg1 ;
@end

