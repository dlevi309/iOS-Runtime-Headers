/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSArray, NSUUID, HMFMessageDispatcher, HMDHome;


@protocol HMDMediaActionRouterDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * enabledResidents; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher; 
@property (__weak,readonly) HMDHome * home; 
@required
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(id)mediaProfileWithUUID:(id)arg1;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSArray *)enabledResidents;

@end

