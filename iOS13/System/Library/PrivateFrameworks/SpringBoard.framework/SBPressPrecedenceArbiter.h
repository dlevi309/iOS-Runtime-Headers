/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSArray;

@interface SBPressPrecedenceArbiter : NSObject {

	unsigned long long _volumeAndLockButtonPriority;
	long long _homeButtonType;
	BOOL _isMusicPlayingSomewhere;
	NSArray* _hardwareButtons;

}

@property (nonatomic,retain) NSArray * hardwareButtons;              //@synthesize hardwareButtons=_hardwareButtons - In the implementation block
-(id)initWithHomeButtonType:(long long)arg1 ;
-(void)setHardwareButtons:(NSArray *)arg1 ;
-(BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
-(void)_initializeButtonPriorities;
-(void)_updateButtonPrioritiesForNotification:(id)arg1 ;
-(void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)arg1 ;
-(void)_applyButtonPriority:(unsigned long long)arg1 ;
-(unsigned long long)_currentButtonPriority;
-(void)_updateButtonPriority;
-(NSArray *)hardwareButtons;
@end

