/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol AXDeviceMonitorDelegate;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSRunLoop, NSMutableSet;

@interface AXDeviceMonitor : NSObject {

	NSRunLoop* _targetRunLoop;
	IOHIDManagerRef _hidManager;
	unsigned long long _state;
	NSMutableSet* _devices;
	os_unfair_lock_s _devicesLock;
	id<AXDeviceMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDeviceMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)bluetoothKeyboardDevices;
-(void)_commonInitWithRunLoop:(id)arg1 ;
-(void)begin;
-(id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id<AXDeviceMonitorDelegate>)delegate;
-(id)_existingDevicesForDevice:(IOHIDDeviceRef)arg1 ;
-(void)informDelegate;
-(void)setDelegate:(id<AXDeviceMonitorDelegate>)arg1 ;
-(void)didAddDevice:(IOHIDDeviceRef)arg1 ;
-(void)invalidate;
-(id)initWithMatchingMultiple:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id)copyDevices;
-(void)didRemoveDevice:(IOHIDDeviceRef)arg1 ;
-(void)dealloc;
@end

