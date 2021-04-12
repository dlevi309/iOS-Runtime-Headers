/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/_HMCameraUserSettings.h>

@class NSUUID, HMCameraUserNotificationSettings, NSSet;

@interface _HMMutableCameraUserSettings : _HMCameraUserSettings

@property (copy) NSUUID * UUID; 
@property (assign) unsigned long long supportedFeatures; 
@property (assign) unsigned long long accessModeAtHome; 
@property (assign) unsigned long long accessModeNotAtHome; 
@property (assign) unsigned long long currentAccessMode; 
@property (assign) unsigned long long recordingEventTriggers; 
@property (getter=areSnapshotsAllowed) BOOL snapshotsAllowed; 
@property (getter=arePeriodicSnapshotsAllowed) BOOL periodicSnapshotsAllowed; 
@property (getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled; 
@property (getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled; 
@property (getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled; 
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled; 
@property (copy) HMCameraUserNotificationSettings * notificationSettings; 
@property (copy) NSSet * activityZones; 
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

