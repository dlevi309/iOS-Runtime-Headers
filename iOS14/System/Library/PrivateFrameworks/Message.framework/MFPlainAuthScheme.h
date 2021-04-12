/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFPlainAuthScheme : ECAuthenticationScheme
-(id)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(id)humanReadableName;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
@end

