/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFCRAM_MD5AuthScheme : ECAuthenticationScheme
-(id)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(id)humanReadableName;
-(BOOL)hasEncryption;
-(Class)authenticatorClass;
-(BOOL)sendsPlainTextPasswords;
@end

