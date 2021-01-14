/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMFPreferences;

@interface HMDCameraRecordingManagerDependencyFactory : HMFObject

@property (readonly) HMFPreferences * preferences; 
-(HMFPreferences *)preferences;
-(id)createSessionNotificationTrigger:(id)arg1 workQueue:(id)arg2 ;
-(id)createSettingsControl:(id)arg1 accessory:(id)arg2 managementService:(id)arg3 ;
-(id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg1 accessory:(id)arg2 ;
-(id)createDataSource;
-(id)createSignificantEventServerWithWorkQueue:(id)arg1 camera:(id)arg2 ;
-(id)createRecordingSessionWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 significantEventServer:(id)arg5 homePresenceByPairingIdentity:(id)arg6 ;
-(id)createTimerWithTimeInterval:(double)arg1 ;
-(id)createRecordingSessionRetryContextWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
@end

