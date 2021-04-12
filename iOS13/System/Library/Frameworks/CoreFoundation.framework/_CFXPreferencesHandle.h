/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXPreferences;

@interface _CFXPreferencesHandle : NSObject {

	_CFXPreferences* prefs;
	os_unfair_lock_s lock;
	unsigned overrideEUID;

}
-(id)init;
-(void)dealloc;
-(void)setEUIDOverride:(unsigned)arg1 ;
-(id)copyPrefs;
@end

