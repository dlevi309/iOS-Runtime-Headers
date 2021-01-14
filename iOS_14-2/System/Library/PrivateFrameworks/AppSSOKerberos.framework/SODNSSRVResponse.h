/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@class NSString;

@interface SODNSSRVResponse : NSObject {

	unsigned short _port;
	NSString* _host;

}

@property (nonatomic,retain) NSString * host;                  //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;              //@synthesize port=_port - In the implementation block
-(void)setPort:(unsigned short)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(unsigned short)port;
-(NSString *)host;
-(id)init;
-(id)description;
@end

