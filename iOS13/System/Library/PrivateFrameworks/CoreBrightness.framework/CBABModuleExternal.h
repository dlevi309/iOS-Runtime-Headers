/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@class NSMutableArray, NSString, CBABCurve, CBABRamp, CBDisplayModule;

@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {

	NSMutableArray* _ALSServices;
	NSString* _containerID;
	BOOL _enabled;
	BOOL _available;
	BOOL _presetDisableAB;
	CBABCurve* _curve;
	CBABRamp* _ramp;
	BOOL _updatesFrozen;
	BOOL _suspendAutoBrightness;
	BOOL _fastRamp;
	CBDisplayModule* _displayModule;

}

@property (readonly) CBDisplayModule * displayModule;               //@synthesize displayModule=_displayModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)stop;
-(void)start;
-(void)updateAvailability;
-(id)copyPropertyForKey:(id)arg1 ;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2 ;
-(void)updateAutoBrightnessState:(BOOL)arg1 ;
-(void)userBrightnessCommitHandler;
-(void)userBrightnessChangingHandler;
-(void)updateBrightnessForce:(BOOL)arg1 periodOverride:(BOOL)arg2 period:(float)arg3 ;
-(void)storeCurveToPreferences;
-(BOOL)getAggregatedLux:(float*)arg1 ;
-(void)endFastRamp;
-(BOOL)newALSService:(IOHIDServiceClientRef)arg1 ;
-(void)updateBrightness;
-(CBDisplayModule *)displayModule;
@end

