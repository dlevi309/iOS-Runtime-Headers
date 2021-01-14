/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXDeviceMonitorDelegate.h>

@class AXDeviceMonitor, AXEventProcessor, NSSet, NSHashTable, NSString;

@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate> {

	AXDeviceMonitor* _deviceMonitor;
	AXEventProcessor* _eventProcessor;
	os_unfair_lock_s _cachedMouseDevicesLock;
	NSSet* _cachedMouseDevices;
	os_unfair_lock_s _observerLock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL currentDevicesHaveAssistiveTouchCustomActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_mouseMatching;
-(void)addObserver:(id)arg1 ;
-(id)discoveredMouseDevices;
-(void)mouseSettingsDidChange;
-(void)deviceMonitorDidDetectDeviceEvent:(id)arg1 ;
-(void)endFilteringButtonEvents;
-(BOOL)currentDevicesHaveAssistiveTouchCustomActions;
-(void)removeObserver:(id)arg1 ;
-(void)beginFilteringButtonEvents;
-(id)_init;
-(void)_finishHandlingMouseButtonEvent:(id)arg1 buttonMask:(double)arg2 creatorHIDServiceClient:(IOHIDServiceClientRef)arg3 ;
-(BOOL)_handleMouseButtonEvent:(id)arg1 ;
-(void)dealloc;
@end

