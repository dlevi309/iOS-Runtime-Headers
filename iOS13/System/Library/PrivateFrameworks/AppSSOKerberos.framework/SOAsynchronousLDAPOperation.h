/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/

#import <AppSSOKerberos/SOAsynchronousOperation.h>

@class NSString;

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation {

	unsigned short _port;
	/*^block*/id _completion;
	NSString* _realm;
	NSString* _host;
	NSString* _bundleIdentifier;

}

@property (copy) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSString * realm;                         //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * host;                          //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)host;
-(unsigned short)port;
-(NSString *)bundleIdentifier;
-(void)setPort:(unsigned short)arg1 ;
-(void)main;
-(void)setHost:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andCompetion:(/*^block*/id)arg5 ;
@end

