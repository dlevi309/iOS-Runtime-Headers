/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSNumber;

@interface MCGlobalHTTPProxyPayload : MCPayload {

	BOOL _proxyPACFallbackAllowed;
	BOOL _proxyCaptiveLoginAllowed;
	int _proxyType;
	NSString* _proxyServer;
	NSNumber* _proxyServerPort;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPACURLString;
	NSString* _credentialUUID;
	NSNumber* _proxyPACFallbackAllowedNum;
	NSNumber* _proxyCaptiveLoginAllowedNum;

}

@property (nonatomic,retain) NSNumber * proxyPACFallbackAllowedNum;               //@synthesize proxyPACFallbackAllowedNum=_proxyPACFallbackAllowedNum - In the implementation block
@property (nonatomic,retain) NSNumber * proxyCaptiveLoginAllowedNum;              //@synthesize proxyCaptiveLoginAllowedNum=_proxyCaptiveLoginAllowedNum - In the implementation block
@property (assign,nonatomic) int proxyType;                                       //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                              //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyServerPort;                          //@synthesize proxyServerPort=_proxyServerPort - In the implementation block
@property (nonatomic,retain) NSString * proxyUsername;                            //@synthesize proxyUsername=_proxyUsername - In the implementation block
@property (nonatomic,retain) NSString * proxyPassword;                            //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,retain) NSString * proxyPACURLString;                        //@synthesize proxyPACURLString=_proxyPACURLString - In the implementation block
@property (assign,nonatomic) BOOL proxyPACFallbackAllowed;                        //@synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed - In the implementation block
@property (assign,nonatomic) BOOL proxyCaptiveLoginAllowed;                       //@synthesize proxyCaptiveLoginAllowed=_proxyCaptiveLoginAllowed - In the implementation block
@property (nonatomic,retain) NSString * credentialUUID;                           //@synthesize credentialUUID=_credentialUUID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)installationWarnings;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)proxyServer;
-(void)setProxyServer:(NSString *)arg1 ;
-(int)proxyType;
-(NSNumber *)proxyServerPort;
-(NSString *)proxyUsername;
-(NSString *)proxyPassword;
-(NSString *)proxyPACURLString;
-(BOOL)proxyPACFallbackAllowed;
-(NSString *)credentialUUID;
-(void)setProxyServerPort:(NSNumber *)arg1 ;
-(void)setProxyUsername:(NSString *)arg1 ;
-(void)setProxyPassword:(NSString *)arg1 ;
-(void)setProxyPACURLString:(NSString *)arg1 ;
-(void)setCredentialUUID:(NSString *)arg1 ;
-(void)setProxyPACFallbackAllowed:(BOOL)arg1 ;
-(NSNumber *)proxyPACFallbackAllowedNum;
-(void)setProxyPACFallbackAllowedNum:(NSNumber *)arg1 ;
-(id)verboseDescription;
-(BOOL)proxyCaptiveLoginAllowed;
-(NSNumber *)proxyCaptiveLoginAllowedNum;
-(void)setProxyCaptiveLoginAllowed:(BOOL)arg1 ;
-(void)setProxyCaptiveLoginAllowedNum:(NSNumber *)arg1 ;
-(void)setProxyType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

