/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject {

	NSMutableDictionary* _networkOptions;
	long long _receiveTimeout;

}

@property (nonatomic,readonly) NSMutableDictionary * networkOptions;              //@synthesize networkOptions=_networkOptions - In the implementation block
@property (nonatomic,readonly) long long receiveTimeout;                          //@synthesize receiveTimeout=_receiveTimeout - In the implementation block
-(const char*)psk;
-(id)initWithOptions:(id)arg1 ;
-(const char*)port;
-(const char*)localPort;
-(unsigned long long)family;
-(BOOL)useAWDL;
-(BOOL)useUDP;
-(BOOL)useTLS;
-(NSMutableDictionary *)networkOptions;
-(BOOL)useBonjour;
-(const char*)networkNameIdentifier;
-(const char*)localAddr;
-(long long)receiveTimeoutValue;
-(long long)receiveTimeout;
@end

