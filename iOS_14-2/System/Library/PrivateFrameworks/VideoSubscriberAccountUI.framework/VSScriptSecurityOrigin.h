/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString;

@interface VSScriptSecurityOrigin : NSObject {

	NSString* _scheme;
	NSString* _host;
	long long _port;

}

@property (nonatomic,copy) NSString * scheme;              //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * host;                //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) long long port;               //@synthesize port=_port - In the implementation block
-(void)setPort:(long long)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(long long)port;
-(NSString *)scheme;
-(NSString *)host;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

