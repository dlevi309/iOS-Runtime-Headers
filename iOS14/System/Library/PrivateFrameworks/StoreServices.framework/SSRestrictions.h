/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@interface SSRestrictions : NSObject
+(id)setOfActiveRestrictionUUIDs;
+(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
+(void)setAllowExplicitContent;
+(BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+(BOOL)_calculateIsRestrictionsPasscodeSet;
+(BOOL)isActiveAccountAllowedToUpdateRestrictions;
+(void)isExplicitContentDisallowedInCurrentStoreFront:(/*^block*/id)arg1 ;
+(BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(/*^block*/id)arg1 ;
+(void)shouldDisplayExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)didDisplayExplicitRestrictionAlertOfType:(long long)arg1 ;
@end

