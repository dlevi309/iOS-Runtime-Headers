/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDCameraSnapshotSessionID, NSObject, HMDAccessory, NSDictionary, HMDSnapshotFile, HMDSnapshotRequestHandler, HMDCameraResidentMessageHandler, HMDCameraSnapshotMetrics, NSString;

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging> {

	NSUUID* _uniqueIdentifier;
	HMDCameraSnapshotSessionID* _sessionID;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDAccessory* _accessory;
	NSDictionary* _options;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDSnapshotFile* _snapshotFile;
	HMDSnapshotRequestHandler* _snapshotRequestHandler;
	HMDCameraResidentMessageHandler* _residentMessageHandler;
	HMDCameraSnapshotMetrics* _snapshotMetrics;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                       //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) HMDSnapshotFile * snapshotFile;                                          //@synthesize snapshotFile=_snapshotFile - In the implementation block
@property (nonatomic,readonly) HMDSnapshotRequestHandler * snapshotRequestHandler;                    //@synthesize snapshotRequestHandler=_snapshotRequestHandler - In the implementation block
@property (nonatomic,readonly) HMDCameraResidentMessageHandler * residentMessageHandler;              //@synthesize residentMessageHandler=_residentMessageHandler - In the implementation block
@property (nonatomic,retain) HMDCameraSnapshotMetrics * snapshotMetrics;                              //@synthesize snapshotMetrics=_snapshotMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSDictionary *)options;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(HMDCameraSnapshotSessionID *)sessionID;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(HMDSnapshotRequestHandler *)snapshotRequestHandler;
-(void)setSnapshotFile:(HMDSnapshotFile *)arg1 ;
-(HMDSnapshotFile *)snapshotFile;
-(HMDCameraResidentMessageHandler *)residentMessageHandler;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 ;
-(id)_sendRequestWithTierType:(unsigned long long)arg1 toResident:(/*^block*/id)arg2 ;
-(void)_sendConfirmationToResident:(/*^block*/id)arg1 ;
-(HMDCameraSnapshotMetrics *)snapshotMetrics;
-(id)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setSnapshotMetrics:(HMDCameraSnapshotMetrics *)arg1 ;
@end

