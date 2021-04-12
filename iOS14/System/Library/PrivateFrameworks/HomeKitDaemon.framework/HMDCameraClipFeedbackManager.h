/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, HMBLocalZone, HMFMessageDispatcher, HMDCameraClipFeedbackUploader, HMDHome, NSNotificationCenter, NSString;

@interface HMDCameraClipFeedbackManager : HMFObject <HMFLogging, HMFMessageReceiver> {

	NSUUID* _messageTargetUUID;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMBLocalZone* _localZone;
	HMFMessageDispatcher* _messageDispatcher;
	HMDCameraClipFeedbackUploader* _feedbackUploader;
	NSUUID* _cameraProfileUUID;
	HMDHome* _home;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMBLocalZone * localZone;                                                //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDCameraClipFeedbackUploader * feedbackUploader;                        //@synthesize feedbackUploader=_feedbackUploader - In the implementation block
@property (copy,readonly) NSUUID * cameraProfileUUID;                                         //@synthesize cameraProfileUUID=_cameraProfileUUID - In the implementation block
@property (readonly) HMDHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                    //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNotificationCenter *)notificationCenter;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSUUID *)cameraProfileUUID;
-(HMBLocalZone *)localZone;
-(HMDHome *)home;
-(BOOL)isCurrentDeviceConfirmedPrimaryResident;
-(void)handlePrimaryResidentUpdateNotification:(id)arg1 ;
-(id)initWithLocalZone:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 cameraProfileUUID:(id)arg4 messageTargetUUID:(id)arg5 feedbackUploader:(id)arg6 workQueue:(id)arg7 ;
-(void)configureWithHome:(id)arg1 deviceIsResidentCapable:(BOOL)arg2 ;
-(void)_handleSubmitClipsMessage:(id)arg1 ;
-(void)_handleFindAndUploadSubmittedClipsMessage:(id)arg1 ;
-(void)findAndUploadSubmittedClips;
-(void)_uploadNextClipFromQueryResult:(id)arg1 ;
-(HMDCameraClipFeedbackUploader *)feedbackUploader;
-(void)_notifyPrimaryResidentThatClipsWereSubmitted;
@end

