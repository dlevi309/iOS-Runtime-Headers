/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSPrivacyServiceProtocol <NSObject>
@required
-(void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)requestAccessForAuditToken:(SCD_Struct_VS3)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(BOOL)arg4 identityProviderID:(id)arg5 allowUI:(BOOL)arg6 completionHandler:(/*^block*/id)arg7;

@end

