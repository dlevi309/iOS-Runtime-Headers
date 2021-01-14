/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSearchListSource.h>

@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(void)handleChangeNotificationForDomainIdentifier:(CFStringRef)arg1 isRemote:(BOOL)arg2 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(CFStringRef)arg1 fromValue:(void*)arg2 toValue:(void*)arg3 ;
@end

