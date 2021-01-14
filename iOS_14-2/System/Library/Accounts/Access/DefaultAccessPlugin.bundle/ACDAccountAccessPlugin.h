/*
* Generated on Thursday, January 14, 2021 at 2:29:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Access/DefaultAccessPlugin.bundle/DefaultAccessPlugin
*/


@protocol ACDAccountAccessPlugin <NSObject>
@required
+(BOOL)supportsAccountTypeWithIdentifier:(id)arg1;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(/*^block*/id)arg6;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4;

@end

