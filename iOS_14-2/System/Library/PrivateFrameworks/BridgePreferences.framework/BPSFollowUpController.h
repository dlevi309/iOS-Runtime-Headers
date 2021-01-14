/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@interface BPSFollowUpController : NSObject
+(id)_currentDevice;
+(id)baseDomainIdentifier;
+(void)addFollowUpForIdentifier:(id)arg1 withAttributes:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)removeFollowUpForIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)markSkippedSetupPaneClassForCurrentDevice:(Class)arg1 ;
+(void)markSkippedSetupPaneClass:(Class)arg1 forDevice:(id)arg2 ;
+(void)removeSkippedPaneClass:(Class)arg1 forDevice:(id)arg2 ;
+(id)skippedSetupPaneClassesForDevice:(id)arg1 ;
+(id)_domainAccessorForDevice:(id)arg1 ;
+(void)removeSkippedPaneClassForCurrentDevice:(Class)arg1 ;
+(id)skippedSetupPaneClassesForCurrentDevice;
@end

