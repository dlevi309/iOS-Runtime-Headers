/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(unsigned long long)residentProvisioningStatus;
-(NSString *)progressState;
-(id)logIdentifier;
-(HMFMessageDestination *)messageDestination;
-(id)initWithHomeManager:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)beginPairingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetConfig;
-(void)setProgressState:(NSString *)arg1 ;
@end

