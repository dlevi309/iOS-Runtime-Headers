/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString, NSNumber;

@interface MCAPNConfiguration : NSObject {

	NSString* _name;
	NSString* _username;
	NSString* _password;
	NSString* _proxyServer;
	NSNumber* _proxyPort;
	NSString* _authenticationType;
	NSNumber* _defaultProtocolMask;
	NSNumber* _allowedProtocolMask;
	NSNumber* _allowedProtocolMaskInRoaming;
	NSNumber* _allowedProtocolMaskInDomesticRoaming;

}

@property (nonatomic,retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * username;                                          //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                          //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                                       //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyPort;                                         //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,retain) NSString * authenticationType;                                //@synthesize authenticationType=_authenticationType - In the implementation block
@property (nonatomic,retain) NSNumber * defaultProtocolMask;                               //@synthesize defaultProtocolMask=_defaultProtocolMask - In the implementation block
@property (nonatomic,retain) NSNumber * allowedProtocolMask;                               //@synthesize allowedProtocolMask=_allowedProtocolMask - In the implementation block
@property (nonatomic,retain) NSNumber * allowedProtocolMaskInRoaming;                      //@synthesize allowedProtocolMaskInRoaming=_allowedProtocolMaskInRoaming - In the implementation block
@property (nonatomic,retain) NSNumber * allowedProtocolMaskInDomesticRoaming;              //@synthesize allowedProtocolMaskInDomesticRoaming=_allowedProtocolMaskInDomesticRoaming - In the implementation block
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)authenticationType;
-(NSNumber *)proxyPort;
-(NSString *)proxyServer;
-(void)setProxyServer:(NSString *)arg1 ;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(id)initWithDictionary:(id)arg1 outError:(id*)arg2 ;
-(id)localizedAuthenticationType;
-(NSNumber *)defaultProtocolMask;
-(NSNumber *)allowedProtocolMask;
-(NSNumber *)allowedProtocolMaskInRoaming;
-(NSNumber *)allowedProtocolMaskInDomesticRoaming;
-(void)setDefaultProtocolMask:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMask:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMaskInRoaming:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMaskInDomesticRoaming:(NSNumber *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(NSString *)name;
-(id)description;
-(void)setPassword:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)stubDictionary;
@end

