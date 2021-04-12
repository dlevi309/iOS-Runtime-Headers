/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <MediaExperience/MXTestSessionFactory.h>

@interface MXTestCore : MXTestSessionFactory {

	unsigned char mIsInterruptionResumable;
	int mInterruptionError;

}
-(int)testSimultaneousPlaybackOfMixableAndNonMixableSessions:(opaqueCMSessionRef)arg1 nonMixableSession:(opaqueCMSessionRef)arg2 ;
-(int)testIsRecording:(opaqueCMSessionRef)arg1 ;
-(int)testInterruption:(opaqueCMSessionRef)arg1 andInterruptor:(opaqueCMSessionRef)arg2 interruptionTypeResumable:(unsigned char)arg3 ;
-(int)testIsActive:(opaqueCMSessionRef)arg1 ;
-(int)testIsPlaying:(opaqueCMSessionRef)arg1 ;
-(int)testSimultaneousPlaybackOfMixableSessions:(opaqueCMSessionRef)arg1 otherSession:(opaqueCMSessionRef)arg2 ;
-(int)testNavigationApp:(opaqueCMSessionRef)arg1 ;
-(int)testPreIntegrate;
-(int)testCPMS;
-(int)testDucking;
-(int)testPriorityBasedInterruption;
-(int)testNowPlayingApp;
-(int)testSystemSounds;
@end

