/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADManagedConfigurationHandler
@required
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2;
-(BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
-(id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
-(id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3;

@end

