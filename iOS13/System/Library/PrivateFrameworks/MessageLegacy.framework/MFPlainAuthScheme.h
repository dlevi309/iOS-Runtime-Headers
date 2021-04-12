/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFPlainAuthScheme : ECAuthenticationScheme
-(id)name;
-(id)humanReadableName;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
@end

