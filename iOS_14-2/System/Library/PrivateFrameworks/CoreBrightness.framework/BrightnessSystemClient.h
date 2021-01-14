/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
@class BrightnessSystemClientInternal, NSObject;

@interface BrightnessSystemClient : NSObject {

	BrightnessSystemClientInternal* bsci;
	NSObject*<OS_os_log> _logHandle;
	/*^block*/id _displayNotificationBlock;
	/*^block*/id _keyboardNotificationBlock;
	/*^block*/id _propertyNotificationBlock;

}
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerKeyboardNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(BOOL)isAlsSupported;
-(id)init;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)registerNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKeys:(id)arg1 ;
-(void)registerNotificationForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 andDisplay:(unsigned long long)arg3 ;
-(void)unregisterKeyboardNotificationBlock;
-(void)unregisterNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)unregisterPropertyNotificationBlock;
-(void)unregisterNotificationForKey:(id)arg1 ;
-(void)unregisterNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerDisplayNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(void)unregisterDisplayNotificationBlock;
-(void)registerNotificationForKeys:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 keyboardID:(unsigned long long)arg3 ;
-(id)copyPropertyForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
@end

