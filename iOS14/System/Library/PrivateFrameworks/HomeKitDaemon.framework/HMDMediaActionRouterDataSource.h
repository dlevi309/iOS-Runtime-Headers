/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSArray, HMDDevice, NSUUID, HMFMessageDispatcher, HMDLogEventDispatcher, HMDHome;


@protocol HMDMediaActionRouterDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * enabledResidents; 
@property (nonatomic,copy,readonly) NSArray * appleMediaAccessories; 
@property (nonatomic,__weak,readonly) HMDDevice * companionDevice; 
@property (getter=isCompanionReachable,nonatomic,readonly) BOOL companionReachable; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher; 
@property (nonatomic,readonly) HMDLogEventDispatcher * logEventDispatcher; 
@property (__weak,readonly) HMDHome * home; 
@required
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(id)mediaProfileWithUUID:(id)arg1;
-(HMDDevice *)companionDevice;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMDHome *)home;
-(NSArray *)appleMediaAccessories;
-(BOOL)isCompanionReachable;
-(NSArray *)enabledResidents;
-(HMDLogEventDispatcher *)logEventDispatcher;

@end

