/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMAccessoryProfile.h>

@class _HMCameraStreamControl, _HMCameraSnapshotControl, _HMCameraSettingsControl, _HMCameraAudioControl, HMCameraUserSettings, HMCameraClipManager, HMCameraRecordingReachabilityEventManager, HMCameraRecordingEventManager, NSArray;

@interface _HMCameraProfile : _HMAccessoryProfile {

	_HMCameraStreamControl* _streamControlInternal;
	_HMCameraSnapshotControl* _snapshotControlInternal;
	_HMCameraSettingsControl* _settingsControl;
	_HMCameraAudioControl* _speakerControl;
	_HMCameraAudioControl* _microphoneControl;
	HMCameraUserSettings* _userSettings;
	HMCameraClipManager* _clipManager;
	HMCameraRecordingReachabilityEventManager* _reachabilityEventManager;
	HMCameraRecordingEventManager* _recordingEventManager;

}

@property (copy,readonly) NSArray * controls; 
@property (retain) HMCameraUserSettings * userSettings;                                               //@synthesize userSettings=_userSettings - In the implementation block
@property (retain) HMCameraRecordingEventManager * recordingEventManager;                             //@synthesize recordingEventManager=_recordingEventManager - In the implementation block
@property (retain) HMCameraClipManager * clipManager;                                                 //@synthesize clipManager=_clipManager - In the implementation block
@property (retain) HMCameraRecordingReachabilityEventManager * reachabilityEventManager;              //@synthesize reachabilityEventManager=_reachabilityEventManager - In the implementation block
@property (readonly) _HMCameraStreamControl * streamControlInternal;                                  //@synthesize streamControlInternal=_streamControlInternal - In the implementation block
@property (readonly) _HMCameraSnapshotControl * snapshotControlInternal;                              //@synthesize snapshotControlInternal=_snapshotControlInternal - In the implementation block
@property (readonly) _HMCameraSettingsControl * settingsControl;                                      //@synthesize settingsControl=_settingsControl - In the implementation block
@property (readonly) _HMCameraAudioControl * speakerControl;                                          //@synthesize speakerControl=_speakerControl - In the implementation block
@property (readonly) _HMCameraAudioControl * microphoneControl;                                       //@synthesize microphoneControl=_microphoneControl - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMCameraUserSettings *)userSettings;
-(_HMCameraSettingsControl *)settingsControl;
-(NSArray *)controls;
-(void)encodeWithCoder:(id)arg1 ;
-(_HMCameraAudioControl *)speakerControl;
-(void)_createControls:(id)arg1 ;
-(_HMCameraStreamControl *)streamControlInternal;
-(_HMCameraSnapshotControl *)snapshotControlInternal;
-(_HMCameraAudioControl *)microphoneControl;
-(void)setClipManager:(HMCameraClipManager *)arg1 ;
-(void)setReachabilityEventManager:(HMCameraRecordingReachabilityEventManager *)arg1 ;
-(void)setRecordingEventManager:(HMCameraRecordingEventManager *)arg1 ;
-(void)setUserSettings:(HMCameraUserSettings *)arg1 ;
-(void)addUserSettings:(id)arg1 ;
-(HMCameraRecordingEventManager *)recordingEventManager;
-(id)initWithCoder:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(id)initWithUUID:(id)arg1 services:(id)arg2 ;
-(HMCameraClipManager *)clipManager;
-(HMCameraRecordingReachabilityEventManager *)reachabilityEventManager;
@end

