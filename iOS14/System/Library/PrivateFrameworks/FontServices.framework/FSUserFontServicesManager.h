/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/


@interface FSUserFontServicesManager : NSObject
+(void)GSFontRegisterPersistentURLs:(id)arg1 enabled:(BOOL)arg2 forProfileFonts:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
+(void)GSFontUnregisterPersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
+(void)GSFontEnableOrDisablePersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 enabled:(BOOL)arg3 suspend:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
+(id)_UserFontServicesConnection;
@end

