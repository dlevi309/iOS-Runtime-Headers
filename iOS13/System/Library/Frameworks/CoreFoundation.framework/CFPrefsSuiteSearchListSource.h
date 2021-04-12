/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSearchListSource.h>

@interface CFPrefsSuiteSearchListSource : CFPrefsSearchListSource
-(void)deferredNotifyCausedByLocalWriteOfChangesToKey:(CFStringRef)arg1 fromValue:(void*)arg2 toValue:(void*)arg3 ;
-(void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(CFDictionaryRef)arg1 toDictionary:(CFDictionaryRef)arg2 ;
-(void)handleChangeNotificationForDomainIdentifier:(CFStringRef)arg1 isRemote:(BOOL)arg2 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
@end

