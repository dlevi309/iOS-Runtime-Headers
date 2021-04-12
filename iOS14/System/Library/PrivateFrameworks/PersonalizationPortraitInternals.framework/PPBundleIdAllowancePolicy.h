/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock;

@interface PPBundleIdAllowancePolicy : NSObject {

	_PASLock* _allowancePolicyLock;

}
+(id)defaultPolicy;
-(BOOL)bundleIdentifierIsAllowed:(id)arg1 blocklist:(id)arg2 allowlist:(id)arg3 ;
-(id)initWithNotificationBlocklist:(id)arg1 notificationAllowlist:(id)arg2 searchableItemBlocklist:(id)arg3 searchableItemAllowlist:(id)arg4 ;
-(BOOL)bundleIdentifierIsAllowedForNotifications:(id)arg1 ;
-(void)_resetGuardedData;
-(id)_readAssetData:(id)arg1 ;
-(id)init_;
-(void)_setGuardedDataWithNotificationBlocklist:(id)arg1 notificationAllowlist:(id)arg2 searchableItemBlocklist:(id)arg3 searchableItemAllowlist:(id)arg4 ;
-(BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)arg1 ;
-(void)_loadAssetData;
@end

