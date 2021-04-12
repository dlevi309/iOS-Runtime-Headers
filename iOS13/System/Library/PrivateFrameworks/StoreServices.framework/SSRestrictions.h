/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSRestrictions : NSObject
+(id)setOfActiveRestrictionUUIDs;
+(BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+(BOOL)_calculateIsRestrictionsPasscodeSet;
+(BOOL)isActiveAccountAllowedToUpdateRestrictions;
+(BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(/*^block*/id)arg1 ;
+(void)isExplicitContentDisallowedInCurrentStoreFront:(/*^block*/id)arg1 ;
+(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
+(void)setAllowExplicitContent;
+(void)shouldDisplayExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)didDisplayExplicitRestrictionAlertOfType:(long long)arg1 ;
@end

