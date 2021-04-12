/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(NSString *)password;
-(void)setName:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 outError:(id*)arg2 ;
-(NSString *)authenticationType;
-(id)localizedAuthenticationType;
-(NSString *)proxyServer;
-(NSNumber *)proxyPort;
-(NSNumber *)defaultProtocolMask;
-(NSNumber *)allowedProtocolMask;
-(NSNumber *)allowedProtocolMaskInRoaming;
-(NSNumber *)allowedProtocolMaskInDomesticRoaming;
-(void)setUsername:(NSString *)arg1 ;
-(void)setProxyServer:(NSString *)arg1 ;
-(void)setProxyPort:(NSNumber *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)setDefaultProtocolMask:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMask:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMaskInRoaming:(NSNumber *)arg1 ;
-(void)setAllowedProtocolMaskInDomesticRoaming:(NSNumber *)arg1 ;
@end

