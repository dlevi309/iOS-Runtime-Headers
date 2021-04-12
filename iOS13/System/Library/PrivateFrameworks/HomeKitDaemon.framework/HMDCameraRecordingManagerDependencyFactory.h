/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@interface HMDCameraRecordingManagerDependencyFactory : HMFObject
-(id)createSessionNotificationTrigger:(id)arg1 workQueue:(id)arg2 ;
-(id)createSettingsControl:(id)arg1 accessory:(id)arg2 managementService:(id)arg3 ;
-(id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg1 accessory:(id)arg2 ;
-(id)createRecordingSessionWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 ;
-(id)createTimerWithTimeInterval:(double)arg1 ;
-(id)createRecordingSessionRetryContextWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
@end

