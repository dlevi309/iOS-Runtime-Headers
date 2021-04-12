/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDDevice, HMDAccessory, HMDCameraSnapshotSessionID, NSObject, NSString;

@interface HMDCameraSnapshotSender : HMFObject <HMFLogging> {

	NSUUID* _uniqueIdentifier;
	HMDDevice* _device;
	HMDAccessory* _accessory;
	HMDCameraSnapshotSessionID* _sessionID;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                      //@synthesize device=_device - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)uniqueIdentifier;
-(HMDDevice *)device;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(HMDCameraSnapshotSessionID *)sessionID;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 ;
-(void)_sendImageSendFailure:(id)arg1 ;
@end

