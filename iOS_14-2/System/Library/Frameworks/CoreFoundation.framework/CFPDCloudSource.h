/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

@interface CFPDCloudSource : CFPDContainerSource {

	SYDRemotePreferencesSource* cloudSource;
	CFStringRef _configurationPath;

}
-(void)processEndOfMessageIntendingToRemoveSource:(BOOL*)arg1 ;
-(CFStringRef)debugDump;
-(id)copyPropertyListValidatingPlist:(BOOL)arg1 ;
-(void)synchronizeWithCloud:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 storeName:(id)arg3 configurationPath:(CFStringRef)arg4 containerPath:(CFStringRef)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(BOOL)arg4 ;
-(int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char*)arg5 diagnosticMessage:(const char**)arg6 ;
-(id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1 ;
-(CFStringRef)cloudConfigurationPath;
@end

