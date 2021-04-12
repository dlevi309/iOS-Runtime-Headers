/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBContainer.h>
#import <libobjc.A.dylib/CBContainerProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@protocol OS_os_log;
@class NSObject, KeyboardBacklight, NSMutableDictionary, HIDDevice, NSString;

@interface CBKeyboardBacklightContainer : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {

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
-(id)copyIdentifiers;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(BOOL)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)stop;
-(HIDDevice *)device;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
-(void)keyboardBacklightInitialization;
-(BOOL)keyboardUsesNitUnits:(id)arg1 ;
-(id)newKeyboardBacklightWithQueue:(id)arg1 device:(id)arg2 ;
@end

