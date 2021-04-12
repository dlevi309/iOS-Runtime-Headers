/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSData, NSSet, HMDBulletinBoardNotification;

@interface HMDCameraProfileSettingsModel : HMBModel {

	BOOL _cameraManuallyDisabled;
	unsigned long long _currentAccessMode;

}

@property (copy) NSNumber * accessModeAtHomeField; 
@property (copy) NSNumber * accessModeNotAtHomeField; 
@property (copy) NSNumber * recordingEventTriggersField; 
@property (copy) NSNumber * accessModeIndicatorEnabledField; 
@property (copy) NSNumber * nightVisionModeEnabledField; 
@property (copy) NSNumber * snapshotsAllowedField; 
@property (copy) NSNumber * periodicSnapshotsAllowedField; 
@property (copy) NSNumber * recordingAudioEnabledField; 
@property (copy) NSNumber * accessModeChangeNotificationEnabledField; 
@property (copy) NSNumber * reachabilityEventNotificationEnabledField; 
@property (copy) NSData * smartBulletinBoardNotificationDataField; 
@property (copy) NSData * activityZonesField; 
@property (copy) NSNumber * activityZonesIncludedForSignificantEventDetectionField; 
@property (assign) unsigned long long currentAccessMode;                                         //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (readonly) BOOL hasAnyNotificationFieldsSet; 
@property (assign) unsigned long long accessModeAtHome; 
@property (assign) unsigned long long accessModeNotAtHome; 
@property (assign) unsigned long long recordingEventTriggers; 
@property (assign) BOOL accessModeIndicatorEnabled; 
@property (assign) BOOL nightVisionModeEnabled; 
@property (assign) BOOL snapshotsAllowed; 
@property (assign) BOOL periodicSnapshotsAllowed; 
@property (assign) BOOL recordingAudioEnabled; 
@property (assign) BOOL cameraManuallyDisabled;                                                  //@synthesize cameraManuallyDisabled=_cameraManuallyDisabled - In the implementation block
@property (retain) NSSet * activityZones; 
@property (assign) BOOL activityZonesIncludedForSignificantEventDetection; 
@property (readonly) BOOL accessModeChangeNotificationEnabled; 
@property (readonly) HMDBulletinBoardNotification * smartBulletinBoardNotification; 
@property (readonly) BOOL reachabilityEventNotificationEnabled; 
+(id)hmbProperties;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(NSSet *)activityZones;
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
-(BOOL)hasAnyNotificationFieldsSet;
-(BOOL)accessModeIndicatorEnabled;
-(BOOL)nightVisionModeEnabled;
-(BOOL)snapshotsAllowed;
-(BOOL)periodicSnapshotsAllowed;
-(BOOL)recordingAudioEnabled;
-(BOOL)accessModeChangeNotificationEnabled;
-(HMDBulletinBoardNotification *)smartBulletinBoardNotification;
-(BOOL)activityZonesIncludedForSignificantEventDetection;
-(BOOL)reachabilityEventNotificationEnabled;
-(BOOL)cameraManuallyDisabled;
@end

