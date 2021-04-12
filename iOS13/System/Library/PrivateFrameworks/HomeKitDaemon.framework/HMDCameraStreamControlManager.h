/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraStreamControlManagerDelegate, OS_dispatch_queue;
@class NSObject, HMDAccessory, HMDService, NSNumber, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDCameraStreamMetrics, NSString;

@interface HMDCameraStreamControlManager : HMFObject <HMFLogging> {

	id<HMDCameraStreamControlManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	HMDAccessory* _accessory;
	HMDService* _streamManagementService;
	NSNumber* _slotIdentifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraStreamSessionID* _sessionID;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	HMDCameraStreamMetrics* _streamMetrics;

}

@property (nonatomic,__weak,readonly) id<HMDCameraStreamControlManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMDService * streamManagementService;                                   //@synthesize streamManagementService=_streamManagementService - In the implementation block
@property (nonatomic,retain) NSNumber * slotIdentifier;                                                //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;                 //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamMetrics * streamMetrics;                                 //@synthesize streamMetrics=_streamMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraStreamControlManagerDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(HMDCameraStreamSessionID *)sessionID;
-(void)_reportError:(id)arg1 ;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(id)managerProtocol;
-(NSNumber *)slotIdentifier;
-(void)setSlotIdentifier:(NSNumber *)arg1 ;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(void)_callStreamStopped:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(BOOL)arg8 ;
-(void)_reportInternalErrorCode:(long long)arg1 ;
-(void)_reportErrorCode:(long long)arg1 ;
-(void)_callStreamNegotiated:(id)arg1 ;
-(void)_cleanUpStreamSession:(id)arg1 ;
-(void)_callStreamStarted;
-(void)_callStreamRemoteConnectionSetup;
-(void)_callStreamFirstFrameReceived:(unsigned long long)arg1 aspectRatio:(id)arg2 slotIdentifier:(id)arg3 ;
-(void)_callStreamReconfigured;
-(HMDCameraStreamMetrics *)streamMetrics;
-(HMDService *)streamManagementService;
@end

