/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBContainer.h>
#import <libobjc.A.dylib/CBContainerProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@protocol OS_os_log;
@class NSObject, KeyboardBacklight, NSMutableDictionary, HIDDevice, NSString;

@interface CBKeyboardBacklightContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol> {

	NSObject*<OS_os_log> _logHandle;
	KeyboardBacklight* _keyboardBacklight;
	BOOL _userActive;
	NSMutableDictionary* _properties;
	HIDDevice* _device;

}

@property (readonly) HIDDevice * device;                            //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)stop;
-(BOOL)start;
-(HIDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(id)newKeyboardBacklightWithQueue:(id)arg1 device:(id)arg2 ;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)keyboardUsesNitUnits:(id)arg1 ;
@end

