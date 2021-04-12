/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	id<AXDeviceMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDeviceMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)bluetoothKeyboardDevices;
-(void)dealloc;
-(void)invalidate;
-(id<AXDeviceMonitorDelegate>)delegate;
-(void)setDelegate:(id<AXDeviceMonitorDelegate>)arg1 ;
-(void)begin;
-(void)didRemoveDevice:(IOHIDDeviceRef)arg1 ;
-(void)_commonInitWithRunLoop:(id)arg1 ;
-(id)_existingDevicesForDevice:(IOHIDDeviceRef)arg1 ;
-(void)informDelegate;
-(id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id)initWithMatchingMultiple:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id)copyDevices;
-(void)didAddDevice:(IOHIDDeviceRef)arg1 ;
@end

