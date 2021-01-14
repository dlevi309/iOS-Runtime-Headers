/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEUIDOverride:(unsigned)arg1 ;
-(id)copyPrefs;
-(void)dealloc;
@end

