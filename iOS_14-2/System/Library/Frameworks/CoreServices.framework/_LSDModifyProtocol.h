/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol _LSDModifyProtocol
@required
-(void)rebuildApplicationDatabasesForSystem:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)relaxApplicationTypeRequirements:(BOOL)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)unregisterExtensionPoint:(id)arg1 platform:(unsigned)arg2 withVersion:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setHandler:(id)arg1 version:(LSVersionNumber)arg2 roles:(unsigned)arg3 forContentType:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)setHandler:(id)arg1 version:(LSVersionNumber)arg2 forURLScheme:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)synchronizeWithMobileInstallation;
-(void)unregisterApplicationAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeHandlerForURLScheme:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 completionHandler:(/*^block*/id)arg6;
-(void)garbageCollectDatabaseWithCompletionHandler:(/*^block*/id)arg1;
-(void)refreshContentInFrameworkAtURL:(id)arg1 reply:(/*^block*/id)arg2;
-(void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)registerExtensionPoint:(id)arg1 platform:(unsigned)arg2 withInfo:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setPreferenceValue:(id)arg1 forKey:(id)arg2 forApplicationAtURL:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllHandlersWithCompletionHandler:(/*^block*/id)arg1;
-(void)setDatabaseIsSeeded:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeHandlerForContentType:(id)arg1 roles:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)registerContainerURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)unregisterBundleUnit:(unsigned)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)updateContainerUnit:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resetServerStoreWithCompletionHandler:(/*^block*/id)arg1;

@end

