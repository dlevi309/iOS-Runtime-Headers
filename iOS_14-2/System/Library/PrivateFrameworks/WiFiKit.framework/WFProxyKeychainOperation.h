/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFOperation.h>

@class NSString;

@interface WFProxyKeychainOperation : WFOperation {

	NSString* _password;
	long long _type;
	NSString* _host;
	NSString* _username;
	NSString* _port;

}

@property (assign) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * host;                  //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * port;                  //@synthesize port=_port - In the implementation block
+(id)removePasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 ;
+(id)savePassswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 ;
+(id)getPasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 ;
-(void)setPort:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)port;
-(NSString *)host;
-(void)setUsername:(NSString *)arg1 ;
-(void)start;
-(void)setType:(long long)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(long long)type;
-(id)initWithHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 type:(long long)arg5 ;
-(id)_credentialsForProtectionSpace:(id)arg1 ;
@end

