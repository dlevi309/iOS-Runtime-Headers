/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUCallFilterControllerActions <NSObject>
@required
-(BOOL)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;
-(BOOL)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3;
-(unsigned long long)filterStatusForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(BOOL)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(BOOL)arg3;
-(BOOL)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;

@end

