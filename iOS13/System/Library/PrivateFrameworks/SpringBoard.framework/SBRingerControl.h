/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isRingerMuted;
-(SBSoundController *)soundController;
-(void)setRingerMuted:(BOOL)arg1 ;
-(BOOL)lastSavedRingerMutedState;
-(void)activateRingerHUDFromMuteSwitch:(int)arg1 ;
-(SBHUDController *)HUDController;
-(id)initWithHUDController:(id)arg1 soundController:(id)arg2 ;
-(void)buttonReleased;
-(void)nudgeUp:(BOOL)arg1 ;
-(void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)arg1 ;
-(void)setVolume:(float)arg1 forKeyPress:(BOOL)arg2 ;
-(void)_softMuteChanged:(id)arg1 ;
-(void)activateRingerHUD:(int)arg1 withInitialVolume:(float)arg2 fromSource:(unsigned long long)arg3 ;
-(id)existingRingerHUDViewController;
-(void)hideRingerHUDIfVisible;
-(void)ringerHUDViewControllerWantsToBeDismissed:(id)arg1 ;
-(void)toggleRingerMute;
@end

