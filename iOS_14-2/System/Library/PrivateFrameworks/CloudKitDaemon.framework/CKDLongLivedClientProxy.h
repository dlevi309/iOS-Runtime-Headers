/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy
+(id)longLivedProxyWithContext:(id)arg1 ;
+(id)sharedLongLivedProxies;
+(void)clearCachedLongLivedProxies;
+(id)_sharedLongLivedProxyForContext:(id)arg1 ;
-(id)applicationID;
-(BOOL)hasOutOfProcessUIEntitlement;
-(BOOL)_hasCustomAccountsEntitlement;
-(BOOL)_hasEnvironmentEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(id)apsEnvironmentEntitlement;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(id)CKPropertiesDescription;
-(BOOL)isLongLived;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasMasqueradingEntitlement;
-(BOOL)hasValidatedEntitlements;
-(id)description;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasDeviceIdentifierEntitlement;
-(void)_handleCompletionForOperation:(id)arg1 initialMessageReplyBlock:(/*^block*/id)arg2 customCompletionBlock:(/*^block*/id)arg3 ;
-(id)serviceNameForContainerIdentifierMapEntitlement;
-(BOOL)hasZoneProtectionDataEntitlement;
-(id)_clientPrefixEntitlement;
-(id)applicationBundleIdentifierForPush;
-(BOOL)hasParticipantPIIEntitlement;
-(id)initWithClientContext:(id)arg1 ;
-(void)addOperationWithOperationInfo:(id)arg1 ;
-(id)callbackProxyForOperationInfo:(id)arg1 clientProvidedCallbackProxy:(id)arg2 ;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)hasAllowUnverifiedAccountEntitlement;
-(id)applicationBundleID;
-(id)associatedApplicationBundleID;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasNonLegacyShareURLEntitlement;
@end

