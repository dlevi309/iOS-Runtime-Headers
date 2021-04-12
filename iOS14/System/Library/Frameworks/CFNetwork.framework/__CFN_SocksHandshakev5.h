/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__CFN_SocksHandshake.h>

@class NSMutableSet, NSMutableString;

@interface __CFN_SocksHandshakev5 : __CFN_SocksHandshake {

	BOOL _done;
	unsigned long long _state;
	int _numberOfAuthVersionSupported;
	NSMutableSet* _authMethods;
	unsigned char _addressType;
	int _destinationLen;
	NSMutableString* _domainName;
	unsigned char ipaddr[16];
	int _portLen;
	unsigned short _destPort;
	int _usernameLen;
	NSMutableString* _username;
	int _passwordLen;
	NSMutableString* _password;

}
-(id)finish:(int)arg1 ;
-(BOOL)parse:(const char*)arg1 len:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

