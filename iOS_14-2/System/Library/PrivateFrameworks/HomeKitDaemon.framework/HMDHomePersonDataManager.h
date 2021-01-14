/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class HMDHomePersonManager, NSObject, NSUUID, HMDHome, NSString;

@interface HMDHomePersonDataManager : HMFObject <HMFLogging, HMFMessageReceiver> {

	HMDHomePersonManager* _personManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _homeUUID;
	HMDHome* _home;
	/*^block*/id _personManagerFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSUUID * homeUUID;                                                  //@synthesize homeUUID=_homeUUID - In the implementation block
@property (__weak) HMDHome * home;                                                            //@synthesize home=_home - In the implementation block
@property (retain) HMDHomePersonManager * personManager;                                      //@synthesize personManager=_personManager - In the implementation block
@property (copy) id personManagerFactory;                                                     //@synthesize personManagerFactory=_personManagerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSUUID *)homeUUID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)configure;
-(id)logIdentifier;
-(void)setPersonManager:(HMDHomePersonManager *)arg1 ;
-(HMDHomePersonManager *)personManager;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(void)removeCloudData;
-(void)handleUpdatedSettingsModel:(id)arg1 previousSettingsModel:(id)arg2 message:(id)arg3 ;
-(id)initWithHome:(id)arg1 workQueue:(id)arg2 ;
-(id)updateSettingsModelWithSettings:(id)arg1 ;
-(void)handleFetchSettingsMessage:(id)arg1 ;
-(id)personManagerFactory;
-(void)setPersonManagerFactory:(id)arg1 ;
-(void)handleUpdateSettingsMessage:(id)arg1 ;
-(void)configurePersonManager;
@end

