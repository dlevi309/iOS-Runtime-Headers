/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <MediaExperience/MXTestSessionFactory.h>

@interface MXTestSessionProperty : MXTestSessionFactory {

	opaqueCMSessionRef mSession;

}
-(int)testClientName;
-(int)verifyClientPriority:(unsigned)arg1 ;
-(int)testAudioMode;
-(int)verifyAudioHWControlFlags:(unsigned)arg1 ;
-(int)verifyInterruptionStyle:(unsigned)arg1 ;
-(int)verifyAudioCategoryBehavior:(opaqueCMSessionRef)arg1 isMixable:(CFBooleanRef)arg2 postsResumableInterruption:(unsigned char)arg3 isPlayAndRecord:(unsigned char)arg4 withBluetooth:(unsigned char)arg5 andIsDefaultToSpeaker:(unsigned char)arg6 ;
-(int)verifyOverrideRoute:(unsigned char)arg1 ;
-(int)verifyCategoryCustomization:(unsigned char)arg1 andBuiltInRoute:(CFStringRef)arg2 ;
-(int)testIsAudioSession;
-(int)testAudioSessionID;
-(int)testIsFigInstantiatedAudioSession;
-(int)testClientPriority;
-(int)testAudioHardwareControlFlags;
-(int)testInterruptionStyle;
-(int)testAudioCategory;
-(int)testCategoryCustomizationEnableBluetoothRecording;
-(int)testCategoryCustomizationDefaultBuiltInRoute;
-(int)testOverrideRoute;
-(int)testReporterIDs;
@end

