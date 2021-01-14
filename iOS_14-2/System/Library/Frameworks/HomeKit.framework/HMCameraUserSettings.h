/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMCameraUserSettingsDelegate;
@class HMFUnfairLock, _HMCameraUserSettings, HMCameraBulletinBoardSmartNotification, _HMContext, HMAccessory, NSSet, NSUUID, NSString, NSArray;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject> {

	HMFUnfairLock* _lock;
	_HMCameraUserSettings* _cameraUserSettings;
	HMCameraBulletinBoardSmartNotification* _smartNotificationBulletin;
	id<HMCameraUserSettingsDelegate> _delegate;
	_HMContext* _context;
	HMAccessory* _accessory;

}

@property (copy) _HMCameraUserSettings * cameraUserSettings;                                                                                          //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (retain) HMCameraBulletinBoardSmartNotification * smartNotificationBulletin;                                                                //@synthesize smartNotificationBulletin=_smartNotificationBulletin - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                                                                                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                                                                                          //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long supportedFeatures; 
@property (readonly) unsigned long long currentAccessMode; 
@property (readonly) unsigned long long recordingEventTriggers; 
@property (getter=areSnapshotsAllowed,readonly) BOOL snapshotsAllowed; 
@property (getter=isAccessModeIndicatorEnabled,readonly) BOOL accessModeIndicatorEnabled; 
@property (getter=isNightVisionModeEnabled,readonly) BOOL nightVisionModeEnabled; 
@property (getter=isRecordingAudioEnabled,readonly) BOOL recordingAudioEnabled; 
@property (getter=isAccessModeChangeNotificationEnabled,readonly) BOOL accessModeChangeNotificationEnabled; 
@property (getter=isCameraManuallyDisabled,readonly) BOOL cameraManuallyDisabled; 
@property (getter=activityZones,readonly) NSSet * activityZones; 
@property (getter=areActivityZonesIncludedForSignificantEventDetection,readonly) BOOL activityZonesIncludedForSignificantEventDetection; 
@property (getter=isReachabilityChangeNotificationEnabled,readonly) BOOL reachabilityChangeNotificationEnabled; 
@property (getter=isReachabilityEventNotificationEnabled,readonly) BOOL reachabilityEventNotificationEnabled; 
@property (__weak) id<HMCameraUserSettingsDelegate> delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(id)shortDescription;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSString *)privateDescription;
-(id<HMCameraUserSettingsDelegate>)delegate;
-(NSString *)shortDescription;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(id)logIdentifier;
-(_HMContext *)context;
-(void)configureWithAccessory:(id)arg1 context:(id)arg2 ;
-(id)initWithCameraUserSettings:(id)arg1 ;
-(BOOL)isAccessModeChangeNotificationEnabled;
-(BOOL)isReachabilityEventNotificationEnabled;
-(void)_mergeNewSettings:(id)arg1 operations:(id)arg2 ;
-(void)setDelegate:(id<HMCameraUserSettingsDelegate>)arg1 ;
-(id)messageDestination;
-(NSString *)description;
-(unsigned long long)supportedFeatures;
-(NSArray *)attributeDescriptions;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)smartNotificationBulletinForSettings:(id)arg1 ;
-(void)setSmartNotificationBulletin:(HMCameraBulletinBoardSmartNotification *)arg1 ;
-(HMCameraBulletinBoardSmartNotification *)smartNotificationBulletin;
-(void)handleSettingsDidUpdateMessage:(id)arg1 ;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(void)updateActivityZones:(id)arg1 areActivityZonesIncludedForSignificantEventDetection:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateReachabilityEventNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateWithSettings:(id)arg1 ;
-(void)_callSettingsDidUpdateDelegate;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(BOOL)isAccessModeIndicatorEnabled;
-(BOOL)areSnapshotsAllowed;
-(BOOL)isNightVisionModeEnabled;
-(BOOL)isRecordingAudioEnabled;
-(BOOL)isCameraManuallyDisabled;
-(NSSet *)activityZones;
-(BOOL)areActivityZonesIncludedForSignificantEventDetection;
-(unsigned long long)accessModeForPresenceType:(unsigned long long)arg1 ;
-(void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeIndicatorEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSnapshotsAllowed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateNightVisionModeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecordingAudioEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateActivityZones:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccessModeChangeNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateReachabilityChangeNotificationEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isReachabilityChangeNotificationEnabled;
-(_HMCameraUserSettings *)cameraUserSettings;
-(void)setCameraUserSettings:(_HMCameraUserSettings *)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
@end

