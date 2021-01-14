/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
*/

#import <BrightnessControl/BrightnessControl-Structs.h>
#import <BrightnessControl/BCBrtControl.h>

@protocol OS_dispatch_queue;
@class HIDDevice, HIDElement, NSObject;

@interface BCHIDBrtControl : BCBrtControl {

	unsigned _hidBrightnessService;
	HIDDevice* _hidBrightnessDevice;
	HIDElement* _brightnessElement;
	HIDElement* _brightnessFadeElement;
	float _nitsScaler;
	double _nits;
	float _brightnessUpdateTarget;
	unsigned long long _brighntessUpdateCounter;
	NSObject*<OS_dispatch_queue> _brightnessUpdateQueue;
	IONotificationPortRef _boostFactorNotificationPort;
	unsigned _boostFactorNotification;
	float _nitsBoostFactor;
	unsigned long long _registryID;

}

@property (readonly) unsigned long long registryID;              //@synthesize registryID=_registryID - In the implementation block
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
-(id)init;
-(id)initWithService:(unsigned)arg1 ;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)registryID;
-(void)dealloc;
-(id)copyModuleIdentifier;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(BOOL)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)setDisplayService:(unsigned)arg1 ;
-(BOOL)_getDeviceNits:(double*)arg1 ;
-(void)removeDisplayService;
-(BOOL)_setDeviceNits:(double)arg1 ;
-(float)boostFactorFromIOFixed:(int)arg1 ;
-(void)setBoostFactor:(float)arg1 ;
-(void)addDisplayService:(unsigned)arg1 ;
-(void)refreshBoostFactor;
@end

