/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBRingerHUDViewControllerDelegate.h>

@class SBHUDController, SBSoundController, NSString;

@interface SBRingerControl : NSObject <SBRingerHUDViewControllerDelegate> {

	BOOL _ringerMuted;
	float _volume;
	SBHUDController* _HUDController;
	SBSoundController* _soundController;

}

@property (nonatomic,readonly) SBHUDController * HUDController;                  //@synthesize HUDController=_HUDController - In the implementation block
@property (nonatomic,readonly) SBSoundController * soundController;              //@synthesize soundController=_soundController - In the implementation block
@property (assign,nonatomic) float volume;                                       //@synthesize volume=_volume - In the implementation block
@property (assign,getter=isRingerMuted,nonatomic) BOOL ringerMuted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVolume:(float)arg1 ;
-(void)setRingerMuted:(BOOL)arg1 ;
-(SBHUDController *)HUDController;
-(BOOL)isRingerMuted;
-(SBSoundController *)soundController;
-(float)volume;
-(void)nudgeUp:(BOOL)arg1 ;
-(BOOL)lastSavedRingerMutedState;
-(void)activateRingerHUDFromMuteSwitch:(int)arg1 ;
-(id)initWithHUDController:(id)arg1 soundController:(id)arg2 ;
-(void)buttonReleased;
-(void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)arg1 ;
-(void)setVolume:(float)arg1 forKeyPress:(BOOL)arg2 ;
-(void)_softMuteChanged:(id)arg1 ;
-(void)activateRingerHUD:(int)arg1 withInitialVolume:(float)arg2 fromSource:(unsigned long long)arg3 ;
-(id)existingRingerHUDViewController;
-(void)hideRingerHUDIfVisible;
-(void)ringerHUDViewControllerWantsToBeDismissed:(id)arg1 ;
-(void)toggleRingerMute;
@end

