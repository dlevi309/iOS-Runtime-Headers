/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMCameraProfileUserSettingsDelegate;
@class HMCameraStreamControl, HMCameraSnapshotControl, HMCameraSettingsControl, HMCameraAudioControl, _HMCameraProfile, HMCameraUserSettings, HMCameraClipManager, HMCameraRecordingReachabilityEventManager, HMCameraRecordingEventManager, NSString;

@interface HMCameraProfile : HMAccessoryProfile <HMFLogging> {

	HMCameraStreamControl* _streamControl;
	HMCameraSnapshotControl* _snapshotControl;
	HMCameraSettingsControl* _settingsControl;
	HMCameraAudioControl* _speakerControl;
	HMCameraAudioControl* _microphoneControl;
	id<HMCameraProfileUserSettingsDelegate> _userSettingsDelegate;

}

@property (nonatomic,readonly) _HMCameraProfile * cameraProfile; 
@property (nonatomic,retain) HMCameraStreamControl * streamControl;                                     //@synthesize streamControl=_streamControl - In the implementation block
@property (nonatomic,retain) HMCameraSnapshotControl * snapshotControl;                                 //@synthesize snapshotControl=_snapshotControl - In the implementation block
@property (nonatomic,retain) HMCameraSettingsControl * settingsControl;                                 //@synthesize settingsControl=_settingsControl - In the implementation block
@property (nonatomic,retain) HMCameraAudioControl * speakerControl;                                     //@synthesize speakerControl=_speakerControl - In the implementation block
@property (nonatomic,retain) HMCameraAudioControl * microphoneControl;                                  //@synthesize microphoneControl=_microphoneControl - In the implementation block
@property (readonly) HMCameraUserSettings * userSettings; 
@property (__weak) id<HMCameraProfileUserSettingsDelegate> userSettingsDelegate;                        //@synthesize userSettingsDelegate=_userSettingsDelegate - In the implementation block
@property (readonly) HMCameraClipManager * clipManager; 
@property (readonly) HMCameraRecordingReachabilityEventManager * reachabilityEventManager; 
@property (readonly) HMCameraRecordingEventManager * recordingEventManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMCameraUserSettings *)userSettings;
-(id)services;
-(HMCameraSettingsControl *)settingsControl;
-(void)setSettingsControl:(HMCameraSettingsControl *)arg1 ;
-(HMCameraAudioControl *)speakerControl;
-(id)logIdentifier;
-(HMCameraAudioControl *)microphoneControl;
-(HMCameraRecordingEventManager *)recordingEventManager;
-(_HMCameraProfile *)cameraProfile;
-(HMCameraSnapshotControl *)snapshotControl;
-(id<HMCameraProfileUserSettingsDelegate>)userSettingsDelegate;
-(id)initWithCameraProfile:(id)arg1 ;
-(void)setSnapshotControl:(HMCameraSnapshotControl *)arg1 ;
-(void)setSpeakerControl:(HMCameraAudioControl *)arg1 ;
-(void)setMicrophoneControl:(HMCameraAudioControl *)arg1 ;
-(void)setUserSettingsDelegate:(id<HMCameraProfileUserSettingsDelegate>)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(HMCameraStreamControl *)streamControl;
-(void)setStreamControl:(HMCameraStreamControl *)arg1 ;
-(HMCameraClipManager *)clipManager;
-(HMCameraRecordingReachabilityEventManager *)reachabilityEventManager;
@end

