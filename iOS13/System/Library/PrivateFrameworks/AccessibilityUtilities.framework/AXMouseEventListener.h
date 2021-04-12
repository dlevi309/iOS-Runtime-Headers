/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)deviceMonitorDidDetectDeviceEvent:(id)arg1 ;
-(void)beginFilteringEvents;
-(void)endFilteringEvents;
-(void)_handleMouseButtonEvent:(id)arg1 ;
-(void)mouseSettingsDidChange;
-(id)discoveredMouseDevices;
-(BOOL)currentDevicesHaveAssistiveTouchCustomActions;
@end

