/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AppTrackingTransparency.framework/AppTrackingTransparency
*/


@interface ATTrackingManager : NSObject
+(BOOL)_userAllowedToChangeSettings;
+(BOOL)_applicationHasDisqualifyingEntitlement;
+(BOOL)_isCrossAppTrackingAllowed;
+(unsigned long long)trackingAuthorizationStatus;
+(void)requestTrackingAuthorizationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

