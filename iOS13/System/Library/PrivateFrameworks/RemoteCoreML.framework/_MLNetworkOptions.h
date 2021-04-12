/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject {

	NSMutableDictionary* _networkOptions;
	long long _receiveTimeout;

}

@property (nonatomic,readonly) NSMutableDictionary * networkOptions;              //@synthesize networkOptions=_networkOptions - In the implementation block
@property (nonatomic,readonly) long long receiveTimeout;                          //@synthesize receiveTimeout=_receiveTimeout - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(const char*)port;
-(const char*)localPort;
-(unsigned long long)family;
-(BOOL)useAWDL;
-(const char*)psk;
-(BOOL)useUDP;
-(BOOL)useTLS;
-(BOOL)useBonjour;
-(const char*)networkNameIdentifier;
-(const char*)localAddr;
-(long long)receiveTimeoutValue;
-(NSMutableDictionary *)networkOptions;
-(long long)receiveTimeout;
@end

