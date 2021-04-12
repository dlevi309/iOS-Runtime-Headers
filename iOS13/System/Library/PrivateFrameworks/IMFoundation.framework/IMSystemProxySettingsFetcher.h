/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject {

	unsigned short _port;
	unsigned short _proxyPort;
	id _delegate;
	NSString* _host;
	long long _proxyProtocol;
	NSString* _proxyHost;
	NSString* _proxyAccount;
	NSString* _proxyPassword;

}

@property (nonatomic,copy) NSString * _host;                         //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) unsigned short _port;                   //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long _proxyProtocol;               //@synthesize proxyProtocol=_proxyProtocol - In the implementation block
@property (nonatomic,copy) NSString * _proxyHost;                    //@synthesize proxyHost=_proxyHost - In the implementation block
@property (assign,nonatomic) unsigned short _proxyPort;              //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,copy) NSString * _proxyAccount;                 //@synthesize proxyAccount=_proxyAccount - In the implementation block
@property (nonatomic,copy) NSString * _proxyPassword;                //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (assign) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(unsigned short)_port;
-(NSString *)_host;
-(unsigned short)_proxyPort;
-(NSString *)_proxyPassword;
-(void)_callAccountSettingsDelegateMethod;
-(void)_getProxyAccountAndPasswordFromKeychain;
-(void)_callProxySettingsDelegateMethod;
-(void)_takeProxySettingsFromDictionary:(CFDictionaryRef)arg1 ;
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3 ;
-(id)initWithProxyProtocol:(long long)arg1 proxyHost:(id)arg2 proxyPort:(unsigned short)arg3 delegate:(id)arg4 ;
-(void)retrieveProxySettings;
-(void)retrieveProxyAccountSettings;
-(void)set_host:(NSString *)arg1 ;
-(void)set_port:(unsigned short)arg1 ;
-(long long)_proxyProtocol;
-(void)set_proxyProtocol:(long long)arg1 ;
-(NSString *)_proxyHost;
-(void)set_proxyHost:(NSString *)arg1 ;
-(void)set_proxyPort:(unsigned short)arg1 ;
-(NSString *)_proxyAccount;
-(void)set_proxyAccount:(NSString *)arg1 ;
-(void)set_proxyPassword:(NSString *)arg1 ;
@end

