/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)scheme;
-(NSString *)host;
-(long long)port;
-(void)setPort:(long long)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
@end

