/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}
-(id)init;
-(void)dealloc;
-(void)stop;
-(BOOL)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)setPropertyWithKey:(id)arg1 property:(id)arg2 client:(id)arg3 ;
-(id)copyPropertyWithKey:(id)arg1 client:(id)arg2 ;
-(void)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(void)waitForALSArrival;
-(BOOL)startHIDSystemClient;
-(BOOL)findDisplays;
-(BOOL)findBacklight;
-(BOOL)setPropertyInternalWithKey:(id)arg1 property:(id)arg2 client:(id)arg3 ;
-(BOOL)initKeyboardBacklightHIDManager;
-(void)cancelHIDSystemClient;
-(void)stopDisplayLookup;
-(id)copyPropertyInternalWithKey:(id)arg1 forClient:(id)arg2 ;
-(void)sendNotificationFor:(id)arg1 withValue:(id)arg2 ;
-(void)addDisplayContainer:(id)arg1 ;
-(void)handleCADisplay:(id)arg1 ;
-(void)handleCADisplayArrival:(id)arg1 ;
-(void)handleCADisplayRemoval:(id)arg1 ;
-(void)removeDisplayContainer:(id)arg1 ;
-(void)removeHIDService:(IOHIDServiceClientRef)arg1 ;
-(id)newDevicePariMatchingDictionaryWithPage:(unsigned)arg1 andUsage:(unsigned)arg2 ;
-(void)hidServiceArrival:(IOHIDServiceClientRef)arg1 ;
-(id)copyDisplayList;
-(id)copyDisplayInfo;
-(id)copyStatusInfo;
-(id)copyBLControlPropertyWithkey:(id)arg1 ;
-(BOOL)setBLControlPropertyWithKey:(id)arg1 property:(id)arg2 ;
-(void)handleNotificationInternalForKey:(id)arg1 withValue:(id)arg2 ;
-(void)keyboardBacklightHIDDeviceArrived:(id)arg1 ;
-(void)keyboardBacklightHIDDeviceRemoved:(id)arg1 ;
-(void)sendNotificationWithKeyboardIDs;
@end

