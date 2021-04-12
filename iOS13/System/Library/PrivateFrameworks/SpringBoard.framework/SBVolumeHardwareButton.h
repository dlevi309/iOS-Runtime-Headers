/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBPressPrecedenceArbiter.h>

@class SBPressGestureRecognizer, UIGestureRecognizer, NSHashTable, SBPressSequenceObserver, SBVolumeHardwareButtonActions, NSString;

@interface SBVolumeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBPressPrecedenceArbiter> {

	unsigned long long _volumeUpAggdStartTime;
	unsigned long long _volumeDownAggdStartTime;
	long long _homeButtonType;
	SBPressGestureRecognizer* _volumeIncreaseButtonPressGestureRecognizer;
	SBPressGestureRecognizer* _volumeDecreaseButtonPressGestureRecognizer;
	UIGestureRecognizer* _screenshotGestureRecognizer;
	UIGestureRecognizer* _shutdownGestureRecognizer;
	NSHashTable* _volumePressBandits;
	SBPressSequenceObserver* _volumeIncreaseSequenceObserver;
	SBPressSequenceObserver* _volumeDecreaseSequenceObserver;
	SBVolumeHardwareButtonActions* _buttonActions;

}

@property (nonatomic,readonly) SBPressSequenceObserver * volumeIncreaseSequenceObserver;              //@synthesize volumeIncreaseSequenceObserver=_volumeIncreaseSequenceObserver - In the implementation block
@property (nonatomic,readonly) SBPressSequenceObserver * volumeDecreaseSequenceObserver;              //@synthesize volumeDecreaseSequenceObserver=_volumeDecreaseSequenceObserver - In the implementation block
@property (nonatomic,readonly) SBVolumeHardwareButtonActions * buttonActions;                         //@synthesize buttonActions=_buttonActions - In the implementation block
@property (assign,nonatomic,__weak) NSHashTable * volumePressBandits;                                 //@synthesize volumePressBandits=_volumePressBandits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(SBVolumeHardwareButtonActions *)buttonActions;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeButtonType:(long long)arg3 ;
-(void)_createGestureRecognizers;
-(void)addVolumePressBandit:(id)arg1 ;
-(void)removeVolumePressBandit:(id)arg1 ;
-(void)cancelVolumePress;
-(void)volumeIncreasePress:(id)arg1 ;
-(void)volumeDecreasePress:(id)arg1 ;
-(void)_aggdLogVolumeIncreaseButtonDown:(BOOL)arg1 ;
-(void)_logVolumeButtonWithObserver:(id)arg1 down:(BOOL)arg2 ;
-(void)_aggdLogVolumeDecreaseButtonDown:(BOOL)arg1 ;
-(id)preemptablePressGestureRecognizers;
-(NSHashTable *)volumePressBandits;
-(void)setVolumePressBandits:(NSHashTable *)arg1 ;
-(SBPressSequenceObserver *)volumeIncreaseSequenceObserver;
-(SBPressSequenceObserver *)volumeDecreaseSequenceObserver;
@end

