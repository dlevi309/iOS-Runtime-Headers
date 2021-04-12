/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@protocol NEProfilePayloadBaseDelegate;
@class NSMutableDictionary, NSString;

@interface MCVPNPayloadBase : MCPayload {

	NSMutableDictionary* _configurationDictionary;
	NSString* _serviceName;
	NSString* _vpnType;
	id<NEProfilePayloadBaseDelegate> _nePayloadBase;
	NSString* _userNameKey;
	NSString* _passwordKey;
	NSString* _proxyUserNameKey;
	NSString* _proxyPasswordKey;
	NSString* _sharedSecretKey;
	NSString* _pinKey;

}

@property (nonatomic,retain) NSString * userNameKey;                                      //@synthesize userNameKey=_userNameKey - In the implementation block
@property (nonatomic,retain) NSString * passwordKey;                                      //@synthesize passwordKey=_passwordKey - In the implementation block
@property (nonatomic,retain) NSString * proxyUserNameKey;                                 //@synthesize proxyUserNameKey=_proxyUserNameKey - In the implementation block
@property (nonatomic,retain) NSString * proxyPasswordKey;                                 //@synthesize proxyPasswordKey=_proxyPasswordKey - In the implementation block
@property (nonatomic,retain) NSString * sharedSecretKey;                                  //@synthesize sharedSecretKey=_sharedSecretKey - In the implementation block
@property (nonatomic,retain) NSString * pinKey;                                           //@synthesize pinKey=_pinKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configurationDictionary;               //@synthesize configurationDictionary=_configurationDictionary - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * vpnType;                                            //@synthesize vpnType=_vpnType - In the implementation block
@property (nonatomic,retain) id<NEProfilePayloadBaseDelegate> nePayloadBase;              //@synthesize nePayloadBase=_nePayloadBase - In the implementation block
+(id)NEAlwaysOnVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1 ;
+(id)NEVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1 ;
-(id)description;
-(NSString *)serviceName;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)installationWarnings;
-(void)setNePayloadBase:(id<NEProfilePayloadBaseDelegate>)arg1 ;
-(id<NEProfilePayloadBaseDelegate>)nePayloadBase;
-(NSMutableDictionary *)configurationDictionary;
-(BOOL)isPayloadAllowed;
-(NSString *)vpnType;
-(void)setConfigurationDictionary:(NSMutableDictionary *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setVpnType:(NSString *)arg1 ;
-(NSString *)userNameKey;
-(void)setUserNameKey:(NSString *)arg1 ;
-(NSString *)passwordKey;
-(void)setPasswordKey:(NSString *)arg1 ;
-(NSString *)proxyUserNameKey;
-(void)setProxyUserNameKey:(NSString *)arg1 ;
-(NSString *)proxyPasswordKey;
-(void)setProxyPasswordKey:(NSString *)arg1 ;
-(NSString *)sharedSecretKey;
-(void)setSharedSecretKey:(NSString *)arg1 ;
-(NSString *)pinKey;
-(void)setPinKey:(NSString *)arg1 ;
@end

