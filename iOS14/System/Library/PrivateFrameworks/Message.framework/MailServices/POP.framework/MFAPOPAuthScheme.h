/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
*/

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFAPOPAuthScheme : ECAuthenticationScheme
+(void)initialize;
-(BOOL)requiresPassword;
-(id)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(id)humanReadableName;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(BOOL)hasEncryption;
-(Class)authenticatorClass;
-(BOOL)supportsAccountType:(id)arg1 ;
@end

