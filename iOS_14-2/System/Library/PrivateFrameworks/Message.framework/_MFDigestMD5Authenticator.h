/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailCore/ECSASLAuthenticator.h>

@class NSData;

@interface _MFDigestMD5Authenticator : ECSASLAuthenticator {

	unsigned _maxbuf : 16;
	unsigned _securityLevel : 2;
	NSData* _expectedResponse;
	void* _cryptInfo;

}
-(long long)securityLevel;
-(id)responseForServerData:(id)arg1 ;
-(void)setMaxBuffer:(unsigned)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
-(void)setSecurityLevel:(long long)arg1 ;
-(void)setCryptInfo:(void*)arg1 ;
-(void)setExpectedResponse:(id)arg1 ;
-(void)dealloc;
@end

