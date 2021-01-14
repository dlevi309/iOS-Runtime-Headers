/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMCameraUserNotificationSettings, NSSet, NSString, NSArray;

@interface _HMCameraUserSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _snapshotsAllowed;
	BOOL _periodicSnapshotsAllowed;
	BOOL _accessModeIndicatorEnabled;
	BOOL _nightVisionModeEnabled;
	BOOL _recordingAudioEnabled;
	BOOL _cameraManuallyDisabled;
	BOOL _activityZonesIncludedForSignificantEventDetection;
	NSUUID* _UUID;
	unsigned long long _supportedFeatures;
	unsigned long long _accessModeAtHome;
	unsigned long long _accessModeNotAtHome;
	unsigned long long _currentAccessMode;
	unsigned long long _recordingEventTriggers;
	HMCameraUserNotificationSettings* _notificationSettings;
	NSSet* _activityZones;

}

@property (copy) NSUUID * UUID;                                                                                                              //@synthesize UUID=_UUID - In the implementation block
@property (assign) unsigned long long supportedFeatures;                                                                                     //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (assign) unsigned long long accessModeAtHome;                                                                                      //@synthesize accessModeAtHome=_accessModeAtHome - In the implementation block
@property (assign) unsigned long long accessModeNotAtHome;                                                                                   //@synthesize accessModeNotAtHome=_accessModeNotAtHome - In the implementation block
@property (assign) unsigned long long currentAccessMode;                                                                                     //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (assign) unsigned long long recordingEventTriggers;                                                                                //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
@property (getter=areSnapshotsAllowed) BOOL snapshotsAllowed;                                                                                //@synthesize snapshotsAllowed=_snapshotsAllowed - In the implementation block
@property (getter=arePeriodicSnapshotsAllowed) BOOL periodicSnapshotsAllowed;                                                                //@synthesize periodicSnapshotsAllowed=_periodicSnapshotsAllowed - In the implementation block
@property (getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;                                                             //@synthesize accessModeIndicatorEnabled=_accessModeIndicatorEnabled - In the implementation block
@property (getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled;                                                                     //@synthesize nightVisionModeEnabled=_nightVisionModeEnabled - In the implementation block
@property (getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;                                                                       //@synthesize recordingAudioEnabled=_recordingAudioEnabled - In the implementation block
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;                                                                     //@synthesize cameraManuallyDisabled=_cameraManuallyDisabled - In the implementation block
@property (copy) HMCameraUserNotificationSettings * notificationSettings;                                                                    //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (copy) NSSet * activityZones;                                                                                                      //@synthesize activityZones=_activityZones - In the implementation block
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;              //@synthesize activityZonesIncludedForSignificantEventDetection=_activityZonesIncludedForSignificantEventDetection - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSUUID *)UUID;
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(void)setNotificationSettings:(HMCameraUserNotificationSettings *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)supportedFeatures;
-(NSArray *)attributeDescriptions;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(BOOL)isAccessModeIndicatorEnabled;
-(BOOL)areSnapshotsAllowed;
-(BOOL)isNightVisionModeEnabled;
-(BOOL)isRecordingAudioEnabled;
-(BOOL)isCameraManuallyDisabled;
-(NSSet *)activityZones;
-(BOOL)areActivityZonesIncludedForSignificantEventDetection;
-(unsigned long long)hash;
-(void)setSupportedFeatures:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)arePeriodicSnapshotsAllowed;
-(void)setAccessModeAtHome:(unsigned long long)arg1 ;
-(void)setAccessModeNotAtHome:(unsigned long long)arg1 ;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setRecordingEventTriggers:(unsigned long long)arg1 ;
-(void)setSnapshotsAllowed:(BOOL)arg1 ;
-(void)setPeriodicSnapshotsAllowed:(BOOL)arg1 ;
-(void)setAccessModeIndicatorEnabled:(BOOL)arg1 ;
-(void)setNightVisionModeEnabled:(BOOL)arg1 ;
-(void)setRecordingAudioEnabled:(BOOL)arg1 ;
-(void)setCameraManuallyDisabled:(BOOL)arg1 ;
-(void)setActivityZones:(NSSet *)arg1 ;
-(void)setActivityZonesIncludedForSignificantEventDetection:(BOOL)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(HMCameraUserNotificationSettings *)notificationSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

