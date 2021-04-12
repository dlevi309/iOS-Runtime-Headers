/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Access/DefaultAccessPlugin.bundle/DefaultAccessPlugin
*/

#import <libobjc.A.dylib/ACDAccountAccessPlugin.h>

@class NSString;

@interface ACDefaultAccessPlugin : NSObject <ACDAccountAccessPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountTypeWithIdentifier:(id)arg1 ;
+(id)_supportedAccountTypeIdentifiers;
+(BOOL)_accessAlertSupportedByAccountType:(id)arg1 ;
+(BOOL)_accessAlertFormerlySupportedByAccountType:(id)arg1 ;
+(id)_fullAccessEntitlementForAccountType:(id)arg1 ;
+(id)_defaultAccessEntitlementForAccountType:(id)arg1 ;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_shouldGrantClient:(id)arg1 unrestrictedAccessToAccountType:(id)arg2 ;
-(BOOL)_shouldGrantClient:(id)arg1 defaultAccessToAccountType:(id)arg2 ;
-(void)_presentAccessAlertforClient:(id)arg1 onAccountType:(id)arg2 withHandler:(/*^block*/id)arg3 ;
@end
