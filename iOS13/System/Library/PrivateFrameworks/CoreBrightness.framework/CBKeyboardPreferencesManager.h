/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CBKeyboardPreferencesManager : NSObject {

	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _preferences;

}
+(id)sharedInstance;
+(BOOL)setPreference:(id)arg1 forKey:(id)arg2 ;
+(id)copyPreferenceForKey:(id)arg1 ;
+(BOOL)setIntPreference:(int)arg1 forKey:(id)arg2 ;
+(BOOL)setFloatPreference:(float)arg1 forKey:(id)arg2 ;
+(BOOL)setBoolPreference:(BOOL)arg1 forKey:(id)arg2 ;
+(BOOL)getIntPreference:(int*)arg1 forKey:(id)arg2 ;
+(BOOL)getFloatPreference:(float*)arg1 forKey:(id)arg2 ;
+(BOOL)getBoolPreference:(BOOL*)arg1 forKey:(id)arg2 ;
+(id)copyPreferenceForKey:(id)arg1 keyboardID:(unsigned long long)arg2 ;
+(id)copyAllPreferences;
-(id)init;
-(void)dealloc;
-(BOOL)setPreference:(id)arg1 forKey:(id)arg2 ;
-(id)copyPreferenceForKey:(id)arg1 ;
-(id)copyAllPrefereneces;
@end

