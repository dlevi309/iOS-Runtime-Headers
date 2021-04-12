/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSString, NSDictionary;

@interface SocksHandshake : NSObject {

	BOOL _finished;
	unsigned short _port;
	NSString* _host;
	NSDictionary* _credentials;

}

@property (assign) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (retain) NSString * host;                         //@synthesize host=_host - In the implementation block
@property (assign) unsigned short port;                     //@synthesize port=_port - In the implementation block
@property (retain) NSDictionary * credentials;              //@synthesize credentials=_credentials - In the implementation block
+(id)socksHadshakeWithVersion:(int)arg1 ;
-(NSString *)host;
-(unsigned short)port;
-(void)setPort:(unsigned short)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(void)setHost:(NSString *)arg1 ;
-(id)finish:(int)arg1 ;
-(BOOL)parse:(const char*)arg1 len:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCredentials:(NSDictionary *)arg1 ;
-(NSDictionary *)credentials;
@end

