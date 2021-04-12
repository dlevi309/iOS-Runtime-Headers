/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@interface ACPluginLoader : NSObject
+(void)_populatePluginBundles:(id)arg1 atSubpath:(id)arg2 inAppleInternal:(BOOL)arg3 ;
+(id)_pluginWithName:(id)arg1 inSubpath:(id)arg2 inAppleInternal:(BOOL)arg3 ;
+(id)_accountsPluginDirectoryURL:(id)arg1 inAppleInternal:(BOOL)arg2 ;
+(id)pluginWithName:(id)arg1 inSubpath:(id)arg2 ;
+(id)_validatedBundleAtURL:(id)arg1 ;
+(BOOL)loadInternalPlugins;
+(id)pluginBundlesAtSubpath:(id)arg1 ;
@end

