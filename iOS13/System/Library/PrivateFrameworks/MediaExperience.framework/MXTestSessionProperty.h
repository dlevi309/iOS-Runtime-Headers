/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <MediaExperience/MXTestSessionFactory.h>

@interface MXTestSessionProperty : MXTestSessionFactory {

	opaqueCMSessionRef mSession;

}
-(int)verifyClientPriority:(unsigned)arg1 ;
-(int)verifyAudioHWControlFlags:(unsigned)arg1 ;
-(int)verifyInterruptionStyle:(unsigned)arg1 ;
-(int)verifyAudioCategoryBehavior:(opaqueCMSessionRef)arg1 isMixable:(CFBooleanRef)arg2 postsResumableInterruption:(unsigned char)arg3 isPlayAndRecord:(unsigned char)arg4 withBluetooth:(unsigned char)arg5 andIsDefaultToSpeaker:(unsigned char)arg6 ;
-(int)verifyCategoryCustomization:(unsigned char)arg1 andBuiltInRoute:(CFStringRef)arg2 ;
-(int)verifyOverrideRoute:(unsigned char)arg1 ;
-(int)testClientName;
-(int)testIsAudioSession;
-(int)testAudioSessionID;
-(int)testIsFigInstantiatedAudioSession;
-(int)testClientType;
-(int)testClientPriority;
-(int)testAudioHardwareControlFlags;
-(int)testInterruptionStyle;
-(int)testAudioCategory;
-(int)testAudioMode;
-(int)testCategoryCustomizationEnableBluetoothRecording;
-(int)testCategoryCustomizationDefaultBuiltInRoute;
-(int)testOverrideRoute;
@end

