/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <MediaExperience/MXTestSessionFactory.h>

@interface MXTestCore : MXTestSessionFactory {

	unsigned char mIsInterruptionResumable;
	int mInterruptionError;
	CFBooleanRef mMutePolicyForMXSessionIsMuted;
	int mMutePolicyError;
	BOOL mNotificationReceived;

}
-(int)testIsRecording:(opaqueCMSessionRef)arg1 ;
-(int)testSimultaneousPlaybackOfMixableAndNonMixableSessions:(opaqueCMSessionRef)arg1 nonMixableSession:(opaqueCMSessionRef)arg2 ;
-(int)testInterruption:(opaqueCMSessionRef)arg1 andInterruptor:(opaqueCMSessionRef)arg2 interruptionTypeResumable:(unsigned char)arg3 ;
-(int)testDucking;
-(int)testIsActive:(opaqueCMSessionRef)arg1 ;
-(int)testIsPlaying:(opaqueCMSessionRef)arg1 ;
-(int)testSimultaneousPlaybackOfMixableSessions:(opaqueCMSessionRef)arg1 otherSession:(opaqueCMSessionRef)arg2 ;
-(int)testDeactivationOfActiveAndNonPlayingSessions;
-(int)testMultipleRecordingClients;
-(int)testNavigationApp:(opaqueCMSessionRef)arg1 ;
-(int)testPreIntegrate;
-(int)testSystemSoundsAndHapticsAudioHWControlBehaviors;
-(int)testPriorityBasedInterruption;
-(int)testNowPlayingApp;
-(int)testHDMILatencyManager;
-(int)testPrefersNoInterruptionsByRingtonesAndAlerts;
-(int)testMXSession;
-(int)testAudioQueueOptionsForMXSession;
-(int)testMutePriority;
-(int)testPiPPolicies;
-(int)testMXSessionMutedNotificationForMutePriority;
-(int)testPiPMixingPolicies;
-(int)testMXSessionRefresh;
-(int)testShadowingAudioSessionID;
-(int)testSomeOtherPrimaryAudioCategoryClientIsPlaying;
-(int)testSystemSounds;
-(int)testIsAllowedRecordingFromBackground;
-(int)testMXSystemController;
-(int)testSharedMXSystemController;
-(int)testLowLatencyVADConfiguration;
-(int)testPlaybackHandoff;
-(int)testMXSessionClientType;
-(int)testAllowSystemSoundsWhileRecording;
-(int)testCPMS;
@end

