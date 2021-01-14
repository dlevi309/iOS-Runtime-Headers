/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)applicationSuspendedNotification:(id)arg1 ;
-(id)init;
-(unsigned long long)incompleteSoundCount;
-(void)setIncompleteSoundCount:(unsigned long long)arg1 ;
-(void)applicationResumedNotification:(id)arg1 ;
-(void)stopSoundForDialerCharacter:(long long)arg1 ;
-(void)soundCompletedPlaying:(unsigned)arg1 ;
-(void)playSoundForDialerCharacter:(long long)arg1 ;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg1 ;
-(void)setSoundsActivated:(BOOL)arg1 ;
-(void)dealloc;
@end

