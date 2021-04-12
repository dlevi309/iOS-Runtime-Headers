/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFCRAM_MD5AuthScheme : ECAuthenticationScheme
-(id)name;
-(id)humanReadableName;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(BOOL)hasEncryption;
-(Class)authenticatorClass;
-(BOOL)sendsPlainTextPasswords;
@end

