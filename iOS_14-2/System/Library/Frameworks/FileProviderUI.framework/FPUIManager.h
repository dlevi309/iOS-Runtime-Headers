/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/


@interface FPUIManager : NSObject
+(id)uiExtensionPluginForProviderDomain:(id)arg1 ;
+(id)actionsForProviderDomain:(id)arg1 ;
+(void)getUIExtensionPlugin:(id*)arg1 nonUIExtensionPlugin:(id*)arg2 forProviderDomain:(id)arg3 ;
+(id)extensionForPlugin:(id)arg1 ;
+(id)extensionMatchingDictionaryForItems:(id)arg1 ;
+(id)authenticationActionForProviderDomain:(id)arg1 ;
+(id)uiActionsForProviderDomain:(id)arg1 ;
+(BOOL)isAction:(id)arg1 eligibleForItems:(id)arg2 ;
@end

