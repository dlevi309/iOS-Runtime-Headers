/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMCameraBulletinBoardSmartNotification, NSString;

@interface _HMCameraUserSettings : NSObject <NSSecureCoding, HMFLogging> {

	BOOL _snapshotsAllowed;
	BOOL _accessModeIndicatorEnabled;
	BOOL _nightVisionModeEnabled;
	BOOL _recordingAudioEnabled;
	BOOL _accessModeChangeNotificationEnabled;
	BOOL _cameraManuallyDisabled;
	NSUUID* _uniqueIdentifier;
	unsigned long long _supportedFeatures;
	unsigned long long _accessModeAtHome;
	unsigned long long _accessModeNotAtHome;
	unsigned long long _currentAccessMode;
	unsigned long long _recordingEventTriggers;
	HMCameraBulletinBoardSmartNotification* _smartNotificationBulletin;

}

@property (readonly) NSUUID * uniqueIdentifier;                                                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long supportedFeatures;                                                               //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (readonly) unsigned long long accessModeAtHome;                                                                //@synthesize accessModeAtHome=_accessModeAtHome - In the implementation block
@property (readonly) unsigned long long accessModeNotAtHome;                                                             //@synthesize accessModeNotAtHome=_accessModeNotAtHome - In the implementation block
@property (readonly) unsigned long long currentAccessMode;                                                               //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (readonly) unsigned long long recordingEventTriggers;                                                          //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
@property (getter=areSnapshotsAllowed,readonly) BOOL snapshotsAllowed;                                                   //@synthesize snapshotsAllowed=_snapshotsAllowed - In the implementation block
@property (getter=isAccessModeIndicatorEnabled,readonly) BOOL accessModeIndicatorEnabled;                                //@synthesize accessModeIndicatorEnabled=_accessModeIndicatorEnabled - In the implementation block
@property (getter=isNightVisionModeEnabled,readonly) BOOL nightVisionModeEnabled;                                        //@synthesize nightVisionModeEnabled=_nightVisionModeEnabled - In the implementation block
@property (getter=isRecordingAudioEnabled,readonly) BOOL recordingAudioEnabled;                                          //@synthesize recordingAudioEnabled=_recordingAudioEnabled - In the implementation block
@property (getter=isAccessModeChangeNotificationEnabled,readonly) BOOL accessModeChangeNotificationEnabled;              //@synthesize accessModeChangeNotificationEnabled=_accessModeChangeNotificationEnabled - In the implementation block
@property (getter=isCameraManuallyDisabled,readonly) BOOL cameraManuallyDisabled;                                        //@synthesize cameraManuallyDisabled=_cameraManuallyDisabled - In the implementation block
@property (readonly) HMCameraBulletinBoardSmartNotification * smartNotificationBulletin;                                 //@synthesize smartNotificationBulletin=_smartNotificationBulletin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)logIdentifier;
-(unsigned long long)supportedFeatures;
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
-(id)initWithUUID:(id)arg1 supportedFeatures:(unsigned long long)arg2 accessModeAtHome:(unsigned long long)arg3 accessModeNotAtHome:(unsigned long long)arg4 currentAccessMode:(unsigned long long)arg5 recordingEventTriggers:(unsigned long long)arg6 snapshotsAllowed:(BOOL)arg7 accessModeIndicatorEnabled:(BOOL)arg8 nightVisionModeEnabled:(BOOL)arg9 recordingAudioEnabled:(BOOL)arg10 accessModeChangeNotificationEnabled:(BOOL)arg11 cameraManuallyDisabled:(BOOL)arg12 smartNotification:(id)arg13 ;
@end

