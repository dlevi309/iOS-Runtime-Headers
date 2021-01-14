/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUCallFilterControllerActions <NSObject>
@required
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3;
-(unsigned long long)filterStatusForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3;

@end

