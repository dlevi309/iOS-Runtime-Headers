/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)volumeIncreasePress:(id)arg1 ;
-(SBPressSequenceObserver *)volumeIncreaseSequenceObserver;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)cancelVolumePress;
-(void)setVolumePressBandits:(NSHashTable *)arg1 ;
-(void)_aggdLogVolumeDecreaseButtonDown:(BOOL)arg1 ;
-(id)preemptablePressGestureRecognizers;
-(void)_logVolumeButtonWithObserver:(id)arg1 down:(BOOL)arg2 ;
-(NSHashTable *)volumePressBandits;
-(void)volumeDecreasePress:(id)arg1 ;
-(SBVolumeHardwareButtonActions *)buttonActions;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeButtonType:(long long)arg3 ;
-(SBPressSequenceObserver *)volumeDecreaseSequenceObserver;
-(void)_aggdLogVolumeIncreaseButtonDown:(BOOL)arg1 ;
-(void)addVolumePressBandit:(id)arg1 ;
-(void)_createGestureRecognizers;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)removeVolumePressBandit:(id)arg1 ;
@end

