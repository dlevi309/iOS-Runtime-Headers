/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
@class BrightnessSystemClient, NSObject;

@interface KeyboardBrightnessClient : NSObject {

	BrightnessSystemClient* bsc;
	NSObject*<OS_os_log> _logHandle;

}
-(id)init;
-(void)dealloc;
-(void)unregisterKeyboardNotificationBlock;
-(BOOL)setBrightness:(float)arg1 fadeSpeed:(int)arg2 commit:(BOOL)arg3 forKeyboard:(unsigned long long)arg4 ;
-(id)copyKeyboardBacklightIDs;
-(BOOL)isBacklightSuppressedOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)isBacklightSaturatedOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)isBacklightDimmedOnKeyboard:(unsigned long long)arg1 ;
-(float)brightnessForKeyboard:(unsigned long long)arg1 ;
-(BOOL)setBrightness:(float)arg1 forKeyboard:(unsigned long long)arg2 ;
-(BOOL)enableAutoBrightness:(BOOL)arg1 forKeyboard:(unsigned long long)arg2 ;
-(BOOL)isAmbientFeatureAvailableOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)isKeyboardBuiltIn:(unsigned long long)arg1 ;
-(double)idleDimTimeForKeyboard:(unsigned long long)arg1 ;
-(BOOL)setIdleDimTime:(double)arg1 forKeyboard:(unsigned long long)arg2 ;
-(BOOL)suspendIdleDimming:(BOOL)arg1 forKeyboard:(unsigned long long)arg2 ;
-(BOOL)isIdleDimmingSuspendedOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)isAutoBrightnessEnabledForKeyboard:(unsigned long long)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
@end

