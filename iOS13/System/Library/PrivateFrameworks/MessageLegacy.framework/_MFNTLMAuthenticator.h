/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFNTLMAuthenticator : ECSASLAuthenticator {

	NtlmGeneratorRef _ntlmGeneratorRef;
	int _ntlmError;

}
-(void)dealloc;
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
@end

