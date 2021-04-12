/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/


#import <TelephonyUI/TelephonyUI-Structs.h>
@interface TPDialerSoundController : NSObject {

	CFSetRef _inflightSounds;
	unsigned _soundsActivated : 1;
	unsigned long long _incompleteSoundCount;

}

@property (assign) unsigned long long incompleteSoundCount;              //@synthesize incompleteSoundCount=_incompleteSoundCount - In the implementation block
+(void)_delayedDeactivate;
-(id)init;
-(void)dealloc;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg1 ;
-(void)stopSoundForDialerCharacter:(unsigned)arg1 ;
-(void)playSoundForDialerCharacter:(unsigned)arg1 ;
-(void)applicationSuspendedNotification:(id)arg1 ;
-(void)applicationResumedNotification:(id)arg1 ;
-(void)setSoundsActivated:(BOOL)arg1 ;
-(unsigned long long)incompleteSoundCount;
-(void)setIncompleteSoundCount:(unsigned long long)arg1 ;
-(void)soundCompletedPlaying:(unsigned)arg1 ;
@end

