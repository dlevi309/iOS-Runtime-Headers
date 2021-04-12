/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy
+(id)longLivedProxyWithContext:(id)arg1 ;
+(void)clearCachedLongLivedProxies;
+(id)sharedLongLivedProxies;
+(id)_sharedLongLivedProxyForContext:(id)arg1 ;
-(id)description;
-(id)bundleIdentifier;
-(id)applicationBundleID;
-(id)CKPropertiesDescription;
-(BOOL)isLongLived;
-(id)sourceApplicationBundleIdentifier;
-(id)initWithClientContext:(id)arg1 ;
-(BOOL)hasOutOfProcessUIEntitlement;
-(BOOL)hasParticipantPIIEntitlement;
-(void)addOperationWithOperationInfo:(id)arg1 ;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(id)associatedApplicationBundleID;
-(BOOL)hasMasqueradingEntitlement;
-(id)_clientPrefixEntitlement;
-(void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 ;
-(void)_handleCompletionForOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_hasCustomAccountsEntitlement;
-(BOOL)_hasEnvironmentEntitlement;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasZoneProtectionDataEntitlement;
-(BOOL)hasDeviceIdentifierEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(BOOL)hasAllowUnverifiedAccountEntitlement;
-(BOOL)hasExplicitCodeOperationURLEntitlement;
-(id)serviceNameForContainerMapEntitlement;
-(id)applicationBundleIDForPush;
-(id)apsEnvironmentEntitlement;
@end

