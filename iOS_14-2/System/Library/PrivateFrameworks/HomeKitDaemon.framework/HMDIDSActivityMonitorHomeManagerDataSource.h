/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDIDSActivityMonitorDataSource.h>

@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;
@class HMDHomeManager, NSString;

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource> {

	id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;
	HMDHomeManager* _homeManager;

}

@property (readonly) HMDHomeManager * homeManager;                                                        //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate; 
+(id)logCategory;
-(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>)delegate;
-(void)start;
-(id)currentDevice;
-(void)setDelegate:(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)startObservingDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)stopObservingDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)startWithNotificationCenter:(id)arg1 ;
-(void)handleDeviceAdded:(id)arg1 ;
-(void)handleDeviceRemoved:(id)arg1 ;
-(void)handleRegistrationUpdated:(id)arg1 ;
-(BOOL)homeHasCamera:(id)arg1 ;
@end

