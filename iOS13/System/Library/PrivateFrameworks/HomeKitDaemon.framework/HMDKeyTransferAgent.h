/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, HMDHomeManager, NSUUID, HMFMessageDestination;

@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver> {

	NSString* _progressState;
	unsigned long long _residentProvisioningStatus;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHomeManager* _homeManager;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * progressState;                                        //@synthesize progressState=_progressState - In the implementation block
@property (copy,readonly) HMFMessageDestination * messageDestination; 
@property (readonly) unsigned long long residentProvisioningStatus;                           //@synthesize residentProvisioningStatus=_residentProvisioningStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSString *)progressState;
-(HMDHomeManager *)homeManager;
-(HMFMessageDestination *)messageDestination;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(unsigned long long)residentProvisioningStatus;
-(void)beginPairingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetConfig;
-(void)setProgressState:(NSString *)arg1 ;
@end

