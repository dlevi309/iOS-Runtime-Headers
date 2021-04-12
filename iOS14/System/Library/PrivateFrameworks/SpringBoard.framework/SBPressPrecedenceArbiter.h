/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHardwareButtons:(NSArray *)arg1 ;
-(void)_updateButtonPriority;
-(void)_initializeButtonPriorities;
-(void)_updateButtonPrioritiesForNotification:(id)arg1 ;
-(unsigned long long)_currentButtonPriority;
-(BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
-(void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)arg1 ;
-(NSArray *)hardwareButtons;
-(id)initWithHomeButtonType:(long long)arg1 ;
-(void)_applyButtonPriority:(unsigned long long)arg1 ;
@end

