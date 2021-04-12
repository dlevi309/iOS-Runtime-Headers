/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBProximitySensorManagerObserver.h>
#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>

@class SBProximitySensorManager, BSTimer, NSString;

@interface SBRecalibrateProximitySensorMultiphaseHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction> {

	long long _phase;
	SBProximitySensorManager* _sensorManager;
	BSTimer* _timer;

}

@property (assign,nonatomic) long long phase;                                       //@synthesize phase=_phase - In the implementation block
@property (nonatomic,retain) SBProximitySensorManager * sensorManager;              //@synthesize sensorManager=_sensorManager - In the implementation block
@property (nonatomic,retain) BSTimer * timer;                                       //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BSTimer *)timer;
-(void)setTimer:(BSTimer *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(void)_timerDidFire;
-(id)hardwareButtonGestureParameters;
-(id)initWithProximitySensorManager:(id)arg1 ;
-(BOOL)consumeInitialPressDown;
-(BOOL)consumeSinglePressUp;
-(BOOL)disallowsSinglePressForReason:(id*)arg1 ;
-(BOOL)disallowsDoublePressForReason:(id*)arg1 ;
-(BOOL)disallowsTriplePressForReason:(id*)arg1 ;
-(BOOL)disallowsLongPressForReason:(id*)arg1 ;
-(void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2 ;
-(BOOL)_disallowsAnyPressForReason:(id*)arg1 ;
-(SBProximitySensorManager *)sensorManager;
-(void)setSensorManager:(SBProximitySensorManager *)arg1 ;
-(void)_transitionToPhase:(long long)arg1 timeout:(double)arg2 ;
-(void)_transitionToPhase:(long long)arg1 ;
@end

