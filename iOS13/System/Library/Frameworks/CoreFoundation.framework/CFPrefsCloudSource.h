/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsCloudSource : CFPrefsPlistSource {

	const char* _configPath;
	const char* _storeName;
	BOOL _enabled;

}
-(void)dealloc;
-(id)createSynchronizeMessage;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(int)alreadylocked_updateObservingRemoteChanges;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 sourceDictionary:(CFDictionaryRef)arg2 cloudKeyEvaluator:(/*^block*/id)arg3 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(void)setStoreName:(CFStringRef)arg1 ;
@end

