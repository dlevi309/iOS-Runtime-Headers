/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBDisplayModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, NSUUID, NSArray, NSString;

@interface CBDisplayModuleHIDiOS : CBDisplayModule <CBContainerModuleProtocol> {

	IOHIDDeviceRef _hidDisplayDevice;
	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _containerID;
	IOHIDElementRef _brightnessElement;
	IOHIDElementRef _durationElement;
	NSArray* _elements;
	float _minNits;
	float _maxNits;
	float _currentNits;
	float _nitsScaler;
	float _minLinearBrightness;
	NSObject*<OS_dispatch_queue> _brightnessUpdateQueue;
	unsigned long long _brighntessUpdateCounter;
	float _brightnessUpdateTarget;
	BOOL _noHID;
	unsigned long long _VID;
	unsigned long long _PID;

}

@property (readonly) unsigned long long VID;                        //@synthesize VID=_VID - In the implementation block
@property (readonly) unsigned long long PID;                        //@synthesize PID=_PID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyIdentifiers;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(BOOL)setNits:(float)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(unsigned long long)VID;
-(void)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)stop;
-(BOOL)setSlider:(float)arg1 ;
-(void)dealloc;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(unsigned long long)PID;
-(float)getLinearBrightness;
-(id)initWithDevice:(unsigned)arg1 andQueue:(id)arg2 ;
-(BOOL)getNits:(float*)arg1 ;
-(id)newDisplayBrightnessData;
-(float)getUserBrightnessForNits:(float)arg1 ;
-(BOOL)handleDisplayBrightnessProperty:(id)arg1 ;
-(BOOL)handleDisplayLinearBrightnessProperty:(id)arg1 ;
-(BOOL)setLinearBrightness:(float)arg1 ;
-(float)getNitsForUserBrightness:(float)arg1 ;
-(BOOL)setNits:(float)arg1 withPeriod:(float)arg2 ;
@end

