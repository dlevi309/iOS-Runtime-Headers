/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMCameraProfileUserSettingsDelegate;
@class HMCameraStreamControl, HMCameraSnapshotControl, HMCameraSettingsControl, HMCameraAudioControl, _HMCameraProfile, HMCameraUserSettings, HMCameraClipManager, NSString;

@interface HMCameraProfile : HMAccessoryProfile <HMFLogging> {

	HMCameraStreamControl* _streamControl;
	HMCameraSnapshotControl* _snapshotControl;
	HMCameraSettingsControl* _settingsControl;
	HMCameraAudioControl* _speakerControl;
	HMCameraAudioControl* _microphoneControl;
	id<HMCameraProfileUserSettingsDelegate> _userSettingsDelegate;

}

@property (nonatomic,readonly) _HMCameraProfile * cameraProfile; 
@property (nonatomic,retain) HMCameraStreamControl * streamControl;                           //@synthesize streamControl=_streamControl - In the implementation block
@property (nonatomic,retain) HMCameraSnapshotControl * snapshotControl;                       //@synthesize snapshotControl=_snapshotControl - In the implementation block
@property (nonatomic,retain) HMCameraSettingsControl * settingsControl;                       //@synthesize settingsControl=_settingsControl - In the implementation block
@property (nonatomic,retain) HMCameraAudioControl * speakerControl;                           //@synthesize speakerControl=_speakerControl - In the implementation block
@property (nonatomic,retain) HMCameraAudioControl * microphoneControl;                        //@synthesize microphoneControl=_microphoneControl - In the implementation block
@property (readonly) HMCameraUserSettings * userSettings; 
@property (__weak) id<HMCameraProfileUserSettingsDelegate> userSettingsDelegate;              //@synthesize userSettingsDelegate=_userSettingsDelegate - In the implementation block
@property (readonly) HMCameraClipManager * clipManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMCameraUserSettings *)userSettings;
-(id)services;
-(id)logIdentifier;
-(_HMCameraProfile *)cameraProfile;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(HMCameraStreamControl *)streamControl;
-(void)setStreamControl:(HMCameraStreamControl *)arg1 ;
-(HMCameraSettingsControl *)settingsControl;
-(void)setSettingsControl:(HMCameraSettingsControl *)arg1 ;
-(HMCameraClipManager *)clipManager;
-(HMCameraAudioControl *)microphoneControl;
-(HMCameraAudioControl *)speakerControl;
-(void)deleteAllClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMCameraSnapshotControl *)snapshotControl;
-(id<HMCameraProfileUserSettingsDelegate>)userSettingsDelegate;
-(id)initWithCameraProfile:(id)arg1 ;
-(void)setSnapshotControl:(HMCameraSnapshotControl *)arg1 ;
-(void)setSpeakerControl:(HMCameraAudioControl *)arg1 ;
-(void)setMicrophoneControl:(HMCameraAudioControl *)arg1 ;
-(void)setUserSettingsDelegate:(id<HMCameraProfileUserSettingsDelegate>)arg1 ;
@end

