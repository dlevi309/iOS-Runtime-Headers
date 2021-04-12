/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

@interface CFPDCloudSource : CFPDContainerSource {

	SYDRemotePreferencesSource* cloudSource;
	CFStringRef _configurationPath;

}
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 storeName:(id)arg3 configurationPath:(CFStringRef)arg4 containerPath:(CFStringRef)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(CFStringRef)debugDump;
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1 ;
-(CFStringRef)cloudConfigurationPath;
-(BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(BOOL)arg4 ;
-(id)copyPropertyListValidatingPlist:(BOOL)arg1 ;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(id)copyConfigurationFromPath:(CFStringRef)arg1 ;
-(void)registerForChangeNotifications;
-(void)synchronizeWithCloud:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)_writeToDisk:(BOOL)arg1 ;
@end

