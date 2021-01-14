/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFNewcastleAuthScheme : ECAuthenticationScheme
+(void)initialize;
-(BOOL)requiresPassword;
-(id)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(id)humanReadableName;
-(Class)authenticatorClass;
@end

