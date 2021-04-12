/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


@interface FSUserFontManager : NSObject
+(id)userFontsInfo;
+(void)synchronizeFontAssets:(/*^block*/id)arg1 ;
+(void)enableOrDisablePersistentURLs:(id)arg1 enabled:(BOOL)arg2 ;
+(double)secondsSinceLastAccessed:(id)arg1 ;
+(void)deleteAppDialogWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)knownFontProviders;
+(void)suspendFontProvider:(id)arg1 ;
+(id)xpcInterface;
+(id)directoryNameFromIdentifier:(id)arg1 ;
+(id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long*)arg1 andRemovedCount:(unsigned long long*)arg2 andProfileFontsCount:(unsigned long long*)arg3 ;
+(id)resumeSuspendedFontFiles;
+(void)synchronizeFontProviders;
+(id)registeredFontsForIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
+(void)uninstallFonts:(id)arg1 forIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)unregisterAndRemoveFontFilesForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)registeredFamiliesForIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
+(void)reset;
+(id)profileFontsInfo;
+(id)registeredFontsInfoForIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
+(id)identifierFromDirectoryName:(id)arg1 ;
+(void)_removeAllUserFonts;
+(id)suspendedFontProviders;
+(void)installFonts:(id)arg1 forIdentifier:(id)arg2 enabled:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)_UserFontManagerConnection;
@end

