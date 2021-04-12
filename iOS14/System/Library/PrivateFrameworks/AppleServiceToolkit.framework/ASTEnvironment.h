/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
*/


@class NSURL, NSString, NSNumber;

@interface ASTEnvironment : NSObject {

	unsigned long long _environmentType;
	unsigned long long _server;
	NSURL* _serverURL;
	NSString* _SOCKSProxyServer;
	NSNumber* _SOCKSProxyPort;

}

@property (assign,nonatomic) unsigned long long environmentType;                              //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) unsigned long long server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                                               //@synthesize serverURL=_serverURL - In the implementation block
@property (setter=OCKSProxyServer,nonatomic,retain) NSString * SOCKSProxyServer;              //@synthesize SOCKSProxyServer=_SOCKSProxyServer - In the implementation block
@property (setter=OCKSProxyPort,nonatomic,retain) NSNumber * SOCKSProxyPort;                  //@synthesize SOCKSProxyPort=_SOCKSProxyPort - In the implementation block
+(id)currentEnvironment;
+(BOOL)isInternalBuild;
+(void)resetEnvironment;
+(id)environmentWithEnvironmentType:(unsigned long long)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
-(id)init;
-(void)setServer:(unsigned long long)arg1 ;
-(NSURL *)serverURL;
-(unsigned long long)server;
-(unsigned long long)environmentType;
-(void)setEnvironmentType:(unsigned long long)arg1 ;
-(id)_defaultServerURL;
-(NSString *)SOCKSProxyServer;
-(NSNumber *)SOCKSProxyPort;
-(id)initWithEnvironmentType:(unsigned long long)arg1 ;
-(unsigned long long)_defaultServerSelection;
-(id)_generateServerURL;
-(id)_environmentServerString;
-(void)setSOCKSProxyServer:(NSString *)arg1 ;
-(void)setSOCKSProxyPort:(NSNumber *)arg1 ;
@end

