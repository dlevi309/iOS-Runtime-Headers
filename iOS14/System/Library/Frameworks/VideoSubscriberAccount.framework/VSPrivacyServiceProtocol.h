/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSPrivacyServiceProtocol <NSObject>
@required
-(void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)requestAccessForAuditToken:(SCD_Struct_VS3)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(BOOL)arg4 identityProviderID:(id)arg5 allowUI:(BOOL)arg6 completionHandler:(/*^block*/id)arg7;

@end

