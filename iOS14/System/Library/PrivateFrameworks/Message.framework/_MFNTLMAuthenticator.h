/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFNTLMAuthenticator : ECSASLAuthenticator {

	NtlmGeneratorRef _ntlmGeneratorRef;
	int _ntlmError;

}
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
-(void)dealloc;
@end

