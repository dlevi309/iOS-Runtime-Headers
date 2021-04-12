/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


#import <MediaExperience/MediaExperience-Structs.h>
@interface MXTestSessionFactory : NSObject {

	CFStringRef mAudioCategory;
	opaqueCMSessionRef mSession;
	OpaqueFigSemaphoreRef mSemaphore;
	/*function pointer*/void* mCallback;
	CFStringRef mFileName;
	void* mCMSessionTrace;
	void* mVolumeTrace;
	CFStringRef mFigNotes;
	CFStringRef mFigNotesLog;
	CFDictionaryRef mConfigMap;
	unsigned char mEnableLogging;
	unsigned char mForceCleanStart;
	CFStringRef mCMSLoggingLevel;
	CFStringRef mVolumeLoggingLevel;
	unsigned char _hasPhoneCallCapability;
	unsigned char _hasPlayAndRecordCapability;
	unsigned char _hasHapticsCapability;
	int _deviceType;

}

@property (assign) unsigned char hasPhoneCallCapability;                  //@synthesize hasPhoneCallCapability=_hasPhoneCallCapability - In the implementation block
@property (assign) unsigned char hasPlayAndRecordCapability;              //@synthesize hasPlayAndRecordCapability=_hasPlayAndRecordCapability - In the implementation block
@property (assign) unsigned char hasHapticsCapability;                    //@synthesize hasHapticsCapability=_hasHapticsCapability - In the implementation block
@property (assign) int deviceType;                                        //@synthesize deviceType=_deviceType - In the implementation block
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(int)signalSemaphore;
-(void)setNotificationCallback:(/*function pointer*/void*)arg1 ;
-(int)setAndVerifyProperty:(int)arg1 propertyName:(CFStringRef)arg2 andValue:(void*)arg3 sessionToSet:(opaqueCMSessionRef)arg4 ;
-(int)checkSessionActiveState:(unsigned char)arg1 sessionToCheck:(opaqueCMSessionRef)arg2 ;
-(opaqueCMSessionRef)createCustomSession:(CFStringRef)arg1 withMode:(CFStringRef)arg2 withInterruptionStyle:(unsigned)arg3 andHostId:(CFStringRef)arg4 ;
-(int)getExpectedInterruptionStyleBehavior:(unsigned)arg1 givesBehavior:(SCD_Struct_MX6*)arg2 ;
-(int)activateAndPlaySession:(opaqueCMSessionRef)arg1 ;
-(int)checkSessionDuckedState:(unsigned char)arg1 sessionToCheck:(opaqueCMSessionRef)arg2 ;
-(int)addNotificationListener:(opaqueCMSessionRef)arg1 notificationName:(CFStringRef)arg2 listener:(const void*)arg3 ;
-(int)deactivateAndStopSession:(opaqueCMSessionRef)arg1 replacementStatusResumable:(unsigned char)arg2 ;
-(int)waitOnSemaphore;
-(int)removeNotificationListener:(opaqueCMSessionRef)arg1 notificationName:(CFStringRef)arg2 listener:(const void*)arg3 ;
-(opaqueCMSessionRef)createMusicSession;
-(int)activateSession:(opaqueCMSessionRef)arg1 ;
-(void)setup:(CFStringRef)arg1 cmsLoggingLevel:(CFStringRef)arg2 volumeLoggingLevel:(CFStringRef)arg3 ;
-(opaqueCMSessionRef)createDefaultSession;
-(void)teardown:(int)arg1 testName:(CFStringRef)arg2 ;
-(opaqueCMSessionRef)createGameSession;
-(opaqueCMSessionRef)createPodcastSession;
-(unsigned char)hasPlayAndRecordCapability;
-(unsigned char)hasPhoneCallCapability;
-(opaqueCMSessionRef)createPhoneCallSession;
-(opaqueCMSessionRef)createPreConfiguredCustomSession:(int)arg1 ;
-(void)createSemaphore;
-(void)setHasPhoneCallCapability:(unsigned char)arg1 ;
-(void)setHasPlayAndRecordCapability:(unsigned char)arg1 ;
-(void)setHasHapticsCapability:(unsigned char)arg1 ;
-(opaqueCMSessionRef)createAlarmSession;
-(opaqueCMSessionRef)createAmbientSession;
-(opaqueCMSessionRef)createSiriSession;
-(opaqueCMSessionRef)createNavigationSession;
-(int)testSessionFactory;
-(opaqueCMSessionRef)createFacetimeAudioSession;
-(opaqueCMSessionRef)createThirdPartyMusicSession;
-(opaqueCMSessionRef)createRingtonePreviewSession;
-(opaqueCMSessionRef)createCameraPhotoSession;
-(opaqueCMSessionRef)createCameraRecordingSession;
-(opaqueCMSessionRef)createVoiceMemoSession;
-(opaqueCMSessionRef)createFacetimeVideoSession;
-(opaqueCMSessionRef)createEmergencyAlertSession;
-(opaqueCMSessionRef)createEmergencyAlertMuteableSession;
-(opaqueCMSessionRef)createThirdPartyPhonecallSession;
-(opaqueCMSessionRef)createThirdPartyNavigationSession;
-(opaqueCMSessionRef)createThirdPartyVideocallSession;
-(opaqueCMSessionRef)createThirdPartyPodcastSession;
-(int)addAndVerifyNumberToDictionary:(CFDictionaryRef)arg1 numberType:(long long)arg2 forKey:(const void*)arg3 andValue:(const void*)arg4 ;
-(int)setPlayingState:(CFBooleanRef)arg1 sessionToSet:(opaqueCMSessionRef)arg2 ;
-(int)checkSessionPlayingState:(unsigned char)arg1 sessionToCheck:(opaqueCMSessionRef)arg2 ;
-(int)setAndVerifyPriority:(int)arg1 sessionToSet:(opaqueCMSessionRef)arg2 ;
-(int)setAndVerifyInterruptionStyle:(unsigned)arg1 sessionToSet:(opaqueCMSessionRef)arg2 ;
-(int)setupSystemSoundDictionary:(_CFDictionary*)arg1 withSSID:(int)arg2 andPID:(int)arg3 ignoreRingerSwitch:(unsigned char)arg4 ;
-(int)checkSessionNowPlayingState:(unsigned char)arg1 sessionToCheck:(opaqueCMSessionRef)arg2 ;
-(int)checkSystemSoundActiveState:(unsigned char)arg1 ;
-(int)copySystemSoundCategoryForSSID:(unsigned)arg1 resultName:(const _CFString*)arg2 ;
-(unsigned char)hasHapticsCapability;
@end

