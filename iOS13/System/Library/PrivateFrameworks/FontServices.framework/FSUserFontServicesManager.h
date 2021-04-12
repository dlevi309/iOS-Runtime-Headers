/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


@interface FSUserFontServicesManager : NSObject
+(void)GSFontRegisterPersistentURLs:(id)arg1 enabled:(BOOL)arg2 forProfileFonts:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
+(void)GSFontEnableOrDisablePersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 enabled:(BOOL)arg3 suspend:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
+(void)GSFontUnregisterPersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
+(id)_UserFontServicesConnection;
@end

