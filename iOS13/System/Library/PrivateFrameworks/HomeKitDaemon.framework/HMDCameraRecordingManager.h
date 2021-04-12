/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraRecordingSessionNotificationTriggerDelegate.h>
#import <libobjc.A.dylib/HMDCameraRecordingSettingsControlDelegate.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraRecordingSessionDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMDCameraClipManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, HMDDataStreamBulkSendSession;
@class NSUUID, HMDStreamDataChunkAssembler, HMDCameraRecordingResidentElector, HMDCameraRecordingBulkSendDataReadEvent, NSObject, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSettingsControl, HMDCameraRecordingManagerDependencyFactory, HMFMessageDispatcher, HMDHAPAccessory, HMDCameraProfile, HMDCameraRecordingBulkSendSessionInitiator, HMFTimer, HMDCameraRecordingSessionRetryContext, HMDCameraRecordingSession, NSMutableSet, NSString, NSDictionary, NSSet;

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate> {

	BOOL _didShutDown;
	BOOL _motionActive;
	NSUUID* _messageTargetUUID;
	HMDStreamDataChunkAssembler* _dataChunkAssembler;
	HMDCameraRecordingResidentElector* _recordingResidentElector;
	HMDCameraRecordingBulkSendDataReadEvent* _readEvent;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraRecordingSessionNotificationTrigger* _notificationTrigger;
	HMDCameraRecordingSettingsControl* _recordingSettingsControl;
	HMDCameraRecordingManagerDependencyFactory* _dependencyFactory;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHAPAccessory* _accessory;
	HMDCameraProfile* _camera;
	id<HMDDataStreamBulkSendSession> _currentBulkSendSession;
	HMDCameraRecordingBulkSendSessionInitiator* _bulkSendSessionInitiator;
	HMFTimer* _readCallbackTimer;
	HMFTimer* _sessionRetryTimer;
	HMDCameraRecordingSessionRetryContext* _sessionRetryContext;
	HMDCameraRecordingSession* _currentRecordingSession;
	NSMutableSet* _activeRecordingSessions;

}

@property (retain) HMDStreamDataChunkAssembler * dataChunkAssembler;                                     //@synthesize dataChunkAssembler=_dataChunkAssembler - In the implementation block
@property (readonly) NSString * logIdentifier; 
@property (readonly) HMDCameraRecordingResidentElector * recordingResidentElector;                       //@synthesize recordingResidentElector=_recordingResidentElector - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity; 
@property (retain) HMDCameraRecordingBulkSendDataReadEvent * readEvent;                                  //@synthesize readEvent=_readEvent - In the implementation block
@property (assign) BOOL didShutDown;                                                                     //@synthesize didShutDown=_didShutDown - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                             //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDCameraRecordingSessionNotificationTrigger * notificationTrigger;                 //@synthesize notificationTrigger=_notificationTrigger - In the implementation block
@property (readonly) HMDCameraRecordingSettingsControl * recordingSettingsControl;                       //@synthesize recordingSettingsControl=_recordingSettingsControl - In the implementation block
@property (readonly) HMDCameraRecordingManagerDependencyFactory * dependencyFactory;                     //@synthesize dependencyFactory=_dependencyFactory - In the implementation block
@property (readonly) HMFMessageDispatcher * msgDispatcher;                                               //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                                 //@synthesize accessory=_accessory - In the implementation block
@property (__weak,readonly) HMDCameraProfile * camera;                                                   //@synthesize camera=_camera - In the implementation block
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;                              //@synthesize currentBulkSendSession=_currentBulkSendSession - In the implementation block
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator * bulkSendSessionInitiator;              //@synthesize bulkSendSessionInitiator=_bulkSendSessionInitiator - In the implementation block
@property (retain) HMFTimer * readCallbackTimer;                                                         //@synthesize readCallbackTimer=_readCallbackTimer - In the implementation block
@property (retain) HMFTimer * sessionRetryTimer;                                                         //@synthesize sessionRetryTimer=_sessionRetryTimer - In the implementation block
@property (retain) HMDCameraRecordingSessionRetryContext * sessionRetryContext;                          //@synthesize sessionRetryContext=_sessionRetryContext - In the implementation block
@property (getter=isMotionActive) BOOL motionActive;                                                     //@synthesize motionActive=_motionActive - In the implementation block
@property (retain) HMDCameraRecordingSession * currentRecordingSession;                                  //@synthesize currentRecordingSession=_currentRecordingSession - In the implementation block
@property (readonly) NSMutableSet * activeRecordingSessions;                                             //@synthesize activeRecordingSessions=_activeRecordingSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                               //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(void)dealloc;
-(void)start;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)shutDown;
-(HMDCameraProfile *)camera;
-(HMDHAPAccessory *)accessory;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDCameraRecordingManagerDependencyFactory *)dependencyFactory;
-(HMFMessageDispatcher *)msgDispatcher;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(HMDCameraRecordingResidentElector *)recordingResidentElector;
-(void)_shutDown;
-(BOOL)didShutDown;
-(void)setMotionActive:(BOOL)arg1 ;
-(HMDCameraRecordingSession *)currentRecordingSession;
-(void)_resetRetryContextWithReason:(id)arg1 ;
-(void)_coordinateRecordingSessionForAccessory:(unsigned long long)arg1 ;
-(void)_clipManagerDidBecomeAvailable;
-(void)_closeCurrentSessionsWithReason:(unsigned short)arg1 ;
-(BOOL)isMotionActive;
-(HMDCameraRecordingSettingsControl *)recordingSettingsControl;
-(HMDCameraRecordingBulkSendSessionInitiator *)bulkSendSessionInitiator;
-(HMDCameraRecordingSessionNotificationTrigger *)notificationTrigger;
-(void)handleStartRecordingSessionRequest:(id)arg1 ;
-(void)handleCameraSettingsDidChangeNotification:(id)arg1 ;
-(void)setDidShutDown:(BOOL)arg1 ;
-(BOOL)_canAnyDeviceStartRecordingSession;
-(NSDictionary *)homePresenceByPairingIdentity;
-(void)_startRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3 ;
-(void)_forwardRecordingSession:(unsigned long long)arg1 withSortedDevices:(id)arg2 withRetries:(long long)arg3 ;
-(void)setCurrentRecordingSession:(HMDCameraRecordingSession *)arg1 ;
-(NSMutableSet *)activeRecordingSessions;
-(void)_startRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3 completionCallback:(/*^block*/id)arg4 ;
-(HMFTimer *)sessionRetryTimer;
-(id<HMDDataStreamBulkSendSession>)currentBulkSendSession;
-(void)_createRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 ;
-(void)_resetCurrentRecordingSession:(id)arg1 ;
-(void)_handleBulkSendSessionCreated:(id)arg1 ;
-(void)setReadEvent:(HMDCameraRecordingBulkSendDataReadEvent *)arg1 ;
-(HMDCameraRecordingBulkSendDataReadEvent *)readEvent;
-(void)_submitReadEventWithStatus:(unsigned short)arg1 ;
-(void)_startBulkSendDataReadEvent;
-(void)setCurrentBulkSendSession:(id<HMDDataStreamBulkSendSession>)arg1 ;
-(void)_readDataForCurrentSession;
-(void)setReadCallbackTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)readCallbackTimer;
-(void)_handleDataReceived:(id)arg1 ;
-(void)setSessionRetryTimer:(HMFTimer *)arg1 ;
-(HMDCameraRecordingSessionRetryContext *)sessionRetryContext;
-(HMDStreamDataChunkAssembler *)dataChunkAssembler;
-(void)setDataChunkAssembler:(HMDStreamDataChunkAssembler *)arg1 ;
-(void)_bulkSendReadDidReceiveStreamDataChunk:(id)arg1 ;
-(void)setSessionRetryContext:(HMDCameraRecordingSessionRetryContext *)arg1 ;
-(void)_startSessionRetryTimer;
-(unsigned short)_closeEventReasonForRecordingSessionError:(id)arg1 ;
-(void)notificationTrigger:(id)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(BOOL)arg3 ;
-(void)recordingSettingsControlDidConfigure:(id)arg1 ;
-(void)closeSession:(id)arg1 withError:(id)arg2 ;
-(void)clipManagerDidBecomeAvailable:(id)arg1 ;
-(void)clipManagerDidBecomeUnavailable:(id)arg1 ;
-(id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2 dependencyFactory:(id)arg3 ;
@end

