/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBProximitySensorManagerObserver.h>
#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>

@class SBProximitySensorManager, NSString;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction> {

	BOOL _didResetProxCalibration;
	SBProximitySensorManager* _sensorManager;

}

@property (nonatomic,retain) SBProximitySensorManager * sensorManager;              //@synthesize sensorManager=_sensorManager - In the implementation block
@property (assign,nonatomic) BOOL didResetProxCalibration;                          //@synthesize didResetProxCalibration=_didResetProxCalibration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)disallowsDoublePressForReason:(id*)arg1 ;
-(BOOL)disallowsTriplePressForReason:(id*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)hardwareButtonGestureParameters;
-(BOOL)consumeSinglePressUp;
-(BOOL)disallowsSinglePressForReason:(id*)arg1 ;
-(BOOL)disallowsLongPressForReason:(id*)arg1 ;
-(BOOL)consumeInitialPressDown;
-(id)initWithProximitySensorManager:(id)arg1 ;
-(BOOL)_disallowsAnyPressForReason:(id*)arg1 ;
-(SBProximitySensorManager *)sensorManager;
-(void)setSensorManager:(SBProximitySensorManager *)arg1 ;
-(BOOL)didResetProxCalibration;
-(void)setDidResetProxCalibration:(BOOL)arg1 ;
@end

