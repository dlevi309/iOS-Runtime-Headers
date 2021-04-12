/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/


@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject {

	NSDictionary* _accountTypeToPluginNameMap;
	NSMutableDictionary* _pluginCache;

}
+(id)sharedInstance;
-(id)init;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(BOOL)setDelegate:(id)arg1 forSignInController:(id)arg2 forAccountWithType:(id)arg3 ;
-(Class)controllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)_accountViewProviderPluginForAccountTypeID:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)_loadAccountViewProviderPluginWithName:(id)arg1 ;
@end

