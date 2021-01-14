/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/

#import <AppSSOKerberos/SOAsynchronousOperation.h>

@class NSString;

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation {

	BOOL _requireTLSForLDAP;
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
@property (assign,nonatomic) BOOL requireTLSForLDAP;                   //@synthesize requireTLSForLDAP=_requireTLSForLDAP - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)setPort:(unsigned short)arg1 ;
-(NSString *)realm;
-(void)setHost:(NSString *)arg1 ;
-(unsigned short)port;
-(NSString *)host;
-(void)setCompletion:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)completion;
-(void)main;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(void)setRequireTLSForLDAP:(BOOL)arg1 ;
-(BOOL)requireTLSForLDAP;
-(id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andRequireTLSForLDAP:(BOOL)arg5 andCompletion:(/*^block*/id)arg6 ;
@end

