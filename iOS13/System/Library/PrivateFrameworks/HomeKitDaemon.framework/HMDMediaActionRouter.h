/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMPCSessionDataMediaProfileSource.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDMediaActionRouterDataSource;
@class HMDHome, HMDResidentDevice, HMDMPCSessionController, NSString, NSUUID;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver> {

	BOOL _shouldExecuteOnCurrentDevice;
	id<HMDMediaActionRouterDataSource> _dataSource;
	HMDResidentDevice* _targetResidentDeviceOverride;
	HMDMPCSessionController* _mpcSessionController;

}

@property (nonatomic,__weak,readonly) id<HMDMediaActionRouterDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL shouldExecuteOnCurrentDevice;                                  //@synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice - In the implementation block
@property (assign,nonatomic,__weak) HMDResidentDevice * targetResidentDeviceOverride;              //@synthesize targetResidentDeviceOverride=_targetResidentDeviceOverride - In the implementation block
@property (nonatomic,readonly) HMDMPCSessionController * mpcSessionController;                     //@synthesize mpcSessionController=_mpcSessionController - In the implementation block
@property (__weak,readonly) HMDHome * home; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(id)init;
-(void)dealloc;
-(HMDHome *)home;
-(id)initWithDataSource:(id)arg1 ;
-(id<HMDMediaActionRouterDataSource>)dataSource;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)mediaProfileWithUUID:(id)arg1 ;
-(void)_registerForMessages;
-(void)routeMessage:(id)arg1 ;
-(void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1 ;
-(void)executeMediaActionWithSessionData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(HMDResidentDevice *)targetResidentDeviceOverride;
-(HMDMPCSessionController *)mpcSessionController;
-(void)routeMediaActionForExecution:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldExecuteOnCurrentDevice;
-(void)setTargetResidentDeviceOverride:(HMDResidentDevice *)arg1 ;
@end

