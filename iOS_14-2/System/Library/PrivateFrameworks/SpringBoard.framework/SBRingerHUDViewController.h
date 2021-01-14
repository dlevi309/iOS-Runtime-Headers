/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/SBHUDViewControlling.h>

@protocol SBRingerHUDViewControllerDelegate;
@class SBRingerPillView, UIViewFloatAnimatableProperty, NSTimer, NSString;

@interface SBRingerHUDViewController : UIViewController <UIViewControllerTransitioningDelegate, SBHUDViewControlling> {

	BOOL _ringerSilent;
	BOOL _lastEventIsAVolumeChange;
	float _volume;
	id<SBRingerHUDViewControllerDelegate> _delegate;
	SBRingerPillView* _pillView;
	UIViewFloatAnimatableProperty* _positionSpring;
	UIViewFloatAnimatableProperty* _ringerValueSpring;
	NSTimer* _dismissalTimer;
	double _overshoot;

}

@property (nonatomic,retain) SBRingerPillView * pillView;                                        //@synthesize pillView=_pillView - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * positionSpring;                     //@synthesize positionSpring=_positionSpring - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * ringerValueSpring;                  //@synthesize ringerValueSpring=_ringerValueSpring - In the implementation block
@property (nonatomic,retain) NSTimer * dismissalTimer;                                           //@synthesize dismissalTimer=_dismissalTimer - In the implementation block
@property (assign,nonatomic) BOOL lastEventIsAVolumeChange;                                      //@synthesize lastEventIsAVolumeChange=_lastEventIsAVolumeChange - In the implementation block
@property (assign,nonatomic) double overshoot;                                                   //@synthesize overshoot=_overshoot - In the implementation block
@property (assign,nonatomic) BOOL ringerSilent;                                                  //@synthesize ringerSilent=_ringerSilent - In the implementation block
@property (assign,nonatomic,__weak) id<SBRingerHUDViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float volume;                                                       //@synthesize volume=_volume - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVolume:(float)arg1 ;
-(id<SBRingerHUDViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SBRingerPillView *)pillView;
-(void)_dismiss;
-(void)setDelegate:(id<SBRingerHUDViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)isPresented;
-(void)loadView;
-(void)setPillView:(SBRingerPillView *)arg1 ;
-(float)volume;
-(void)viewDidLayoutSubviews;
-(void)nudgeUp:(BOOL)arg1 ;
-(BOOL)definesAnimatedDismissal;
-(void)dismissAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)noteVolumeUpWasHit:(BOOL)arg1 ;
-(void)noteVolumeDownWasHit:(BOOL)arg1 ;
-(void)buttonReleased;
-(void)noteVolumeDidChange:(float)arg1 ;
-(void)refreshAudioUI;
-(void)_createSprings;
-(BOOL)ringerSilent;
-(void)setRingerSilent:(BOOL)arg1 ;
-(void)setVolume:(float)arg1 animated:(BOOL)arg2 forKeyPress:(BOOL)arg3 ;
-(void)presentForMuteSwitch:(BOOL)arg1 ;
-(void)_layoutPillView;
-(void)swipeGesture:(id)arg1 ;
-(void)_updateVolumeSliderAnimated:(BOOL)arg1 ;
-(void)_updateStateAnimated:(BOOL)arg1 invert:(BOOL)arg2 ;
-(void)_extendDismissalTimer;
-(void)_setPositionSpringValue:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDismissalTimer:(NSTimer *)arg1 ;
-(UIViewFloatAnimatableProperty *)positionSpring;
-(void)setPositionSpring:(UIViewFloatAnimatableProperty *)arg1 ;
-(UIViewFloatAnimatableProperty *)ringerValueSpring;
-(void)setRingerValueSpring:(UIViewFloatAnimatableProperty *)arg1 ;
-(NSTimer *)dismissalTimer;
-(BOOL)lastEventIsAVolumeChange;
-(void)setLastEventIsAVolumeChange:(BOOL)arg1 ;
-(double)overshoot;
-(void)setOvershoot:(double)arg1 ;
@end

