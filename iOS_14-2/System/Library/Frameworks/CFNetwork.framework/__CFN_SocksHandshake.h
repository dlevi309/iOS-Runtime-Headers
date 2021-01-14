/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSString, NSDictionary;

@interface __CFN_SocksHandshake : NSObject {

	BOOL _finished;
	unsigned short _port;
	NSString* _host;
	NSDictionary* _credentials;

}
-(id)finish:(int)arg1 ;
-(BOOL)parse:(const char*)arg1 len:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

