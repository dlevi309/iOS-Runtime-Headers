/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsManagedSource : CFPrefsPlistSource
-(BOOL)managed;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containingPreferences:(id)arg4 ;
-(long long)sendMessageSettingValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
@end

