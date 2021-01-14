/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_dispatch_queue, OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableArray, NightModeControl, HIDManager;

@interface BLControl : NSObject {

	IOHIDEventSystemClientRef _hidSystemClient;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _ignoreBrightnessKey;
	BOOL _overrideIgnoreBrightness;
	BOOL _ignoreALSEvents;
	/*^block*/id _callback;
	void* _callbackContext;
	BOOL _monitorALSOnly;
	BOOL _useMultiCurves;
	int _ecoModeNotificationToken;
	/*^block*/id _ecoModeNotificationHandler;
	int _ecoModePreferencesUpdateNotificationToken;
	/*^block*/id _ecoModePreferencesUpdateNotificationHandler;
	NSMutableDictionary* _clientDisplayMap;
	NSMutableArray* _displayContainers;
	NSMutableArray* _hidServiceClients;
	NSObject*<OS_os_log> _logHandle;
	unsigned long long _builtInDisplayCount;
	NightModeControl* _nightModeControl;
	NSMutableDictionary* _keyboardContainers;
	HIDManager* _keyboardBacklightHIDManager;
	unsigned long long _userActiveNotificationHandle;

}
-(void)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)findBacklight;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)copyPropertyInternalWithKey:(id)arg1 forClient:(id)arg2 ;
-(BOOL)setPropertyInternalWithKey:(id)arg1 property:(id)arg2 client:(id)arg3 ;
-(id)newDevicePariMatchingDictionaryWithPage:(unsigned)arg1 andUsage:(unsigned)arg2 ;
-(BOOL)start;
-(id)copyStatusInfo;
-(void)removeHIDService:(IOHIDServiceClientRef)arg1 ;
-(void)keyboardBacklightHIDDeviceArrived:(id)arg1 ;
-(BOOL)setBLControlPropertyWithKey:(id)arg1 property:(id)arg2 ;
-(BOOL)findDisplays;
-(void)stopDisplayLookup;
-(void)stop;
-(void)handleCADisplay:(id)arg1 ;
-(void)sendNotificationWithKeyboardIDs;
-(id)copyPropertyWithKey:(id)arg1 client:(id)arg2 ;
-(BOOL)startHIDSystemClient;
-(void)cancelHIDSystemClient;
-(BOOL)initKeyboardBacklightHIDManager;
-(void)removeDisplayContainer:(id)arg1 ;
-(void)sendNotificationFor:(id)arg1 withValue:(id)arg2 ;
-(void)addDisplayContainer:(id)arg1 ;
-(void)keyboardBacklightHIDDeviceRemovedInternal:(id)arg1 ;
-(id)copyDisplayList;
-(void)keyboardBacklightHIDDeviceRemoved:(id)arg1 ;
-(id)copyBLControlPropertyWithkey:(id)arg1 ;
-(void)handleCADisplayArrival:(id)arg1 ;
-(void)waitForALSArrival;
-(void)hidServiceArrival:(IOHIDServiceClientRef)arg1 ;
-(void)handleCADisplayRemoval:(id)arg1 ;
-(id)copyDisplayInfo;
-(BOOL)setPropertyWithKey:(id)arg1 property:(id)arg2 client:(id)arg3 ;
-(void)handleNotificationInternalForKey:(id)arg1 withValue:(id)arg2 ;
-(void)dealloc;
-(void)handleUserIsActiveStateChange:(BOOL)arg1 ;
@end

