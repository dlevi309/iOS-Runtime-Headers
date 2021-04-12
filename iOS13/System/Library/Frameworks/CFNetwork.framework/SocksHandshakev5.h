/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/SocksHandshake.h>

@class NSMutableSet, NSMutableString;

@interface SocksHandshakev5 : SocksHandshake {

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

