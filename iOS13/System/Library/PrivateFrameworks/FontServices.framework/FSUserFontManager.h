/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


@interface FSUserFontManager : NSObject
+(void)reset;
+(void)installFonts:(id)arg1 forIdentifier:(id)arg2 enabled:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)uninstallFonts:(id)arg1 forIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)unregisterAndRemoveFontFilesForIdentifier:(id)arg1 ignoringError:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_removeAllUserFonts;
+(id)_UserFontManagerConnection;
+(id)registeredFamiliesForIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
+(id)registeredFontsInfoForIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
+(id)registeredFontsForIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
+(void)deleteAppDialogWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)enableOrDisablePersistentURLs:(id)arg1 enabled:(BOOL)arg2 ;
+(id)userFontsInfo;
+(id)directoryNameFromIdentifier:(id)arg1 ;
+(double)secondsSinceLastAccessed:(id)arg1 ;
+(id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long*)arg1 andRemovedCount:(unsigned long long*)arg2 andProfileFontsCount:(unsigned long long*)arg3 ;
+(id)resumeSuspendedFontFiles;
+(void)suspendFontProvider:(id)arg1 ;
+(id)suspendedFontProviders;
+(id)knownFontProviders;
+(void)synchronizeFontProviders;
+(id)identifierFromDirectoryName:(id)arg1 ;
@end

