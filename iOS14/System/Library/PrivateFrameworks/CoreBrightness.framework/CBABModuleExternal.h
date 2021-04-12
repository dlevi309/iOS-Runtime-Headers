/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _uniqueID;
	NSString* _displayUUID;
	BOOL _enabled;
	BOOL _available;
	BOOL _presetDisableAB;
	CBABCurve* _curve;
	CBABRamp* _ramp;
	BOOL _updatesFrozen;
	BOOL _suspendAutoBrightness;
	BOOL _fastRamp;
	BOOL _builtIn;
	CBDisplayModule* _displayModule;

}

@property (readonly) CBDisplayModule * displayModule;               //@synthesize displayModule=_displayModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)updateAvailability;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)stop;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
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

