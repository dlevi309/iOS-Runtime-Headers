/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMCameraUserSettingsDelegate;
@class HMFUnfairLock, _HMCameraUserSettings, _HMContext, HMAccessory, NSUUID, HMCameraBulletinBoardSmartNotification, NSString;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	_HMCameraUserSettings* _cameraUserSettings;
	id<HMCameraUserSettingsDelegate> _delegate;
	_HMContext* _context;
	HMAccessory* _accessory;

}

@property (retain) _HMCameraUserSettings * cameraUserSettings;                                                           //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,retain) _HMContext * context;                                                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                                                             //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long supportedFeatures; 
@property (readonly) unsigned long long currentAccessMode; 
@property (readonly) unsigned long long recordingStorageDuration; 
@property (readonly) unsigned long long recordingEventTriggers; 
@property (getter=areSnapshotsAllowed,readonly) BOOL snapshotsAllowed; 
@property (readonly) HMCameraBulletinBoardSmartNotification * smartNotificationBulletin; 
@property (getter=isAccessModeIndicatorEnabled,readonly) BOOL accessModeIndicatorEnabled; 
@property (getter=isNightVisionModeEnabled,readonly) BOOL nightVisionModeEnabled; 
@property (getter=isRecordingAudioEnabled,readonly) BOOL recordingAudioEnabled; 
@property (getter=isAccessModeChangeNotificationEnabled,readonly) BOOL accessModeChangeNotificationEnabled; 
@property (getter=isCameraManuallyDisabled,readonly) BOOL cameraManuallyDisabled; 
@property (__weak) id<HMCameraUserSettingsDelegate> delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSString *)description;
-(id<HMCameraUserSettingsDelegate>)delegate;
-(void)setDelegate:(id<HMCameraUserSettingsDelegate>)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setContext:(_HMContext *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(unsigned long long)supportedFeatures;
-(id)messageDestination;
-(void)setCameraUserSettings:(_HMCameraUserSettings *)arg1 ;
-(_HMCameraUserSettings *)cameraUserSettings;
-(void)configureWithAccessory:(id)arg1 context:(id)arg2 ;
-(id)initWithCameraUserSettings:(id)arg1 ;
-(void)_mergeNewSettings:(id)arg1 operations:(id)arg2 ;
-(HMCameraBulletinBoardSmartNotification *)smartNotificationBulletin;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(BOOL)isAccessModeIndicatorEnabled;
-(BOOL)areSnapshotsAllowed;
-(BOOL)isNightVisionModeEnabled;
-(BOOL)isRecordingAudioEnabled;
-(BOOL)isAccessModeChangeNotificationEnabled;
-(BOOL)isCameraManuallyDisabled;
-(void)updateWithSettings:(id)arg1 ;
-(void)_callSettingsDidUpdateDelegate;
-(unsigned long long)accessModeForPresenceType:(unsigned long long)arg1 ;
-(void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateRecordingStorageDuration:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeIndicatorEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSnapshotsAllowed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateNightVisionModeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecordingAudioEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeChangeNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)recordingStorageDuration;
@end

